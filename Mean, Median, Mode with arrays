#include <stdio.h>
#include <math.h>

//Create function for calculating mean
double mean(int Input[],int size)
{
//Initialize variables
double total=0;
//Use for loop to add all variables in the array
for(int i=0;i<size;i++)
{
    total=total+Input[i];
}
//Initialize and calculate the mean of the array
double meanVal=total/(double)size;
//Return mean
return meanVal;
}

//Create function for calculating mode
int mode(int Input[],int size)
{
//Declare variables
int counter,maxCount,maxInt;
//Use for loop to see which integer values were repeated and how many times
for(int i=0;i<size;i++)
{
    counter=0;
    for(int j=i+1;j<size;j++)
    {
        if(Input[i]==Input[j])
        {
            counter++;
        }
    }
    //If a new variable was repeated more than the previous highest, then replace those values with the new ones
    if(counter>maxCount)
    {
        maxCount=counter;
        maxInt=Input[i];
    }
}
//Return the variable that was repeated the most
return maxInt;
}

//Create function to calculate the median of the function
double median(int Input[],int size)
{
//Declare variables
int order;
double Med;

//If the size of the array is divisible by 2 (otherwise known as even), then take the element in that place and the element in the place before it, add them together, and divide them by 2
if(size%2==0)
{
 Med=((double)Input[(size/2)-1]+(double)Input[size/2])/2;
}
//if the size of the array is odd, then take the int value of the size divide by 2 and add one
else
{
    int middle=(int)(size/2);
    Med=(double)Input[middle+1];
}
//Return the median
return Med;
}

void main()
{
    //Declare sizes for first and second array
    int size1,size2;
    //Gather user input for the size and elements for array 1
    printf("Enter size of array 1:\n");
    scanf("%d",&size1);
    //Declare array1
    int array1[size1];
    printf("Enter integers for array 1:\n");
    for(int i=0;i<size1;i++)
    {
        scanf("%d",&array1[i]);
    }
    //Gather size and element for array 2
    printf("Enter size of array 2:\n");
    scanf("%d",&size2);
    //Declare array2
    int array2[size2];
    printf("Enter integers for array 2:\n");
    for(int i=0;i<size2;i++)
    {
        scanf("%d",&array2[i]);
    }
//Calculate the mean, median, and mode of array1 and array2
    double Mean1=mean(array1,size1);
    double Mean2=mean(array2,size2);
    double Median1=median(array1,size1);
    double Median2=median(array2,size2);
    int Mode1=mode(array1,size1);
    int Mode2=mode(array2,size2);

    //If the mean, median, and mode of array1 are larger than the mean, median, and mode of array2, then print this statement
    if((Mean1>Mean2)&&(Median1>Median2)&&(Mode1>Mode2))
    {
        printf("You're playing more video games. You have to spend more time studying.");
    }
    //If it is vice versa, then print this statement
    else if((Mean1<Mean2)&&(Median1<Median2)&&(Mode1<Mode2))
    {
        printf("Good, you're spending considerable time in studying.");
    }
    //If neither of the above conditions are met, then print this statement
    else
    {
        printf("Sorry, can't come to an outcome.");
    }
    return 0;
}
