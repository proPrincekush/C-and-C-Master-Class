#include <iostream>
using namespace std;


int firstOcc(int arr[], int n, int i, int key){
    if(i==n){
        return -1;
    }
    
    if(arr[i]==key){
        return i;
    }
    
    return firstOcc(arr,n,i+1,key);
}

int lastOcc(int arr[], int n, int i, int key){
    if(i==n){
        return -1;
    }
    int restarr = lastOcc(arr,n,i+1,key);
    if(restarr!=-1){
        return restarr;
    }
    
    if(arr[i]==key){
        return i;
    }
    
    return -1;
}


int main() {
	// your code goes here
	
	
	int n;
	std::cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
	    std::cin >> arr[i];
	}

	std::cout << firstOcc(arr,n,0,2) << std::endl;
    std::cout << lastOcc(arr,n,0,2) << std::endl;
	
	return 0;
}
