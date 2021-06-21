#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void toLower(string str){
    for (int i = 0; i < str.length(); i++) {
        if(str[i]>'A' && str[i]<'Z'){
            str[i]+=32;
        }
    }
    
    std::cout << str << std::endl;
}

void toUpper(string str){
    for (int i = 0; i < str.length(); i++) {
        if(str[i]>'a' && str[i]<'z'){
            str[i]-=32;
        }
    }
    
    std::cout << str << std::endl;
}



int main() {
	// your code goes here
	string name;
	std::cin >> name;
	
// 	toLower(name);
// 	toUpper(name);
	
    // 	using in built code
    
    transform(name.begin(),name.end(),name.begin(),::toupper);
    cout<<name<<endl;
    
    transform(name.begin(),name.end(),name.begin(),::tolower);
    cout<<name<<endl;
    
	return 0;
}
