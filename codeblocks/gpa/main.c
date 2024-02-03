#include <stdio.h>

FILE *f;

struct student
{
    char name[20];
    int id;
    int n;
    float sum;
    float gpa;
} s[100];

float GPA(int n);

int main ()
{
    int m,i,x,b;
    float max=0;


    s[i].sum=0;

    printf("Please Enter Number Of Students : ");
    scanf("%d",&m);

    for(i=0;i<m;i++)
    {
        printf("\nStudent %d : \n",i+1);

        printf("Name : ");
        scanf("%s",&s[i].name);

        printf("ID : ");
        scanf("%d",&s[i].id);

        printf("Number Of Courses : ");
        scanf("%d",&s[i].n);

    }
    printf("\nEnter Student Marks");
    for(i=0;i<m;i++)
    {
        printf("\n\n\t\t\t......[ Student %d ]......\n",i+1);

        for(x=0;x<s[i].n;x++)
        {
            printf("Course %d Mark : ",x+1);
            scanf("%d",&b);

            s[i].sum+=b;
        }
        printf("\nSum Of The Courses Marks = %3.f",s[i].sum);
        printf("\nGPA For Student %d = %f",i+1,GPA(s[i].gpa));


    }
    if (s[i].gpa>max)
        max=s[i].gpa;
    printf("\n\nHighest GPA is done by Student %d with GPA = %f",i,max);

    {

        if((f=fopen("d:\\STUDENTS.txt","w"))==NULL)
            printf("\ncant open file ");
//      if((f=fopen("d:\\STUDENTS.txt","r"))==NULL)
//      printf("\ncant open file ");

        fprintf(f,"Name : %s\t ID : %d\t GPA = %f \n",s[i].name,s[i].id,s[i].gpa);

        fclose(f);
    }
}

float GPA(int i)
{
    s[i].gpa=0;
    s[i].gpa=s[i].sum/s[i].n;

    return s[i].gpa;
}
