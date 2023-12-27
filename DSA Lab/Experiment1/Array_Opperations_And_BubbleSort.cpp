#include<iostream>
using namespace std;
void input_arr(int *arr,int size)
{
    for(int i=0;i<size;i++){
        cout<<"enter element "<<i<<"of arr: ";
        cin>>arr[i];
        cout<<endl;
    }
}
void display_arr(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void find_element(int *arr,int size){
    int no;
    int check=1;
    cout<<"Enter number to be found"<<endl;
    cin>>no;
    for(int i=0;i<size;i++){
        if(arr[i]==no){
            cout<<"The number is found at "<<i<<" index of array "<<endl;
            check=0;
            break;
        }
    }
    if(check==1){
        cout<<"Element is  not present in array"<<endl;
    }
}
void sort_arr(int *arr, int size){
    int n = size;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
        n--;
    }
}
void delete_arr(int *arr,int & size){
    int index;
    cout<<"Enter index which you want to delete"<<endl;
    cin>>index;
    for(int i=index+1;i<size;i++){
        arr[i-1]=arr[i];
    }
    size=size-1;
}
void insert_arr(int *arr,int & size){
    int index=0;
    cout<<"Enter index at which you want to insert"<<endl;
    cin>>index;
    size=size+1;
    for(int i=size-1;i>index;i--){
        arr[i]=arr[i-1];
    }
    cout<<"Enter the no to be added"<<endl;
    cin>>arr[index];
}

int main(){
    int size;
    cout<<"enter size of arr to be created"<<endl;
    cin>>size;
    int *arr=new int[size];
    input_arr(arr,size);
    display_arr(arr,size);
    find_element(arr,size);
    sort_arr(arr,size);
    cout<<"Results after Bubble Sort is"<<endl;
    display_arr(arr,size);
    delete_arr(arr,size);
    display_arr(arr,size);
    insert_arr(arr,size);
    cout<<endl;
    display_arr(arr,size);
    return 0;
}
