#include <iostream>
#include<queue>
using namespace std;

class ListNode {
public:
    int data;
    ListNode* next;
    ListNode(int val) : data(val), next(nullptr) {}
};

class List {
private:
    ListNode* head;
public:
    List() : head(nullptr) {}
    void push_back(int val) {
        ListNode* newNode = new ListNode(val);
        if (!head) {
            head = newNode;
            return;
        }
        ListNode* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    ListNode* getHead() {
        return head;
    }
};

class Graph {
    int V;
    List* adjacencyList;
    void DFS(int v, bool visited[]) {
        visited[v] = true;
        ListNode* headNode = adjacencyList[v].getHead();
        while (headNode) {
            int adjVertex = headNode->data;
            if (!visited[adjVertex]) {
                DFS(adjVertex, visited);
            }
            headNode = headNode->next;
        }
    }
    // Function for checking if the graph forms a cycle or not.
    bool checkCycleUtil(int v, bool visited[], int parent) {
        visited[v] = true;
        ListNode* headNode = adjacencyList[v].getHead();
        while (headNode) {
            int adjVertex = headNode->data;
            if (!visited[adjVertex]) {
                if (checkCycleUtil(adjVertex, visited, v))
                    return true;
            } else if (adjVertex != parent) {
                return true;
            }
            headNode = headNode->next;
        }
        return false;
    }

public:
    Graph(int V) {
        this->V = V;
        adjacencyList = new List[V];
    }
    void addEdge(int v, int u) {
        adjacencyList[v].push_back(u);
        adjacencyList[u].push_back(v);
    }
    //  Function for checking if graph is connected or not. 
    bool isConnected() {
        bool* visited = new bool[V]();

        DFS(0, visited);

        for (int i = 0; i < V; ++i) {
            if (!visited[i]) {
                delete[] visited;
                return false;
            }
        }
        delete[] visited;
        return true;
    }
    // Function to check if graph contains cycle or not.
    bool checkCycle() {
        bool* visited = new bool[V]();
        for (int i = 0; i < V; ++i) {
            if (!visited[i] && checkCycleUtil(i, visited, -1)) {
                delete[] visited;
                return true;
            }
        }
        delete[] visited;
        return false;
    }
    // Function for doing BFS Traversal. 
    void bfsTraversal(int startVertex) {
        bool* visited = new bool[V]();
        queue<int> q;

        visited[startVertex] = true;
        q.push(startVertex);

        while (!q.empty()) {
            int currentVertex = q.front();
            cout << currentVertex << " ";
            q.pop();

            ListNode* headNode = adjacencyList[currentVertex].getHead();
            while (headNode) {
                int adjVertex = headNode->data;
                if (!visited[adjVertex]) {
                    visited[adjVertex] = true;
                    q.push(adjVertex);
                }
                headNode = headNode->next;
            }
        }
        delete[] visited;
    }
    void printGraph() {
        for (int i = 0; i < V; ++i) {
            cout << "Vertex " << i << " --> ";
            ListNode* currentNode = adjacencyList[i].getHead();
            while (currentNode) {
                cout << currentNode->data << " ";
                currentNode = currentNode->next;
            }
            cout << endl;
        }
    }
};
int main() {
    int v, u;
    cout<<"Enter the number of vertices in the graph "<<endl;
    int vertices;
    cin>>vertices;
    Graph g(vertices);
    cout << "Enter edges (Vertex1 Vertex2) [-1 -1 to stop]:\n";
    while (true) {
        cin >> v >> u;
        if (v == -1 && u == -1)
            break;
        g.addEdge(v, u);
    }
    // To check if graph is connected or not. 
    if (g.isConnected())
        cout << "Graph is connected" << endl;
    else
        cout << "Graph is not connected" << endl;
    // To check if there is any cycle in the graph
    if (g.checkCycle())
        cout << "Graph is cyclic" << endl;
    else
        cout << "Graph is acyclic" << endl;
    // BFS Traversal.
    cout << "Enter the starting vertex for BFS traversal: ";
    int startVertex;
    cin >> startVertex;

    cout << "BFS Traversal starting from vertex " << startVertex << ":\n";
    g.bfsTraversal(startVertex);
    cout<<endl;
    // Print the graph 
    g.printGraph();
    return 0;
}