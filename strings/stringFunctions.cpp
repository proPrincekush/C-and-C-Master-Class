#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	
    	
    // 	string name ;
    // 	std::cin >> name;
    //  std::cout << name << std::endl;

    // string str1(10,'p');
    // std::cout << str1 << std::endl;

    
    // // get a full line
    
    // string str2;
    // getline(cin,str2);
    // std::cout << str2 << std::endl;
    
    // // concatnation
    // string s1,s2,s3;
    // s1 = "fam";
    // s2 = "ily";
    // // s3 = s1+s2;
    // s3 = s1.append(s2);
    // std::cout << s3 << std::endl;
    // std::cout << s3[4] << std::endl;
    
    
    
    // // compare
    // string s1 ="abc";
    // string s2="abc";
    // std::cout << s1.compare(s2) << std::endl;
    // if(!s1.compare(s2)){
    //     std::cout << "strings are equal." << std::endl;
    // }else{
    //     std::cout << "strings are not equal." << std::endl;
    // }
    
    
    // // empty
    // string s1 = "";
    // if(s1.empty()){
    //     std::cout << "string is empty." << std::endl;
    // }
    
    // // erase
    // string s1 = "nincompoop";
    
    // // s1.erase(3,3);
    // std::cout << s1.erase(3,3) << std::endl;
    // cout<<s1<<endl;
    
    
    
    // // find in string
    // string s1 = "nincompoop";
    // cout<<s1.find("com");
    
    
    // // insert
    // string s1 = "nincompoop";
    // s1.insert(2,"lol");
    // cout<<s1<<endl;
    
    
    // length
    // string s1 = "nincompoop";
    // cout<<s1.size();
    // cout<<s1.length();
    
    // substring
    // string s1 = "nincompoop";
    // cout<<s1.substr(6,4);
    
    
    
    // string to interger
    // string s1 = "786";
    // int x = stoi(s1);
    // std::cout << x << std::endl;
    // string s2 = to_string(x);
    // cout<<s2;
    
    
    
    
    // sorting of string using algorithm library
    string s1 = "prince";
    sort(s1.begin(),s1.end());
    cout<<s1;
    
    
	return 0;
}
