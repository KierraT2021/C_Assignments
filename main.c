#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    int StudentID;
    char *Studentfirstname[20];
    char *Studentlastname[20];
    float score;
    int zip;
    struct Student* left;
    struct Student* right;
};

struct Student addNode(char *Studentfirstname,char *Studentlastname,float score, int zip)
{
struct Student* temp=NULL;
Studentfirstname=temp->Studentfirstname;
Studentlastname=temp->Studentlastname;
temp->score=score;
temp->zip=zip;
temp->left=temp->right=NULL;
return *temp;
};

void printRecords(struct Student *root)
{
    struct Student *temp=root;
    while(temp!=NULL)
    {
        printf("First name:%s \tLast name:%s \tScore:%f \tZip:%d\n",temp->Studentfirstname,temp->Studentlastname,temp->score,temp->zip);
        temp->left=temp->right;
    }
}

void insertRecord (struct Student *root)
{
    struct Student *newStud;
    newStud=malloc(sizeof(struct Student));
    printf("Please enter the student's information in the following format:\nFirstname lastname score zip\n\n");
    scanf("%s %s %f %d",newStud->Studentfirstname,newStud->Studentlastname,newStud->score,newStud->zip);
    addNode(newStud->Studentfirstname,newStud->Studentlastname,newStud->score,newStud->zip);
}

void deleteNode(struct Student *root)
{
    struct Student *newStud=root,*link,*cur;
    char lastname[20];
    printf("Enter last name of the student record you want to delete:\n");
    scanf("%s",&lastname);
    while(newStud!=NULL)
    {
        link=newStud;
        if(strcmp(newStud->Studentlastname,lastname)==0)
        {
            if(link)
            {
                strcpy(newStud->left,link->left);
                strcpy(newStud->right,newStud->right);
                strcpy(newStud->Studentfirstname,link->Studentfirstname);
                strcpy(newStud->Studentlastname,link->Studentlastname);
                newStud->score=link->score;
                newStud->zip=link->zip;
                newStud=link;
                free(link);
            }
            else
            {
                cur=NULL;
                free(newStud);
            }
        }
        cur=newStud;
        newStud=link;
    }
}

void searchZip(struct Student *root)
{
int zip;
printf("Enter the zip code you are searching for:\n");
scanf("%d",&zip);
while(root!=NULL)
{
    if(root->zip==zip)
    {
        printf("%s %s %f %d",root->Studentfirstname,root->Studentlastname,root->score,root->zip);
    }
    root=root->left;
    root->left=root->right;
}
}

void searchScoreRange(struct Student *root)
{
int max,min;
printf("Enter the minimum score range:\n");
fflush(stdin);
scanf("%d",&min);
printf("Enter the maximum score range\n");
fflush(stdin);
scanf("%d",&max);
while(root!=NULL)
{
    if(root->score>min&&root->score<max)
    {
    printf("%s %s %f %d",root->Studentfirstname,root->Studentlastname,root->score,root->zip);
    }
    root=root->left;
    root->left=root->right;
}
}

void findMedian(struct Student *root, int size)
{
 struct Student *root1=root;
 float array[size];
 int i=0;

 while(root!=NULL)
 {
     array[i]=root->score;
     i++;
     root=root->left;
     root->left=root->right;
 }
 float temp;

 for(int i=0;i<size;i++)
 {
     for(int j=i+1;j<size;j++)
     {
         if(array[i]>array[j])
         {
             temp=array[i];
             array[i]=array[j];
             array[j]=temp;
         }
     }
 }
 float median;
 if(size%2==0)
    {
    int middle=size/2;
    median=(array[middle-1]+array[middle])/2;
    }
    else if(size%2!=0)
    {
     float middleScore=(size/2)+(1/2);
     median=array[(int)middleScore];
    }

    printf("The median score is %f.\n",median);
    while(root1!=NULL)
    {
        if(median<root1->score||root1->score==median)
        {
            printf("\nFirst name:%s \tLast name:%s \tScore:%f \tZip:%d\n",root1->Studentfirstname,root1->Studentlastname,root1->score,root1->zip);
        }
        root1=root1->left;
        root1->left=root1->right;
    }
}

int main()
{
    int size,choice;
    printf("Please indicate the number of records you want to enter(min 5):\n");
    scanf("%d",&size);
    while(size<5)
    {
        printf("You entered a size less than 5. Please enter a number that is greater than 5: \n")
        scanf("%d",&size);
    }
     struct Student* root=NULL;
     struct Student** queue=&root;
     char *input;
     printf("Please input records of students (enter a new line after each records) with the following format:\nfirstname lastname score zip\n");
     int counter=0;
     while(counter<size)
     {
         *queue=malloc(sizeof(struct Student));
         scanf("%s %s %f %d",&((*queue)->Studentfirstname),&((*queue)->Studentlastname),&((*queue)->score),&((*queue)->zip));
         **queue=addNode((*queue)->Studentfirstname,(*queue)->Studentlastname,(*queue)->score,(*queue)->zip);
         counter++;
     }

    while(choice!=0)
    {
    printf("Print records (press 1)\nAdd a new record (press 2)\nDelete record(s) (press 3)\nSearch by zip code (press 4)\nSearch by score range (press 5)\nFind median score (press 6)\nExit the program (press 0)\n");
    scanf("%d",&choice);
    if(choice==1)
    {
    printRecords(queue);
    }
    else if(choice==2)
    {
    insertRecord(queue);
    }
    else if(choice==3)
    {
     deleteNode(queue);
    }
    else if(choice==4)
    {
    searchZip(queue);
    }
    else if(choice==5)
    {
    searchScoreRange(queue);
    }
    else if(choice==6)
    {
    findMedian(queue,size);
    }
    else if(choice==0)
    {
        return 0;
    }
    else
    {
        printf("You entered a number that isn't in the menu. Please enter the correct number:\n");
        scanf("%d",&choice);
    }
    }
}
