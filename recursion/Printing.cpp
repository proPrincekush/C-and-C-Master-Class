#include <iostream>
using namespace std;

void printDec(int n){
    if(n==0){
        return;
    }
    std::cout << n << std::endl;
    printDec(n-1);
}

void printInc(int n){
    if(n==0){
        return;
    }
    printInc(n-1);
    std::cout << n << std::endl;
    
}


int main() {
	// your code goes here
	
	
	int n;
	std::cin >> n;

	printDec(n);
	printInc(n);
	
	return 0;
}
