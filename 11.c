#include <stdio.h>
#include <stdlib.h>


void main()
{
    //Declare size;
    int size;
    //Gather user input for the size of the array
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    //Declare array with user input for size
    int Input[size];
    //Gather user input for the elements within the array
    printf("Enter the elements of the array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&Input[i]);
    }
    //Declare a temporary variable to sort
    int order;
    //Use a for loop to sort the integer values
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            order=Input[i];
            Input[i]=Input[j];
            Input[j]=order;
        }
    }
    //Print the second from last element in the array
    printf("Second largest element of the array:%d\n",Input[size-2]);
    //Print the second element in the array
    printf("Second smallest element of the array is:%d\n",Input[1]);
    return 0;

}
