#include <iostream>
using namespace std;

int uniqueNumInArray(int n,int arr[]){
    int xorSum = 0;
    for (int i = 0; i < n; i++) {
        xorSum^=arr[i];
    }
    return xorSum;
}

int main() {
	// your code goes here
	int arr[] = {1,2,3,4,3,2,1};
	
    
    std::cout << uniqueNumInArray(7,arr) << std::endl;
    

	return 0;
}
