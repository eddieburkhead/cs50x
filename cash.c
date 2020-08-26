#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{

//This program asks for a US dollar amount and determines the minimum amount of coins that would make up that amount

    float change;


//get non-negative user input for change amount
    do
    {
        change = get_float("Enter change: ");
    }
    while (change < 0);


//Converts and rounds change to nearest cent and sets coin counter to zero.
    int cents = round(change * 100);
    int coins = 0;

//Finds quarters
    while (cents >= 25)
    {
        cents -= 25;
        coins++;
    }

//Finds dimes
    while (cents >= 10)
    {
        cents -= 10;
        coins++;
    }

//Finds nickels
    while (cents >= 5)
    {
        cents -= 5;
        coins++;
    }

//Finds pennies
    while (cents >= 1)
    {
        cents -= 1;
        coins++;
    }

    printf("%i\n", coins);

}
