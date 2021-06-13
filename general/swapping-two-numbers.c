/******************************************************************************

                            swapping of two numbers
                    
*******************************************************************************/

#include <stdio.h>
int Swapper(int,int);
int Swapper2(int,int);

int main()
{
    int a,b;
    printf("enter two numbers : ");
    scanf("%d %d",&a,&b);
    Swapper2(a,b);
    
    return 0;
}

int Swapper(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("a=%d,b=%d",a,b);
    return (a,b);
}

int Swapper2(int a, int b){
    
    a = a+b;
    b = a-b;
    a = a-b;
    printf("a=%d,b=%d",a,b);
    return a,b;
}
