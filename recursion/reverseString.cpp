#include <iostream>
#include<string>
using namespace std;

void reverse(string str){
    if(str.length()==0){
        return;
    }
    string ros = str.substr(1);
    reverse(ros);
    std::cout << str[0] ;
}

int main() {
	// your code goes here
	
    string name;
    std::cin >> name;
    
    reverse(name);
	return 0;
}
