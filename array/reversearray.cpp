#include <iostream>
using namespace std;

void reverse(int arr[], int n){
    int start=0;
    int end=n-1;
    for(int i=0; i<n-1;i++){
        if (start<=end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        
    }
}

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
    int array[5]={0,1,2,3,4};
    int array2[4]={1,2,3,4};

    reverse(array,5);
    reverse(array2,4);
    display(array,5);
    display(array2,4);
}