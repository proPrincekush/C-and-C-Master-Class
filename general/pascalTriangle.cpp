
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

int combination(int n, int r){
    return factorial(n)/(factorial(n-r)*factorial(r));
    
}

int main()
{
    int n;
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << combination(i,j)<<" ";
        }
        cout << endl;
    }
    
    return 0;
}
