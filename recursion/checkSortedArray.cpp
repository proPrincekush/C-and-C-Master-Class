#include <iostream>
using namespace std;

bool sorted(int arr[],int n){
    if(n==1){
        return true;
    }
    return(arr[0] <= arr[1] && sorted(arr+1,n-1));
}


int main() {
	// your code goes here

	int n;
	std::cin >> n;
	
// 	int arr[] = {1,2,3,4,5};
    int arr[n];
	
	for (int i = 0; i < n; i++) {
	    std::cin >> arr[i];
	}

	 std::cout << sorted(arr,n) << std::endl;

	return 0;
}
