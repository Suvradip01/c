#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
int main(){
int i;
pid_t pid;
pid  = fork();
if(pid==0){
for(i=0;i<9999;i++){
printf("Child Process");
}
}else if(pid>0){
wait(NULL);
for(i =0;i<9999;i++){
printf("Parent Process");
}
}
return 0;
}
