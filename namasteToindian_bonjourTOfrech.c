#include<stdio.h>
void indian();
void french();

int main(){
char ch;
printf("Enter your Nationality (first char[a-z]) =");
scanf("%s",&ch);
if(ch == 'i'){
    indian();
}else if(ch == 'f'){
    french();
}else{
    printf("welcome to india!");
}
}


void indian()
{
    printf("Namaste Sir! \nWelcome to India");
}
void french()
{
    printf("Bonjour! \nWelcome to India");
}
