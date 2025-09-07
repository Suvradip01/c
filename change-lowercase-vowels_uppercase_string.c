//not correct need to perform correction 
#include<stdio.h>

void changestring(char *string);

int main(){
char string[200];
printf("Enter string : ");
fgets(string,200,stdin);
change(string);
return 0;
}

void changestring(char *string){
    int i;
    for(i=0;string[i] != '\0';i++){

            if(string[i]=='a'){
                string[i]='A';

            }else if(string[i]=='e'){
                string[i]='E';

            }else if(string[i]='i'){
                string[i]='I';

            }else if(string[i]='o'){
                string[i]='O';
            }else if(string[i]='u'){
                string[i]='U';
            }
        }
        printf("modified string = %s",string);
        return;
    }