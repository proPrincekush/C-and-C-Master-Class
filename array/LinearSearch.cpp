#include<iostream>
#include<climits>

using namespace std;

int LinearSearch(int arr[],int arrsize,int key){
    for (int i = 0; i < arrsize; i++) {
       if(arr[i]==key){
           return i;
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
    std::cout << LinearSearch(arr,n,key) << std::endl;

    return 0;

}