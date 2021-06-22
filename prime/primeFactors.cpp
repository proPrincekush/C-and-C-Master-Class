#include <iostream>
using namespace std;

void primeFactors(int n){
    int prime[100]={0};
     
     for (int i = 2; i <= n; i++) {
         prime[i] = i;
     }
     
     
     for (int i = 2; i <=n; i++) {
        if(prime[i]==i){
            for (int j = i*i; j <= n; j+=i) {
               if(prime[j]==j){
                   prime[j] = i;
               }
            }
        }
     }
     
     
     while(n!=1){
         cout<<prime[n]<<" ";
         n/=prime[n];
         
     }
     cout<<endl;

}


int main() {
	// your code goes here
	
	int n;
	std::cin >> n;
	primeFactors(n);
	
	
	return 0;
}
