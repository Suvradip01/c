#include<stdio.h>
int main(){
	int i,num,table;
	printf("Enter Number =");
	scanf("%d",&num);
	for(i=0;i<=100;i++){
	table = num*i;
	printf("%d * %d = %d\n",num,i,table);
}
return 0;
}
#include<stdio.h>
int main(){
	int num,table;
	printf("Enter number =");
	scanf("%d",num);
    for(int i=1;i<=num;i++){
    table=num*i;
	printf("multiplication table =",table);
	}
	return 0;
}