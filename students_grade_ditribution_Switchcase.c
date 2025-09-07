#include<stdio.h>

int main()
{
   int marks;
   
   printf("\nEnter The Mark: ");
   scanf("%d", &marks);
   
   if(marks>100)
   {
    printf("\nDon't Be Smart Enter your Marks Between Limit\n");
   }
   else if(marks<0)
   {
    printf("Invalid marks");
   }else{

   switch(marks/10)
   {
       case 10:
       case 9:
           // Marks between 90-100
           printf("\n Your Grade is: A+");
           break;
       case 8 :
            // Marks between 80-89
           printf("\n Your Grade is: A" );
           break;
       case 7 :
       // Marks between 70-79
           printf("\n Your Grade is: B+" );
           break;
       case 6:
           //Marks between 60-69
           printf("\n Your Grade is: B" );
           break;
           case 5:
           //Marks between 50-59 
           printf("\n Your Grade is: C+" );
           break;
              case 4:
           //Marks between 40-49
           printf("\n Your Grade is: C" );
           break;
              case 3:
           //Marks between 30-39
           printf("\n Your Grade is: D  " );
           break;
              

       default :
           // Marks less than 30
           printf("f\n Fail");
   }
 }

   return 0;
}