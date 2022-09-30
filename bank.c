#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define maxAccounts  100
#define maxSizeBankID  10
#define sizeBankPIN  4
#define bankBalanceMaxFigures  8
#define maxSizePersonalData  maxSizeBankID+sizeBankPIN+bankBalanceMaxFigures+2

float bankBalance;
char data[maxAccounts][maxSizePersonalData];
char bankID[maxAccounts][maxSizeBankID];
char bankPIN[maxAccounts][sizeBankPIN];

int verifyBankDetails(char *inputID,int inputPIN)
{
    int spaceFound;
    FILE *profile = fopen("profile.txt","r");
    for (int i = 0; i < maxAccounts; i++)
    {
        spaceFound = 0;
        fgets(data[i],maxSizePersonalData,profile);
        for (int j = 0; j < maxSizePersonalData; j++)
        {
            if (data[i][j] == ' ')
            {
                spaceFound++;
            }
            if (spaceFound == 0)
            {
                bankID[i][j] = data[i][j];
            }
            
        }
        
    }
    
    fclose(profile);
    return 0;
}

int main(int argc, char const *argv[])
{   

    return 0;
}