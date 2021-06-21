#include <iostream>
using namespace std;

bool powerOfTwo(int num){
    return num && !(num & num-1);
}

int main() {
	// your code goes here
	int num;
	std::cin >> num;
    
    if(powerOfTwo(num)){
        std::cout << "num is power of 2." << std::endl;
    }else{
        std::cout << "num is not power of 2." << std::endl;
    }

	return 0;
}
