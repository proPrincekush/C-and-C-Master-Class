#include <iostream>
#include<climits>
using namespace std;
// to find pair sum which is equal to given number


bool sorted_pairsum(int arr[],int n,int key){
    int low_pt = 0;
    int high_pt = n-1;
    while(low_pt<high_pt){
        int sum = arr[low_pt]+arr[high_pt];
        if(sum==key){
            std::cout << arr[low_pt]<<" "<<arr[high_pt] << std::endl;
            return true;
        }else if(sum>key){
            high_pt--;
        }else{
            // sum<key
            low_pt++;
        }
    }
    return false;
}


bool unsorted_pairsum(int arr[],int n,int key){
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if((arr[i]+arr[j])==key){
                std::cout << arr[i]<<" "<<arr[j] << std::endl;
                return true;
            }
        }
    }
    return false;
}




int main() {
	// your code goes here
	
	int n,k;
	std::cin >> n>>k;
	
	int arr[n];
	for (int i = 0; i < n; i++) {
	    std::cin >> arr[i];
	}
	
	
	
	
	std::cout << sorted_pairsum(arr,n,k)  << std::endl;

	return 0;
}
