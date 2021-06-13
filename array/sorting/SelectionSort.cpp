#include<iostream>
#include<climits>

using namespace std;

void SelectionSort(int arr[],int arrsize){
    for (int i = 0; i < arrsize; i++) {
        int min_no_index = i;
        for (int j = i; j < arrsize; j++) {
            if(arr[min_no_index]>arr[j]){
                min_no_index = j;
            }
        }
        
        int temp = arr[i];
        arr[i]=arr[min_no_index];
        arr[min_no_index]=temp;
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

    
  SelectionSort(arr,n);

    return 0;

}