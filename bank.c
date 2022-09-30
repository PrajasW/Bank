#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define maxAccounts  100
#define maxSizeBankID  10
#define sizeBankPIN  4
#define maxBankBalance 8

float userBankBalance;
char bankID[maxAccounts][maxSizeBankID];
char bankPIN[maxAccounts][sizeBankPIN];
char bankBalance[maxAccounts][maxBankBalance];

int verifyBankDetails(char *inputID,int inputPIN)
{
    int spaceFound;
    char profileChar;
    FILE *profile = fopen("profile.txt","r");
    for (int i = 0; i < maxAccounts; i++)
    {
        for (int j = 0; j < (maxSizeBankID+sizeBankPIN+maxBankBalance+2); j++)
        {
            profileChar = (char) fgetc(profile);
            printf("%c",profileChar);
        }
        
    }
    fclose(profile);
    return 0;
}

int main(int argc, char const *argv[])
{   

    return 0;
}