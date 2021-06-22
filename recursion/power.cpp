#include <iostream>
using namespace std;

int power(int n , int p){
    
    if(p==0){
        return 1;
    }
    
    int prevPower = power(n,p-1);
    
    return prevPower*n;

}


int main() {
	// your code goes here
	
	int a,b;
	std::cin >> a>>b;
	
	std::cout << power(a,b) << std::endl;
	
	return 0;
}
