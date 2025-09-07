#include<stdio.h>

struct address{
    char name[100];
    int houseno;
    char block[50];
    char area[50];
    char city[50];
    char state[50];
    int pincode;
};

int main(){
struct address a1 = {"Arpan Ghosh",141,"A","Newtown","Kolkata","West Bengal",700092};
printf("Name : %s\n",a1.name);
printf("House no : %d\n",a1.houseno);
printf("Block : %s\n",a1.block);
printf("Area : %s\n",a1.area);
printf("City : %s\n",a1.city);
printf("State : %s\n",a1.state);
printf("Pincode : %d\n\n\n",a1.pincode);


struct address a2 = {"Suvojit Biswas",12,"AB","Newtown","Kolkata","West Bengal",700092};
printf("Name : %s\n",a2.name);
printf("House no : %d\n",a2.houseno);
printf("Block : %s\n",a2.block);
printf("Area : %s\n",a2.area);
printf("City : %s\n",a2.city);
printf("State : %s\n",a2.state);
printf("Pincode : %d\n\n\n",a2.pincode);

struct address a3 = {"Dipika Bose",177,"AC","Newtown","Kolkata","West Bengal",700092};
printf("Name : %s\n",a3.name);
printf("House no : %d\n",a3.houseno);
printf("Block : %s\n",a3.block);
printf("Area : %s\n",a3.area);
printf("City : %s\n",a3.city);
printf("State : %s\n",a3.state);
printf("Pincode : %d\n\n\n",a3.pincode);

struct address a4 = {"Srijan Kundu",4,"B","Newtown","Kolkata","West Bengal",700092};
printf("Name : %s\n",a4.name);
printf("House no : %d\n",a4.houseno);
printf("Block : %s\n",a4.block);
printf("Area : %s\n",a4.area);
printf("City : %s\n",a4.city);
printf("State : %s\n",a4.state);
printf("Pincode : %d\n\n\n",a4.pincode);

struct address a5 = {"Akash Talukdar",141,"C","Newtown","Kolkata","West Bengal",700092};
printf("Name : %s\n",a5.name);
printf("House no : %d\n",a5.houseno);
printf("Block : %s\n",a5.block);
printf("Area : %s\n",a5.area);
printf("City : %s\n",a5.city);
printf("State : %s\n",a5.state);
printf("Pincode : %d\n\n\n",a5.pincode);

return 0; 
}