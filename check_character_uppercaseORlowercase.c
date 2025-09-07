#include<stdio.h>
int main(){
    char ch;
    printf("Enter  a Character :");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
    printf("Upper case");
    }else if(ch>='a'&& ch<='z'){
    printf("lower case");
    }else{
        printf("not a english character");
}
return 0;
}
