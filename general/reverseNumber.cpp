#include <iostream>

using namespace std;

int main()
{
    int num;
    std::cin >> num;
    
    int rev_num=0;
    while(num>0){
        int last_digit;
        last_digit=num%10;
        rev_num=rev_num*10+last_digit;
        num=num/10;
    }

    std::cout << rev_num << std::endl;
    return 0;
}
