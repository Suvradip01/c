#include<stdio.h>
void largestNum(int *a,int *b);

int main(){

int a,b;
printf("Enter a =");
scanf("%d",&a);
printf("Enter b =");
scanf("%d",&b);

largestNum(&a,&b); // Call the function largestNum() passing the addresses of 'a' and 'b'
return 0;
}

void largestNum(int *a,int *b){

if(*a>*b){                // Compare the values pointed to by 'a' and 'b'
    printf("%d",*a);
}else{
    printf("%d",*b);
}

return;
}