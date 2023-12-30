#include <iostream>
#include <queue>
using namespace std;
class BinaryTreeNode {
   public:
    int data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;
    BinaryTreeNode(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
    ~BinaryTreeNode() {
        if (left) delete left;
        if (right) delete right;
    }
};

BinaryTreeNode *takeInput() {
    int rootData;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode *root = new BinaryTreeNode(rootData);
    queue<BinaryTreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode *currentNode = q.front();
        q.pop();
        int leftChild, rightChild;
        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode *leftNode = new BinaryTreeNode(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }
        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode *rightNode = new BinaryTreeNode(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

void InOrderPrintBST(BinaryTreeNode *root){
    if(root == NULL)return;
    InOrderPrintBST(root -> left);
    cout<<root -> data<<" ";
    InOrderPrintBST(root -> right);
}

class checkBST{
	public:
	int max;
	int min;
	bool isbst;
};

checkBST helperfun(BinaryTreeNode *root){
	if(root == NULL){
		checkBST output;
		output.max=INT_MIN;
		output.min=INT_MAX;
		output.isbst=true;
		return output;
	}
	checkBST leftans=helperfun(root ->left);
	checkBST rightans=helperfun(root -> right);
	int maxdata=max(root -> data,max(leftans.max,rightans.max));
	int mindata=min(root -> data, min(leftans.min,rightans.min));
	bool finalans=root -> data>leftans.max && root -> data<=rightans.min && leftans.isbst && rightans.isbst;
	checkBST output;
	output.max=maxdata;
	output.min=mindata;
	output.isbst=finalans;
	return output;
}

bool isBST(BinaryTreeNode *root) {
	return helperfun(root).isbst;
}

BinaryTreeNode* minValueNode(BinaryTreeNode* node) {
    BinaryTreeNode* current = node;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}
BinaryTreeNode* maxValueNode(BinaryTreeNode* node) {
    BinaryTreeNode* current = node;
    while (current && current->right != NULL) {
        current = current->right;
    }
    return current;
}
BinaryTreeNode* inorderPredecessor(BinaryTreeNode* root, int value) {
    BinaryTreeNode* current = root;
    BinaryTreeNode* successor = NULL;
    while (current != NULL && current->data != value) {
        if (value < current->data) {
            current = current->left;
        } 
        else {
            successor = current;
            current = current->right;
        }
    }
    if (current == NULL) {
        return NULL;
    }
    if (current->left != NULL) {
        return maxValueNode(current->left);
    } 
    else {
        return successor;
    }
}
BinaryTreeNode* inorderSuccessor(BinaryTreeNode* root, int value) {
    BinaryTreeNode* current = root;
    BinaryTreeNode* successor = NULL;
    while (current != NULL && current->data != value) {
        if (value < current->data) {
            successor = current;
            current = current->left;
        } 
        else {
            current = current->right;
        }
    }
    if (current == NULL) {
        return NULL;
    }
    if (current->right != NULL) {
        return minValueNode(current->right);
    } 
    else {
        return successor;
    }
}

BinaryTreeNode* deleteData(int data, BinaryTreeNode* node) {
		if (node == NULL) {
			return NULL;
		}
		if (data > node->data) {
			node->right = deleteData(data, node->right);
			return node;
		} else if (data < node->data) {
			node->left = deleteData(data, node->left);
			return node;
		} else {
			if (node->left == NULL && node->right == NULL) {
				delete node;
				return NULL;
			} else if (node->left == NULL) {
				BinaryTreeNode* temp = node->right;
				node->right = NULL;
				delete node;
				return temp;
			} else if (node->right == NULL) {
				BinaryTreeNode* temp = node->left;
				node->left = NULL;
				delete node;
				return temp; 
			} else {
				BinaryTreeNode* minNode = node->right;
				while (minNode->left != NULL) {
					minNode = minNode->left;
				}
				int rightMin = minNode->data;
				node->data = rightMin;
				node->right = deleteData(rightMin, node->right);
				return node;
			}
		}
}

bool searchInBST(BinaryTreeNode *root , int k) {
	if(root == NULL){
		return false;
	}
    bool ans = false;
	if(k==root -> data){
		return true;
	}
	else if(k<root -> data){
		ans = searchInBST(root ->left,k);
	}
	else if(k> root -> data){
		ans = searchInBST(root -> right,k);
	}
    return ans;
}

int main() {
    BinaryTreeNode *root = takeInput();
    // InOrderPrintBST(root);
    // cout<<"Check if the binary tree is binary Search Tree Or Not"<<endl;
    // cout << (isBST(root) ? "true" : "false");
    // if(isBST(root)==0){
    //     return 0;
    // }
    // int k;
    // cout<<endl;
    // cout<<"Enter the number you want to search for "<<endl;
    // cin >> k;
    // cout << ((searchInBST(root, k)) ? "true" : "false")<<endl;
    int a;
    cout<<"Enter the number whose Inorder Sucessor you want "<<endl;
    cin>>a;
    cout<<inorderPredecessor(root,a)->data<<endl;
    // int n;
    // cout<<"Enter the number you want to delete "<<endl;
    // cin>>n;
    // root = deleteData(n,root);
    // InOrderPrintBST(root);
    // cout<<"Check if the binary tree is binary Search Tree Or Not"<<endl;
    // cout << (isBST(root) ? "true" : "false");
    // delete root;
}

// ----------------------------- Sample Test Case-------------------------------
/*
BST

22 15 57
4 18
35 83
-1 -1
-1 19
-1 38
-1 99
-1 -1
-1 -1
-1 -1

Not BST

5 2 10
0 1
-1 15
-1 -1
-1 -1
-1 -1

*/