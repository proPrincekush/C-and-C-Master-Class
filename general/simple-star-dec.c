// pattern

/*

*                                                                                                               
**                                                                                                              
***                                                                                                             
****                                                                                                            
***** 

*/

#include <stdio.h>

// void DecPattern(int);
// void DecPattern2(int);
void DecPattern3(int);
int main()
{
    int n = 0;
    printf("enter any number: ");
    scanf("%d",&n);
    
//   DecPattern(n);
//   DecPattern2(n);
    DecPattern3(n);
    return 0;
}

//  both loop decrement 
void DecPattern(int n){
    int i=0;
    int j = 0;
    
    for( i = n; i>0; i--){
       for(j=n;j>=i;j--){
           printf("*");
       }
         printf("\n");
    }
}

//  innner decrement outer increment
void DecPattern2(int n){
    int i=0;
    int j = 0;
    
    for( i = 0; i<n; i++){
       for(j=n;j>=(n-i);j--){
           printf("*");
       }
         printf("\n");
    }
}

// outer decrement inner increment
void DecPattern3(int n){
    int i=0;
    int j = 0;
    
    for( i = n; i>0; i--){
       for(j=0;j<=(n-i);j++){
           printf("*");
       }
         printf("\n");
    }
}
