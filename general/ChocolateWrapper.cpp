
#include <iostream>

using namespace std;

int main()
{
    int no_chocolate = 0;
    std::cin >> no_chocolate;
    
    int total = no_chocolate;
    
    int d = no_chocolate/3;
    int rem = no_chocolate%3;
    while((d+rem)>=3){
        total+=d;
        rem=(d+rem)%3;
        d=(d+rem)/3;
    }
    
    std::cout << total << std::endl;
    

    return 0;
}
