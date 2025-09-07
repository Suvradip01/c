#include<stdio.h>
#include<string.h>

int countVowels(char string[]);
int countConsonent(char string[]);

int main(){
char string[100];
printf("Enter string = ");
fgets(string,100,stdin);
printf("vowels count = %d\n",countVowels(string));
printf("consonent count = %d\n ",countConsonent(string));
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int countVowels(char string[]){
    int count = 0;
    for(int i=0;string[i]!= '\0';i++){
    if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'){
        count++;
    }
}
return count;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int countConsonent(char string[]){
     int count = 0;
    for(int i=0;string[i]!= '\0';i++){
    if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'){
        count++;
    }
} 
    int length = strlen(string)-1;
    return  length-count;
}

