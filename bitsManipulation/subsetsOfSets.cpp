#include <iostream>
using namespace std;

int subsets(int n,int arr[]){
    for (int i = 0; i < (1<<n); i++) {
        for (int j = 0; j < n; j++) {
            if(i & (1<<j)){
                std::cout <<  arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}

int main() {
	// your code goes here
	int arr[] = {1,2,3,4};

    subsets(4,arr);
    

	return 0;
}
