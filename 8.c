#include <stdio.h>

//Create function to check if given number is a prime number
int CheckPrime(int n)
{//Declare and initialize variables
    int i,isPrime=1;
    //If the number is not 2 and is divisible by two
    //Or if the number is not 3 and is divisible by three
    //Then the number is not prime
    if(n!=2&&n%2==0||n!=3&&n%3==0)
    {
        return 0;
    }
    //Return value if the number is prime or not
    return isPrime;
}

int main()
{
    //Declare variable
    int n;
    //Gather user input
    printf("Enter a positive integer:\n");
    scanf("%d",&n);
    //Take half of the user input
    int nHalf=n/2;
    //Use for loop to see which prime value equal the number to user provided
    for(int i=n;i>0;i--)
    {
        for(int j=0;j<nHalf+1;j++)
        {
            if(1==CheckPrime(i)&&1==CheckPrime(j)&&n==i+j)
            {
                  printf("%d = %d + %d\n",n,i,j);
            }
        }
    }
    return 0;
}
