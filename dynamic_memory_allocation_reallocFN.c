#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int i;
    ptr = (int*)calloc(3,sizeof(int*));

    printf("Enter number :\n");
    for(i=0;i<3;i++){
        scanf("%d",&ptr[i]);
    }


    int n;
    printf("Enter new memory size (n):");
    scanf("%d",&n);
    
    ptr = realloc(ptr,n);

    printf("Enter number :");
    for(i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }

    printf("Entered numbers are:\n");
    for(int j=0;j<n;j++){
    printf("%d\n",ptr[j]);
    }
    free(ptr);
    return 0;
}