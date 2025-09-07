#include <stdio.h>
typedef struct Bankaccount
{
    char name[50];
    char bank[50];
    char branch[50];
    long long ac;
    char address[100];
    long long mb;
} bac;

// Function to print account details
void printAccountDetails(bac account) //account is copy of c1 or other c
{
    printf("Account Holder Name     : %s\n", account.name);
    printf("Bank Name               : %s\n", account.bank);
    printf("Bank Branch Name        : %s\n", account.branch);
    printf("Account Number          : %lld\n", account.ac);
    printf("Customer Address        : %s\n", account.address);
    printf("Customer Contact No.    : %lld\n", account.mb);
}

int main()
{
    bac c1 = {"Srijan Kundu", "Punjab National Bank", "EM4, Sector V, Kolkata", 211001102069LL, "AQ Block, Sector V, Kolkata, West Bengal, 7000102", 8765432119LL};
    printAccountDetails(c1);

    return 0;
}
