#include <stdio.h>

void main()
{
    //Initialize & declare variables
    int x,counter=0;
    //Declare user input variable
    int userInput [20];
    //Gather user input
    printf("Enter 20 positive integers:\n");
    for(int i=0;i<20;i++)
    {
        scanf("%d",&userInput[i]);
    }

    //Get target value from the user
    printf("Enter an positive integer as the target value:\n");
    scanf("%d",&x);
    //Use 2 for loops to find which combination of integers equal the target value
    for(int i=0;i<20;i++)
    {
        for(int j=i+1;j<20;j++)
        {
            if(userInput[i]+userInput[j]==x)
            {
                printf("(%d, %d)",userInput[i],userInput[j]);
            }
            else
            {
                counter++;
            }
        }
    }
    //If the counter reaches the number 190, then that means that none of the values in the array summed to the target value
    if(counter==190)
    {
        printf("No pairs of integers in the given array can be summed to the target value.");
    }
    return 0;
}
