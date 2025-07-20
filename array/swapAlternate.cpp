#include<iostream>
using  namespace std;

void revarray(int arr[], int n){
    for (int i = 0; i < n-1; i+=2)
    {
        if (i<n-1){
         swap(arr[i], arr[i+1]);       
        }
        
    }
    
}

void display(int arr[], int n){
    for(int i=0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int array[5]= {1,2,3,4,5};
    revarray(array, 5);
    display(array,5);
}