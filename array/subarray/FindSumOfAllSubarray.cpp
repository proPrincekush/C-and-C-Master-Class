#include <iostream>
using namespace std;

void AllSubarraysSum(int arr[], int n){
    for (int i = 0; i < n; i++) {
        int curr = 0;
        for (int j = i; j < n; j++) {
            curr+=arr[j];
            cout<<curr<<endl;
            // for (int k = i; k <= j; k++) {
            //     std::cout << arr[k]<<" ";
            // }
            // std::cout << std::endl;
        }
        
        
    }
}





int main() {
	// your code goes here
	
	int n;
	std::cin >> n;
	
	int arr[n];
	for (int i = 0; i < n; i++) {
	    std::cin >> arr[i];
	}
	
	AllSubarraysSum(arr,n);

	return 0;
}
