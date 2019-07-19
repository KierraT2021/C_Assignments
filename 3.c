#include <stdio.h>

void main()
{
    //Declare and initialize variables
    int Input, remainder, Reverse=0;
    //Gather user input
    printf("Enter an positive integer:\n");
    scanf("%d",&Input);
    //Initialize variable to store the user input
    int Input2=Input;
    //Use for loop to calculate the reverse order of the Input variable and store it into the input variable again
    while(Input!=0)
    {
        remainder=Input%10;
        Reverse=Reverse*10+remainder;
        Input=Input/10;
    }
    //Calculate the sum of the Input and the reversed Input
    int sumInt=Input2+Reverse;
    //Print all calculate variables onto the screen
    printf("Entered number: %d\nReverse number: %d\nSum: %d",Input2,Reverse,sumInt);
    return 0;
}
