#include <iostream>
#include <math.h>
using namespace std;

bool tripletValid(int max, int num1,int num2){
    if(pow(max,2)==(pow(num2,2)+pow(num1,2))){
        return true;
    }else{
        return false;
    }
}

bool checkTriplet(int a, int b, int c){
    
    if(a>b){
        if(a>c){
            // a is max
            return tripletValid(a,b,c);
        }else{
            // c is max
            return tripletValid(c,b,a);
        }
    }else{
        if(b>c){
            // b is max
            return tripletValid(b,a,c);
        }else{
            //  c is max
            return tripletValid(c,b,a);
        }
    }
}

int main()
{
    int a,b,c;
    std::cin >> a>>b>>c;
    
    if(checkTriplet(a,b,c)){
        std::cout<<a <<" "<<b << " "  << c << " is pythagorian triplet" << std::endl;
    }else{
        std::cout<<a <<" "<<b << " "  << c << " is not pythagorian triplet" << std::endl;
    }
    return 0;
}

