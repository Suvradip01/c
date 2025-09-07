#include <stdio.h>
// int main()
//{
//  int a = 10, b = 20;
//  printf("%d\n", a + b);

// printf("Integer : %d bytes\n", sizeof(int));
// printf("Float : %d bytes\n", sizeof(float));
// printf("Double : %d bytes\n", sizeof(double));
// printf("Char : %d byte\n", sizeof(char));

// int num;
//  printf("Enter number : ");
//  scanf("%d",&num);
//  printf("Number entered : %d\n",num);
//  printf("hello \" suvra"); // escape sequence character \ 

// area of rectangle
//  int length, width;
//  printf("Enter length : ");
//  scanf("%d", &length);
//  printf("Enter width : ");
//  scanf("%d", &width);

// int area = length * width;
// printf("Area : %d", area);

// area of circle
//  float r;
//  printf("Enter radius of the circle : ");
//  scanf("%f",&r);
//  float area = 3.14 * r * r;
//  printf("Area of the circle : %f",area);

// volume of a cylinder
//  float r,h;
//  printf("Enter radius of the cylinder : ");
//  scanf("%f",&r);
//  printf("Enter hieght of the cylinder : ");
//  scanf("%f",&h);
//  float volume = 3.14 * r * r * h;
//  printf("Volume of the cylinder : %f",volume);

// farenhite to celcius and celcius to farenhiet

//  return 0;
//}

// float convert_into_farenhiet(float temp)
// {
//     float farenhiet = (temp * 9.0 / 5.0) + 32.0;//celcius to farenhiet
//     return farenhiet;
// }

// float convert_into_celcius(float temp)
// {
//     float celcius = (temp - 32.0) * 5.0 / 9.0; //farenhiet to celcius
//     return celcius;
// }

// int main()
// {
//     float temp = 0;
//     printf("Enter temperature : ");
//     scanf("%f", &temp);
//     while (1)
//     {
//         printf("1.Celcius to Farenhiet\n");
//         printf("2.Farenhiet to Celcius\n");
//         break;
//     }

//     int option;
//     printf("Enter option : ");
//     scanf("%d", &option);

//     if(option == 1){
//         printf("Temperature in Farenhiet : %f",convert_into_farenhiet(temp));
//     }
//     else if(option == 2){
//         printf("Temperature in Celcius : %f",convert_into_celcius(temp));
//     }
//     else{
//         printf("invalid option!");
//     }
//     return 0;
// }

// operator precedence
//  #include<stdio.h>
//  int main(){
//       printf("%d",9/3*3); //operators has equal priority it follows left to right
//      return 0;
//  }

// type casting
//  #include<stdio.h>
//  int main(){
//      int a = 10;
//      float n = (float) a;
//      printf("%d\n",a);
//      printf("%f",n);
//      return 0;
//  }

// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter numbers : ");
//     scanf("%d",&num);
//     if(num % 97 == 0){
//         printf("Divisible by 97\n");
//     }else{
//         printf("not divisible by 97\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int x = 2, y = 3 , z = 3 , k = 1;
//     printf("%d",3*x/y-z+k);
//     //3*2/3-3+1
//     //6/3-3+1
//     //2-3+1
//     //-1+1
//     //0
//     return 0;
//}

// #include<stdio.h>
// void check_pass_fail(float marks1, float marks2, float marks3) {
//     float totalmarks = marks1 + marks2 + marks3;
//     float percentage = totalmarks / 3;

//     if (percentage < 40) {
//         printf("Failed due to low percentage in total marks (below 40)\n");
//     }
//     else if (marks1 < 33 || marks2 < 33 || marks3 < 33) {
//         printf("Failed due to low percentage in a subject (below 33)\n");
//     }
//     else {
//         printf("Pass!\n");
//     }
// }

// int main(){
//     float marks1,marks2,marks3;
//     printf("Enter marks of C programming : ");
//     scanf("%f",&marks1);
//     printf("Enter marks of Java programming : ");
//     scanf("%f",&marks2);
//     printf("Enter marks of Python programming : ");
//     scanf("%f",&marks3);
//     check_pass_fail(marks1,marks2,marks3);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     float tax = 0,income;
//     printf("Enter your income :");
//     scanf("%f",&income);
//     if(income >= 250000 && income <= 500000){
//         tax = (income * 5)/100;
//         printf("Total tax : %.2f",tax);
//     }else if(income > 500000 && income <= 1000000){
//         tax = (income * 20)/100;
//         printf("Total tax : %.2f",tax);
//     }else if(income > 1000000){
//         tax = (income * 30)/100;
//         printf("Total tax : %.2f",tax);
//     }else{
//         printf("No tax");
//     }

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char chr;
//     printf("Enter a character : ");
//         scanf("%c",&chr);
//         if(chr >= 97 && chr <= 122){
//             printf("%c is a lower case letter",chr);
//         }else{
//             printf("%c is a upper case letter",chr);
//         }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a,b,c,d;
//     printf("Enter numbers :");
//     scanf("%d%d%d",&a,&b,&c);
//     if(a > b && a > c){
//         printf("Greater : %d\n",a);
//     }else if(b > a && b > c){
//         printf("Greater : %d\n",b);
//     }else if(a == b && b == c){
//         printf("Equal");
//     }else{
//         printf("Greater : %d",c);
//     }
//     return 0;
// }

// #include<stdio.h>
// void multiplication_table(int num){
//     for(int i = 0; i <= 10; i++){
//         int table = i * num;
//         printf("%d * %d = %d\n",num,i,table);
//     }
// }
// void reverse_multiplication_table(int num){
//     for(int i = 10; i >=0; i--){
//         int table = i * num;
//         printf("%d * %d = %d\n",num,i,table);
//     }
// }
// int main(){
//     int num;
//     printf("Enter number : ");
//     scanf("%d",&num);
//     multiplication_table(num);
//     reverse_multiplication_table(num);
//     return 0;
// }

// #include <stdio.h>

// void side_by_side_multiplication_table(int num) {
//     printf("Forward Table\t\tReverse Table\n");
//     printf("------------------------------------\n");

//     for (int i = 0; i <= 10; i++) {
//         int forward = i * num;
//         int reverse = (10 - i) * num;
//         printf("%d * %2d = %2d\t\t%d * %2d = %2d\n", num, i, forward, num, 10 - i, reverse);
//     }
// }

// int main() {
//     int num;
//     printf("Enter number: ");
//     scanf("%d", &num);

//     side_by_side_multiplication_table(num);

//     return 0;
// }

// #include <stdio.h>

// long long cal_factorial(int num) {
//     if (num == 0 || num == 1) {
//         return 1;
//     }

//     long long fact = 1;
//     for (int i = 2; i <= num; i++) {
//         fact *= i;
//     }

//     return fact;  // Return the computed factorial
// }

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if (num < 0) {
//         printf("Factorial is not defined for negative numbers.\n");
//     } else {
//         printf("Factorial of %d is: %lld\n", num, cal_factorial(num));
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int num, prime = 1;

//     printf("Enter number: ");
//     scanf("%d", &num);

//     if (num < 2) {
//         printf("Not a Prime number");
//     } else {
//         for (int i = 2; i * i <= num; i++) { // Optimized loop condition
//             if (num % i == 0) {
//                 prime = 0;
//                 break;
//             }
//         }

//         if (prime)
//             printf("Prime");
//         else
//             printf("Not a Prime number");
//     }

//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main() {
//     srand(time(0)); // Seed random number generator

//     int random_number = rand() % 101; // Generate a random number between 0 and 100
//     int num, guess_count = 0, max_attempts = 5; // Define max attempts

//     printf(" Welcome to the Number Guessing Game! \n");
//     printf("Guess a number between **0 and 100**. You have %d attempts.\n", max_attempts);

//     while (guess_count < max_attempts) {
//         printf("\nEnter your guess: ");
//         scanf("%d", &num);
//         guess_count++;

//         if (num == random_number) {
//             printf(" Well done! You guessed the number in %d attempts! \n", guess_count);
//             return 0;
//         } else if (num > random_number) {
//             printf("Your guess is **too high!** Try a smaller number.");
//         } else {
//             printf("Your guess is **too low!** Try a bigger number.");
//         }

//         printf(" (Attempts left: %d)", max_attempts - guess_count);
//     }

//     printf("\nSorry! You've used all %d attempts. The correct number was **%d**.\n", max_attempts, random_number);
//     return 0;
// }

// pointers
//  #include<stdio.h>
//  int main(){
//      int * ptr;
//      int a = 10;
//      ptr = &a;
//      printf("%u\n%u\n%d\n%d\n%u\n",&a,ptr,a,*ptr,&ptr);
//      return 0;
//  }

// array
//  #include <stdio.h>

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};

//     int length = sizeof(arr) / sizeof(arr[0]);  // Calculate array length
//     printf("size of array %d\nsize of arr[0] %d\n",sizeof(arr),sizeof(arr[0]));
//     printf("Length of the array: %d\n", length);

//     for (int i = 0; i < length; i++) {
//         printf("Value at index %d : %d\n", i, arr[i]);
//     }
//     for(int i = length-1; i >= 0; i--){                    //reverse
//         printf("Value at index %d : %d\n", i, arr[i]);
//     }
//     return 0;
// }

// user defined
// #include <stdio.h>

// int main()
// {
//     int length;
//     printf("Enter the length of the array: ");
//     scanf("%d", &length);

//     int arr[length];
//     for (int i = 0; i < length; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     // Print index-value pairs in forward order
//     printf("\nForward Indexing:\n");
//     for (int i = 0; i < length; i++)
//     {
//         printf("Value at index %d : %d\n", i, arr[i]);
//     }

//     // Print index-value pairs in reverse order
//     printf("\nReverse Indexing:\n");
//     for (int i = length - 1; i >= 0; i--)
//     {
//         printf("Value at index %d : %d\n", i, arr[i]);
//     }

//     // Print full array in forward order
//     printf("\nForward Array: ");
//     for (int i = 0; i < length; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     // Print full array in reverse order
//     printf("Reverse Array: ");
//     for (int i = length - 1; i >= 0; i--)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }

// //without using loop using pointer to print array elements
// #include <stdio.h>

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     static int *ptr = NULL;  // Static pointer, initialized once
//     static int count = 0;  // Static variable to retain count

//     if (ptr == NULL) {  // Only initialize ptr once
//         ptr = &arr[0];  //ptr which point to first index of array
//     }

//     int size = sizeof(arr) / sizeof(arr[0]);

//     if (count < size) {
//         printf("Array element: %d\n", *ptr);
//         count++;
//         ptr++;
//         if (count < size) {  // Continue mimicking a loop
//             main();  // Restart `main()` with updated variables
//         }
//     }

//     return 0;
// }

// //2d arrays
// #include <stdio.h>
// int main() {
//     int rows, columns;
//     printf("Enter rows and columns: ");
//     scanf("%d %d", &rows, &columns);

//     int arr[rows][columns];

//     // Taking input
//     printf("Enter %d elements:\n", rows * columns);
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < columns; j++) {
//             scanf("%d", &arr[i][j]);  // Fixed incorrect scanf
//         }
//     }

//     // Printing the 2D array
//     printf("Array:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < columns; j++) {
//             printf("%d\t", arr[i][j]);  // Fixed incorrect printf
//         }
//         printf("\n");  // Newline for proper formatting
//     }

//     return 0;
// }

// string
//  #include<stdio.h>
//  int main(){
//      char str[] = "abc"; //or we cant declare it lie ['a','b','c','\0'];
//      for(int i = 0; i < 3; i++){
//          printf("%c",str[i]);
//      }
//      return 0;
//  }

// #include<stdio.h>
// int main(){
//     char str[] = "Suvradip Ghosh";
//     printf("%s",str);
//     return 0;
// }

////limitations of scanf = cant take multipule words
// #include<stdio.h>
// int main(){
//     char str[] = "";
//     printf("Enter your text here : \n");
//     scanf("%s",&str);
//     printf("Text you have entered : %s\n",str);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char str[] = "";
//     printf("Enter your text here : \n");
//     gets(str); //string input
//     puts(str); //string output
//     //read difference between gets and puts
//     return 0;
// }

////The gets() function should never be used in C because it does not check buffer size, leading to buffer overflow vulnerabilities.
// #include<stdio.h>
// int main(){
//     char str[] = "";
//     printf("Enter your text here : \n");
//     gets(str); //string input
//     printf("Text you have entered : %s\n",str);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char str[200];
//     printf("Enter your text here : \n");
//     fgets(str,sizeof(str),stdin);//input string
//     puts("Text u entered");
//     puts(str); //output string
//     return 0;
// }

// string library fn
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char str1[] = "Suvradip Ghosh";
//     char str2[50]; // For copy & concatenation
//     char str3[] = "Hello ";
//     char str4[50]; // Separate copy for reversing

//     // String Length (strlen)
//     printf("Length of str1: %lu\n", strlen(str1));

//     // String Copy (strcpy)
//     strcpy(str2, str1);
//     strcpy(str4, str1); // Copy for reversal
//     printf("Copied string: %s\n", str2);

//     // String Concatenation (strcat)
//     strcat(str3, str1);
//     printf("Concatenated string: %s\n", str3);

//     // String Comparison (strcmp)
//     int cmp = strcmp(str1, str2);
//     printf("Comparison result: %d\n", cmp); // 0 means equal

//     // Convert to Uppercase
//     for (int i = 0; i < strlen(str1); i++)
//     {
//         str1[i] = toupper(str1[i]);
//     }
//     printf("Uppercase: %s\n", str1);

//     // Convert to Lowercase
//     for (int i = 0; i < strlen(str2); i++) 
//     {
//         str2[i] = tolower(str2[i]);
//     }
//     printf("Lowercase: %s\n", str2);

//     // Reverse String (manual implementation)
//     int len = strlen(str4);
//     for (int i = 0; i < len / 2; i++)
//     {
//         char temp = str4[i];
//         str4[i] = str4[len - i - 1];
//         str4[len - i - 1] = temp;
//     }
//     printf("Reversed string: %s\n", str4);

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int numbers[] = {11, 34, 5, 99, 35};
//     int length = sizeof(numbers) / sizeof(numbers[0]);

//     // Printing unsorted array
//     printf("Unsorted array: ");
//     for (int i = 0; i < length; i++) {
//         printf("%d ", numbers[i]);
//     }
//     printf("\n");

//     // Optimized Bubble Sort
//     for (int i = 0; i < length - 1; i++) {  // Runs length - 1 times
//         for (int j = 0; j < length - i - 1; j++) {  // Runs up to unsorted part
//             if (numbers[j] > numbers[j + 1]) { // Swap condition
//                 int temp = numbers[j];
//                 numbers[j] = numbers[j + 1];
//                 numbers[j + 1] = temp;
//             }
//         }
//     }

//     // Printing sorted array
//     printf("Sorted array: ");
//     for (int i = 0; i < length; i++) {
//         printf("%d ", numbers[i]);
//     }
//     printf("\n");

//     return 0;
// }

//selection sort
#include <stdio.h>

int main() {
    int numbers[] = {11, 34, 5, 99, 35};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    // Printing unsorted array
    printf("Unsorted array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Selection Sort Algorithm
    for (int i = 0; i < length - 1; i++) {
        int smallest = i;  // Assume the first element of the unsorted part is the smallest

        for (int j = i + 1; j < length; j++) {
            if (numbers[j] < numbers[smallest]) { // Find the minimum element
                smallest = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        if (smallest != i) { // Swap only if necessary
            int temp = numbers[i];
            numbers[i] = numbers[smallest];
            numbers[smallest] = temp;
        }
    }

    // Printing sorted array
    printf("Sorted array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
