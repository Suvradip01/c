#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n;

    printf("Enter size of the memory n :");
    scanf("%d",&n);
    
    ptr = (int*)calloc(n,sizeof(int*));

    int arr[n];
    printf("Enter values :\n");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }

    printf("Entered values are :\n");
    for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
    }

    free(ptr);
    return 0;
}