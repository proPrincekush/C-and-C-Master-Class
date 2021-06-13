#include <iostream>

using namespace std;

void LongestArithmeticSubArray(int arr[],int arrsize){
    
    int ans = 2;
    int pd = arr[1] - arr[0];
    int curr = 2;
    int j=2;
    while(j<arrsize){
        if(pd == (arr[j] - arr[j-1])){
            curr++;
        }else{
            pd = arr[j] - arr[j-1];
            curr=2;
        }
        
        ans = max(ans,curr);
        j++;
    }
    std::cout << ans << std::endl;
}

int main()
{
    int arrsize = 0;
    std::cin >> arrsize;
    
    int arr[arrsize];
    
    for (int i = 0; i < arrsize; i++) {
        std::cin >> arr[i];
    }
    
    LongestArithmeticSubArray(arr,arrsize);

    return 0;
}
