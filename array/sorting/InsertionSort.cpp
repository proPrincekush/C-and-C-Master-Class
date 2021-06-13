#include<iostream>
#include<climits>

using namespace std;

void InsertionSort(int arr[],int arrsize){
    for (int i = 1; i < arrsize; i++) {
        int current = arr[i];
        int j = i-1;
        while(arr[j]>current){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    
    for (int k = 0; k < arrsize ; k++) {
        cout<<arr[k]<<" ";
    }
    
     
}


int main(){
    int n=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }

    
  InsertionSort(arr,n);

    return 0;

}