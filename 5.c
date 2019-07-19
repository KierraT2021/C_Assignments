#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    //Declare char array
    char sentence[100];
    //Gather user input
    printf("Put space before entering a sentence to reverse:\n");
    gets(sentence);
    //Calculate the length of the string the user entered
    int length=strlen(sentence);
    //Print the string that the user enter backwards onto screen
    printf("Reversed sentence:\n");
    for(int i=length-1;i>0;i--)
    {
        printf("%c",sentence[i]);
    }

    return 0;
}
