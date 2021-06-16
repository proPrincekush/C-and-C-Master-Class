#include <iostream>
using namespace std;


int main() {
	// your code goes here
	
	int n=0,m=0;
	std::cin >> n>>m;
	int arr[n][m];
	for (int i = 0; i < n; i++) {
	   for (int j = 0; j < m; j++) {
	       cin>>arr[i][j];
	   }
	}
	
// 	transpose

	   for (int j = 0; j < m; j++) {
	       for (int i = 0; i < n; i++) {
	            cout<<arr[i][j]<<" ";
    	   }
    	   cout<< std::endl;
    	}
    

	return 0;
}
