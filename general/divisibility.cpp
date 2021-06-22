#include <iostream>
using namespace std;

int divisible(int n, int a, int b){
    int c1,c2,c3;
    c1 = n/a;
    c2 = n/b;
    c3 = n/(a*b);
    return (c1+c2)-c3;
}


int main() {
	// your code goes here
	
	int n,a,b;
	std::cin >> n>>a>>b;
	
	std::cout << divisible(n,a,b) << std::endl;
	
	return 0;
}
