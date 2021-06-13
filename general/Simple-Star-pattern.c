
#include <stdio.h>
void pattern1(int);
void pattern2(int);

int main()
{
    
    int n;
    // printf("Hello World\n");
    printf("Enter any number:- ");
    scanf("%d",&n);
    
    pattern1(n);
    pattern2(n);
    return 0;
}

void pattern1(int n){
    
    int i=0,j=0;
    for(i=0;i<n;i++){
        printf("%d",i);
        for(j=0;j<n;j++){
            // printf("%d",j);
            printf("*");
        }
        printf("\n");
    }
}

void pattern2(int n){
    
    int i=0,j=0;
    for(i=0;i<n;i++){
        printf("%d",i);
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
