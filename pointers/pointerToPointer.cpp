#include <iostream>
using namespace std;
// pointers

int main() {
	// your code goes here
	int a=78;
	
	int *ptr = &a;
	*ptr = 20;
	std::cout << a<<" "<<ptr<<" "<<*ptr << std::endl;
    
    int **q = &ptr;
    
    std::cout << q << " "<<*q<<  " " <<**q << std::endl;
    
	
	return 0;
}
