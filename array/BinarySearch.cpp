#include<iostream>
#include<climits>

using namespace std;

int BinarySearch(int arr[],int arrsize,int key){
    int start_point = 0;
    int end_point= arrsize;
    while(start_point<=end_point){
        int mid_point = (start_point+end_point)/2;
        
        if(arr[mid_point]==key){
            return mid_point;
        }else if(arr[mid_point]<key){
            start_point = mid_point+1;
        }else if(arr[mid_point]>key){
            end_point = mid_point-1;
        }
    }
    return -1;
}


int main(){
    int n=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }

    int key;
    std::cin >> key;
    std::cout << BinarySearch(arr,n,key) << std::endl;

    return 0;

}