/******************************************************************************

                           Calculating length of String

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int str_length(char str[]);

int main()
{
    char s[20];
    int len = 0;
    printf("enter the string: ");
    scanf("%s",&*s);
   
    // len = strlen(s);
   
    
    // calculating without predefined function
    len = str_length(s);
    
    printf("the length of %s is %d",s,len);
    return 0;
}

int str_length(char str[]){
    int len = 0;
    while(str[len]!='\0'){
        len++;
    }
    return len;
}

