#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    //Declare pointers
    char *Str1[5][4];
    char *order[4];
    //Initialize the number of strings
    int amount=5;
    //Gather user input
    printf("Enter 5 strings (with 4 characters) one by one delimited by a new line:\n");
    for(int i=0;i<amount;i++)
    {
        scanf("%s",Str1[i]);
    }
    //Use for loop to sort strings in ascending order
    for(int i=0;i<amount;i++)
    {
        for(int j=i+1;j<amount;j++)
        {
            if(strcmp(Str1[i],Str1[j])>0)
            {
                strcpy(order,Str1[i]);
                strcpy(Str1[i],Str1[j]);
                strcpy(Str1[j],order);
            }
        }
    }
//Print sorted strings
    printf("Sorted Strings:\n");
    for(int i=0;i<amount;i++)
    {
        printf("%s\n",Str1[i]);
    }

}

