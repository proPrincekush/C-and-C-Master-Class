#include <iostream>
using namespace std;

void AllSubarrays(int arr[], int n){
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++) {
                std::cout << arr[k]<<" ";
            }
            std::cout << std::endl;
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
	
	AllSubarrays(arr,n);

	return 0;
}
