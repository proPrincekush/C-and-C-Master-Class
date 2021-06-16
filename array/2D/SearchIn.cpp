#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int n,m,key;
	std::cin >> n>>m>>key;
	int arr[n][m];
	for (int i = 0; i < n; i++) {
	   for (int j = 0; j < m; j++) {
	       cin>>arr[i][j];
	       if(arr[i][j]==key){
	           std::cout << i <<" "<<j<< std::endl;
	           return 0;
	       }
	   }
	}
	
	cout<<-1;

	return 0;
}
