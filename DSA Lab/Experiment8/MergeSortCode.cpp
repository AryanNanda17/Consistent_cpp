#include<iostream>
using namespace std;
void mergefn(int input[],int i,int j, int m){
	if(i>=j) return;
	int s = i;
	int z = m+1;
	int k = 0 ;
	int output[ j - i + 1 ];
	while( i <= m && z <= j){
        if( input[i] <= input[z] ){
			output[k] = input[i];
			i++;
		}
		else{
			output[k] = input[z];
			z++;
		}
		k++;
	}
	while(i<=m){
		output[k] = input[i];
		k++;
		i++;
	}
	while(z<=j){
		output[k] = input[z];
		z++;
		k++;
	}
	for(int q = s,si=0 ; q<=j ; q++,si++){
		input[q] = output[si];
	}
}

void helperfn(int input[],int si, int ei){
	if(si>=ei) return;
	int mid = ( si + ei ) / 2 ;
	helperfn(input,si,mid) ;
	helperfn(input,mid+1,ei) ;
	mergefn(input,si,ei,mid) ;
	return ;
}
void mergeSort(int input[], int size){
    if(size==0 || size==1) return;
	// array  left  right  
    helperfn(input,0,size-1);
	return;        
}

void insertionSort(int *input, int size)
{
    for(int i=1;i<size;i++){
        int current=input[i];
        int j;
        for (j=i-1;j>=0;j--){
            if(input[j]>current){
                input[j+1]=input[j];
            }
            else{
                break;
            }
        }
        input[j+1]=current;
    }
}

int main() {
    int n1;
    cin>>n1;
    int arr1[n1];
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    mergeSort(arr1, n1);
    cout<<endl<<"Merge Sort output is "<<endl;
    for(int i = 0; i < n1; i++) {
        cout << arr1[i] << " ";
    }
    int n2;
    cin>>n2;
    int arr2[n2];
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    mergeSort(arr2, n2);
    cout<<endl<<"Insertion Sort output is "<<endl;
    for(int i = 0; i < n2; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}








