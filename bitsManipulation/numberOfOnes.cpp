#include <iostream>
using namespace std;

int NumberOfOnes(int num){
    int count = 0;
    while(num){
        count++;
        num &= (num-1);
    }
    return count;
}

int main() {
	// your code goes here
	int num;
	std::cin >> num;
    
    std::cout << NumberOfOnes(num) << std::endl;
    

	return 0;
}
