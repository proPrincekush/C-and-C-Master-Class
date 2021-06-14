#include <iostream>
#include<climits>
using namespace std;
// to find max  cirular subarray sum
int Kadane(int arr[], int n){
    int maxSum = INT_MIN;
    int crr_sum= 0;
    for (int i = 0; i < n; i++) {
        crr_sum+=arr[i];
        if(crr_sum<0){
            crr_sum = 0;
        }
        maxSum= max(maxSum,crr_sum);
    }
    
    // std::cout << maxSum << std::endl;
    return(maxSum);
}





int main() {
	// your code goes here
	
	int n;
	std::cin >> n;
	
	int arr[n];
	for (int i = 0; i < n; i++) {
	    std::cin >> arr[i];
	}
	
	int wrapsum = 0;
	int nowrapsum = 0;
	
	nowrapsum = Kadane(arr,n);
	
    // 	reverse the polarity to find wrap sum
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum+=arr[i];
        arr[i]=-arr[i];
    }
	
	wrapsum = totalSum + Kadane(arr,n);
	
	
	std::cout <<max(nowrapsum,wrapsum) << std::endl;

	return 0;
}
