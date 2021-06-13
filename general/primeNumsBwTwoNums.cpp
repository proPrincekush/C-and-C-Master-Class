#include <iostream>
#include<math.h>
using namespace std;


bool isPrime(int num){
    for (int i = 2; i < sqrt(num); i++) {
       if(num%i==0){
           return false;
       }
    }
    
    return true;
}


int main()
{
    int num1,num2=0;
    std::cin >> num1>>num2;
    
    for (int i = num1; i <= num2; i++) {
        if(isPrime(i)){
            std::cout << i << std::endl;
        }
    }
    
    
    return 0;
}
