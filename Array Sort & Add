#include <stdio.h>
#include <stdlib.h>

//Create function to add and sort arrays together
int mergeArr(int A[],int B[],int SizeA, int SizeB, int InputSizeA)
{
    //Declare and initialize a counter to add the second array with
    int counter=0;
    //Add the second array into the first array using a for loop
    for(int i=InputSizeA;i<SizeA;i++)
    {
        A[i]=(int)B[counter];
        counter++;
    }

    //Declare a temporary variable to sort through the array in ascending order
    int order;
    //Sort the array
    for(int i=0;i<SizeA;i++)
    {
        for(int j=i+1;j<SizeA;j++)
        {
            if(A[i]>A[j])
            {
             order=A[i];
            A[i]=A[j];
            A[j]=order;
            }
        }
    }
    //Return the sorted array
    return A;
}
int main()
{
    //Declare the arrays to be used
    int A[18];
    int B[5];

    //Get user input for the first array
    printf("Enter 13 integers to put into the first array:\n");
    for(int i=0;i<13;i++)
    {
        scanf("%d",&A[i]);
    }
    //Get user input for the second array
    printf("Now enter 5 integers to put into the second array:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&B[i]);
    }
    //Add the arrays, total size of the first array, size of the second array, and the actual size of the input in the first array into the created function
    mergeArr(A,B,18,5,13);
    printf("Sorted values in ascending order after merging the first and second array:\n");

    //Print loop in ascending order
    for(int i=0;i<17;i++)
    {
        printf("%d, ",A[i]);
    }
    //Print the last element of the array without the comma
    printf("%d",A[17]);

    return 0;
}

