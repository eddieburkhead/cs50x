#include<cs50.h>
#include<stdio.h>

//These introduce the concepts of space and block being written a certain number of times
void space(int n);
void block(int r);


int main(void)
{
    int height;

//user inputs height, loops unless user selects an integer between 1 and 8
    do
    {
        height = get_int("What is the height?\n");
    }
    while (height < 1 || height > 8);

//prints row after row of blocks and spaces, based on user input of height
    for (int k = 1; k <= height; k++)
    {
        space(height - k);
        block(k);
        printf("  ");
        block(k);
        printf("\n");
    }
}

//Create n number of spaces
void space(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
}

//creates r number of blocks 
void block(int r)
{
    for (int j = 0; j < r; j++)
    {
        printf("#");
    }
}
