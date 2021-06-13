
#include <iostream>

using namespace std;


int factorial(int num){
    int fact = 1;
    while(num>1){
        fact*=num;
        num--;
    }
    return fact;
}

int main()
{
    int n, r;
    std::cin >> n>>r;
    int permute;
    
    permute = factorial(n)/(factorial(n-r)*factorial(r));
    
    std::cout << permute << std::endl;
    return 0;
}
