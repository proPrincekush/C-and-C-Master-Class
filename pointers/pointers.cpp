#include <iostream>
using namespace std;
// pointers

int main() {
	// your code goes here
// 	int a=78;
	
// 	int *ptr = &a;
// 	*ptr = 20;
// 	std::cout << a<<" "<<ptr<<" "<<*ptr << std::endl;

    int arr[] = {10,30,29};
    
    cout<<arr<<endl;
    // cout<<*arr;
    
    for (int i = 0; i < 3; i++) {
        std::cout << *(arr+i) << std::endl;
    }
	
	
	int *ptr = arr;
	for (int i = 0; i < 3; i++) {
        std::cout << *ptr << std::endl;
        ptr++;
    }
	
	
	
	return 0;
}
