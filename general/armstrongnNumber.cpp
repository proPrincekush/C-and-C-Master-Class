#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int num,arm_num=0;
    std::cin >> num;
    
    int stand_num = num;
    
    while(num>0){
        int last_digit = num%10;
        arm_num+=pow(last_digit,3);
        std::cout << arm_num << std::endl;
        num/=10;
    }
    
    if(arm_num==stand_num){
        std::cout << arm_num << " This is an armstrong number." << std::endl;
    }else{
        std::cout  << arm_num <<  " This is not an armstrong number." << std::endl;
    }
   

    
    return 0;
}
