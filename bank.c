#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

float bankBalance;

void exitSequence()
{
    printf("\nPress any key to exit");
    getch();
}

void newBankAccount();
void deleteBankAccount();

int verifyBankDetails(char *inputID,int inputPIN)
{  
    char bankID[10];
    char temp[4];
    char data[15];
    int bankPIN;
    int spaceFound;
    FILE *profile = fopen("profile.txt","r");
    fgets(data,15,profile);
    for (int i = 0; i < strlen(data); i++)
    {
        if(data[i] == ' ')
        {
            spaceFound == 1;
            continue;
        }
        if(spaceFound == 0)
        {
            bankID[i] = data[i];
        }
        if (spaceFound == 1)
        {
            for (int j = 0; j < 4; j++)
            {
                temp[j] = data[i];
                i++;
            }
            break;
        }
    }
    
    fclose(profile);

    bankPIN = atoi(temp);
    printf("bankID: %s",bankID);
    printf("\nbankPIN: %s",temp);

    return 0;
}

int main(int argc, char const *argv[])
{   
    // printf("###### ABC Bank ######");
    // Verifying Identity
    // char userID[10];
    // int userPIN;
    char temp[10];
    // printf("\n\nEnter Your bankID: ");
    // gets(userID);
    // printf("Enter Password: ");
    // scanf("%d",&userPIN);

    // verifyBankDetails(userID,userPIN);
    verifyBankDetails("adfd",1213);

    FILE *balptr = fopen("balance.txt","r");
    fscanf(balptr,"%s",temp);
    bankBalance = atof(temp);
    printf("\nBank Balance: %.2f",bankBalance);
    fclose(balptr);

    // int operationNo;
    // printf("\n\nWhat would you like to do?\nPress 1 to check Balance\nPress 2 to Withdraw Money\nPress 3 to deposit\nPress 4 to exit\n::");
    // scanf("%d",&operationNo);

    return 0;
}