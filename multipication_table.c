#include<stdio.h>
int main(){
	int i,num,length,table;
	printf("Enter Number =");
	scanf("%d",&num);
	printf("Enter the leangth of the table =");
	scanf("%d",&length);
	for(i=0;i<=length;i++){
	table = num*i;
	printf("%d * %d = %d\n",num,i,table);
}
return 0;
} 