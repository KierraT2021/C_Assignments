#include <stdio.h>

//Create a function to calculate the series
int f(int n,int i)
{
    if(i==0)
    {
        return 0;
    }

    n=(n-1)*(n-1)+1;
    printf("%d\n",n);
    i--;
    //Make the function recursive
    return f(n+1,i);

 }


int main()
{
    //Declare variable
    int n;
    //Gather user input
    printf("Enter the number to calculate the nth place of the series:\n");
    scanf("%d",&n);
    //Declare array
    int series[n];
    //Place the user input and 1 (represents the 1st place in the sequence) into the function
    f(1,n);

    return 0;
}
