#include <iostream>
using namespace std;
// matrix multiplication
int main() {
	// your code goes here
	int n1=0,n2=0,n3=0;
	std::cin >> n1>>n2>>n3;
    // define the matrices size
	int m1[n1][n2],m2[n2][n3];
    // 	get the matrix 1
	for (int i = 0; i < n1; i++) {
	    for (int j = 0; j < n2; j++) {
	        std::cin >> m1[i][j];
	    }
	}
    // 	get the matrix 2
	for (int i = 0; i < n2; i++) {
	    for (int j = 0; j < n3; j++) {
	        std::cin >> m2[i][j];
	    }
	}
	
	for (int i = 0; i < n1; i++) {
	    for (int j = 0; j < n3; j++) {
	        int sum = 0;
	        for (int k = 0; k < n2; k++) {
	            sum+=((m1[i][k])*(m2[k][j]));
	        }
	        std::cout <<  sum<<" ";
	    }
	    cout<<endl;
	}
	
	
	return 0;
}
