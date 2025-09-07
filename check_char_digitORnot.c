#include<stdio.h>
int main(){
char ch;
printf("Enter a char :");
scanf("%c",&ch);
if(ch>='0' && ch<='9'){
    printf("digit");
}else if(ch<='0'){
    printf("digit");
}else{
printf("not digit");}
return 0;
}
