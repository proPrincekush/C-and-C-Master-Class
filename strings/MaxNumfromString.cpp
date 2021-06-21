#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string maxNum(string numstr){
    sort(numstr.begin(),numstr.end(),greater<int>());
    return(numstr);
}



int main() {
	// your code goes here
	string numstr;
	std::cin >> numstr;
	
	std::cout << maxNum(numstr) << std::endl;

    
	return 0;
}
