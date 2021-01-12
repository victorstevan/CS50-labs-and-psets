#include <stdio.h>
#include <cs50.h>
#include <math.h>

//PROTOTYPES 
bool checkIfIsValid(long long card);
bool luhnAlgoHolds(long long card);
void showCardFlag(long long card);


int main(void)
{
    long long credCard;
    
    //LOOP for getting a credit card number, won't stop until we give a positive number
    do
    {
        credCard = get_long_long("Please, enter a credit card number: ");
    }
    while (credCard < 0);
    
    //If-statement to check if the credit card is valid and if it's compatible with the checksum algorithm presented.
    if (checkIfIsValid(credCard) == true && luhnAlgoHolds(credCard) == true)
    {
        showCardFlag(credCard);
    }
    else
    {
        printf("INVALID\n");
    }
    
    
    
    
}

//Check if a card is valid by analysing if it has 13, 15 or 16 digits, the base 10 log of a number plus 1 is approximately the number of digits (ex: n = 15421, log_10(15421) + 1 = 15,something.
//We use floor to reap out the decimal places
bool checkIfIsValid(long long card)
{
    if ((floor(1 + log10(card)) == 13 || floor(1 + log10(card)) == 15 || floor(1 + log10(card)) == 16))
    {
        return true;
    }
    else
    {
        return false;    
    }
}

//Check if the Luhn Algorith holds, pretty self-explanatory, the only tricky part is that if the number in a odd index has 2 digits, we decompose it to get the first (n/10) and the last (n%10)
bool luhnAlgoHolds(long long card)
{
    
    int checksum = 0;
    //Tried placing the card/=10 inside the scope of the loop, but it didn't worked, so we need do divide the value by 10 every time the change de index by +1
    for (int i = 0; card != 0; i++, card /= 10)
    {
        
        
        if (i % 2 == 0)
        {
            checksum = checksum + (card % 10);
        }
        else
        {
            int decomposableDigit = 2 * (card % 10);
            checksum += decomposableDigit / 10 + decomposableDigit % 10;
        }
    }
    
    if (checksum % 10 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

//Identifies the card flag, considering the card number as a big digit and setting the possibilities in a interval, using cientific notation.
void showCardFlag(long long card)
{
    
    if ((card > 34e13 && card < 35e13) || (card > 37e13 && card < 38e13))
    {
        printf("AMEX\n");
    }
    else if (card >= 51e14 && card < 56e14)
    {
        printf("MASTERCARD\n");
    }
    else if ((card >= 4e12 && card < 5e12) || (card >= 4e15 && card < 5e15))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
    
    
}