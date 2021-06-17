#include <iostream>
using namespace std;
// character array

bool Palindrome(char mystr[],int n){
    for (int i = 0; i < n/2; i++) {
        // cout<<mystr[i]<<mystr[n-(1+i)]<<endl;
        if(mystr[i]!=mystr[n-(1+i)]){
            return false;
        }
    }
    return true;
}


int main() {
	// your code goes here
	int n=0;
	std::cin >> n;
	
	char mystr[n];
	cin>>mystr;
    // 	std::cout << mystr << std::endl;
    if(Palindrome(mystr,n)){
        cout<<mystr<<" is a palindrome."<<endl;
    }else{
        cout<<mystr<<" is not a palindrome."<<endl;
    }
    
	
	
	return 0;
}
