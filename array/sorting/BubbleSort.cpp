#include<iostream>
#include<climits>

using namespace std;

void BubbleSort(int arr[],int arrsize){
    for (int i = 0; i < arrsize; i++) {
        int swap = 0;
        for (int j = 0; j < arrsize-(i+1); j++) {
            if(arr[j]>arr[j+1]){
                swap++;
                int temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j] = temp;
            }
        }
        if(swap==0){
            break;
        }
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

    
  BubbleSort(arr,n);

    return 0;

}