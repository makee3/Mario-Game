#include <stdio.h>
#include <string.h>
#include <C:\msys64\mingw64\include\cs50\cs50.h>
#include <math.h>
#include <conio.h>

//gcc -o mariogame mariogame.c "C:\msys64\mingw64\include\cs50\cs50.h"

//create this command line output that takes input for height (4 in this example)
//   #  #
//  ##  ##
// ###  ###
//####  ####

int main(void)
{
    printf("\nSee how high you can go ;)\n");
    int height;
    do
    {
        //get height input
        //fflush(stdin);
        //getch();
        //printf("\nHeight is: %i ", height);
        height = 0;
        printf("\nHeight?: ");
        scanf(" %i", &height);

        while ((getchar()) != '\n');
    }
    while (height < 1);

    printf("\n");

    for (int i = 0; i < height; i++)
    {
        //spaces at the start of each row
        for (int k = i; k < height; k++)
        {
            printf(" ");
        }
        //left hashes for each row
        for (int j = height - i; j <= height; j++)
        {
            printf("#");
        }
        //spaces in the middle of each row
        printf("  ");
        //right hashes for each row
        for (int l = height - i; l <= height; l++)
        {
            printf("#");
        }
        //start a new row before iterating
        printf("\n");
    }

    fflush(stdin);

    double x;
    printf("\nThanks for playing! Type 1 and press enter to play again, type anything else and enter to exit. ");
    scanf("%lf", &x);
    
    while ((getchar()) != '\n');
    printf("\n");

    if (x == 1)
    {
        main();
    }
    else
    {
        return 0;
    }
}