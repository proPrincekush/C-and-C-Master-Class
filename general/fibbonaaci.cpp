#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int num1;
    std::cin >> num1;
    
    int prevNum = 0;
    int currentNum = 1;
    
    std::cout << prevNum << std::endl;
    std::cout << currentNum << std::endl;
    
    while(prevNum+currentNum<=num1){
        int nextNum = prevNum+currentNum;
        std::cout << nextNum << std::endl;
        
        prevNum=currentNum;
        currentNum=nextNum;
    }
    
    
    return 0;
}
