#include <iostream>
#include<climits>
using namespace std;

// kadane's Algorithm to find max subarray sum
void MaximumSubarraySum(int arr[], int n){
    int maxSum = INT_MIN;
    int crr_sum= 0;
    for (int i = 0; i < n; i++) {
        crr_sum+=arr[i];
        if(crr_sum<0){
            crr_sum = 0;
        }
        maxSum=max(maxSum,crr_sum);
    }
    
    std::cout << maxSum << std::endl;
}





int main() {
	// your code goes here
	
	int n;
	std::cin >> n;
	
	int arr[n];
	for (int i = 0; i < n; i++) {
	    std::cin >> arr[i];
	}
	
	MaximumSubarraySum(arr,n);

	return 0;
}
