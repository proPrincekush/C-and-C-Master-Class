#include <iostream>
using namespace std;
// character array

int main() {
	// your code goes here
	int n=0;
	std::cin >> n;
	cin.ignore(); // clear the buffer
	
	char mystr[n+1];
	cin.getline(mystr,n); //get the full mine
    cin.ignore();
    
    int i = 0;
    int maxlen= 0;
    int currlen = 0;
    int st = 0;
    int maxst = 0;
    
    while(mystr[i]!='\0'){
        if(mystr[i] == ' '){
            currlen=0;
            st= i+1;
        }else{
            currlen++;
        }

        if(maxlen < currlen){
            maxlen=currlen;
            maxst = st;
        }
        // maxlen = max(maxlen,currlen);
        i++;
    }
    
    for (int i = 0; i < maxlen; i++) {
        cout<<mystr[maxst+i];
    }
    cout<<endl;
	
	std::cout << maxlen << std::endl;
	return 0;
}
