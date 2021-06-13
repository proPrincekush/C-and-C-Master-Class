
#include <iostream>

using namespace std;

void findSumAllSubarrays(int arr[],int arrsize){

    int current = 0;
    for (int i = 0; i < arrsize; i++) {
        for (int j = i; j < arrsize; j++) {
           current+=arr[j];
           std::cout << current << std::endl;
        }
    }
}

int main()
{
    int arrsize = 0;
    std::cin >> arrsize;
    int arr[arrsize];
    // get the array
    for (int i = 0; i < arrsize; i++) {
        std::cin >> arr[i];
    }

    findSumAllSubarrays(arr,arrsize);
    
    
    return 0;
}
