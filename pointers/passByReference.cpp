#include <iostream>
using namespace std;
// pointers

// pass by reference
void Swapper(int *aptr,int *cptr){
    int temp = *aptr;
    *aptr =*cptr;
    *cptr = temp;
}



int main() {
	// your code goes here
	int a=78;
	int c = 97;
	
	
	int *aptr = &a;
	int *cptr = &c;
	
    // 	Swapper(aptr,cptr);
    Swapper(&a,&c);
	
	std::cout << a << " " << c << std::endl;
    
	
	return 0;
}
