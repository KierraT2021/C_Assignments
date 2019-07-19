#include <stdio.h>
#include <string.h>

int main()
{
    //Declare char arrays
    char Input[20], Input2[20];
    //Initialize counters
    int counter=0,special=0;
    //Gather user input
    printf("Enter a string with special characters to delimit:\n");
    gets(Input);
    //Calculate length of string entered by user
    int length=strlen(Input);
    //Use for loop to check each element in the array to see if it is a special character or not
    for(int i=0;i<length;i++)
    {
        //If the element isn't a special character then add it to the second array
        if((Input[i]>='a'&&Input[i]<='z')||(Input[i]>='A'&&Input[i]<='Z'))
        {
            Input2[counter++]=Input[i];
        }
        //If the element is a special character, then increment the special counter
        else if(!(Input[i]>='a'&&Input[i]<='z')||(Input[i]>='A'&&Input[i]<='Z'))
        {
            special++;
        }
    }
    //Print the delimited string onto screen
    printf("Output string:\n");
    for(int i=0;i<length-special;i++)
    {
        printf("%c",Input2[i]);
    }

return 0;
}
