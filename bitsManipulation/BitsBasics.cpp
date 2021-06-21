#include <iostream>
using namespace std;



int getBit(int num,int pos){
    return((num & (1<<pos)) != 0);  
}

int setBit(int num,int pos){
    return(num | (1<<pos));  
}

int clearBit(int num,int pos){
    return(num & (~(1<<pos)));  
}

int updateBit(int num,int pos,int val){
    if(getBit(num,pos)!=val){
        return setBit(clearBit(num,pos),val); 
    }else{
        return num; 
    }
}



int main() {
	// your code goes here
	int num,pos;
	std::cin >> num>>pos;
	
// 	if(getBit(num,pos)){
// 	    std::cout << "1" << std::endl;
// 	}else{
// 	    std::cout << "0" << std::endl;
// 	}
	
	
// 	cout<<setBit(num,pos)<<endl;
	
// 	std::cout << clearBit(num,pos) << std::endl;

    int val;
    cin>>val;
    std::cout << updateBit(num,pos,val) << std::endl;

	return 0;
}
