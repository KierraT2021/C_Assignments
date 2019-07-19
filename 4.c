#include <stdio.h>
#include <string.h>

void main()
{
    //Initialize and declare variables and arrays
    int counter=0;
    char sentence[10];
    char repeat [10];
    //Gather user input
    printf("Enter a phrase with 10 characters (spaces included):\n");
    gets(sentence);
    //Use for loops and if statements to find which characters are repeated and the number characters were repeated
    //Also, add the repeated character in an array
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(sentence[i]==sentence[j])
            {
               repeat[counter]=sentence[i];
               counter++;
            }
            else
            {
                continue;
            }
        }
    }
    //Print the number of characters repeated onto screen
    printf("Number of characters repeated: %d\n",counter);
    //print the repeated character onto screen
    printf("Characters repeated: ");
    for(int i=0;i<counter-1;i++)
    {
     printf("%c, ",repeat[i]);
    }
    //Print the last repeated character from array without space and comma
    printf("%c",repeat[counter-1]);
    return 0;
}
