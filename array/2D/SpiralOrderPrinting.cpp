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
	
	
// 	print spiral order 
	int startrow = 0;
	int startcol = 0;
    int endcol = m-1;
    int endrow = n-1;
    
    while(startcol<=endcol && startrow<=endrow){
        // startrow
        for (int col = startcol; col <= endcol; col++) {
            std::cout << arr[startrow][col] << " ";
        }
        cout<<endl;
        startrow++;
        
        // endcol
        for (int row = startrow; row <= endrow ; row++) {
            std::cout << arr[row][endcol] << " ";
        }
        cout<<endl;
        endcol--;
        
        // endrow
        for (int col = endcol; col >= startcol; col--) {
            std::cout << arr[endrow][col] << " ";
        }
        cout<<endl;
        endrow--;
        
        // startcol
        for (int row = endrow; row >= startrow ; row--) {
            std::cout << arr[row][startcol] << " ";
        }
        cout<<endl;
        startcol++;
        
    }
    

	return 0;
}
