#include <stdio.h>

void main()
{
    //Declare size variable
    int size;
    //Gather user input
    printf("Enter size of array:\n");
    scanf("%d",&size);
    //Declare array to store elements
    int element[size];
    //Gather user input for the elements to place in the array
    printf("Enter the elements of the array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&element[i]);
    }
    //Declare even and odd arrays
    int odd[size];
    int even[size];
    //Declare and initialize even and odd counters
    int counterOdd=0,counterEven=0;
    //Add even or odd elements into their proper array
    for(int i=0;i<size;i++)
    {
        if(element[i]%2==0)
        {
            even[counterEven]=element[i];
            counterEven++;
        }
        else
        {
            odd[counterOdd]=element[i];
            counterOdd++;
        }
    }
    //Print the arrays out to screen
    printf("Odd elements of the array are:\n");
    for(int i=0;i<counterOdd;i++)
    {
        printf("%d\n",odd[i]);
    }
    printf("Even elements of the array are:\n");
    for(int i=0;i<counterEven;i++)
    {
        printf("%d\n",even[i]);
    }
    return 0;
}
