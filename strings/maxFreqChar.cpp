#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void maxFrequncyLetter(string str){
    int n = str.length();
    int freq[26];
    for (int i = 0; i < 26; i++) {
        freq[i]=0;
    }
    
    for (int i = 0; i < n; i++) {
        freq[str[i]-'a']++;
    }
    
    char ans = 'a';
    int maxfreq = 0;
    
    for (int i = 0; i < 26; i++) {
        if(freq[i]>=maxfreq){
            maxfreq=freq[i];
            ans=i+'a';
        }
    }
    
    std::cout << ans<<" " <<maxfreq << std::endl;
    
}



int main() {
	// your code goes here
	string str;
	std::cin >> str;
	
    maxFrequncyLetter(str);

    
	return 0;
}
