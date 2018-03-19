#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int n=0;
struct student
{
    char student_name[20];
    int student_roll_number;
    int total_marks;

};
main()
{
    int a=1,c=0,i=0,n,e=0,t;
    printf("Enter the total number of entries: ");
    scanf("%d",&n);
    struct student *s=(struct student *)malloc(n*sizeof(struct student));
    while(a)
    {
        system("cls");
        printf("1. Add an entry\n2. Display all entries\n3. Exit\nEnter your choice(1-3): ");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
                if(i<n)
                {
                    printf("Enter the name of the student: ");
                    scanf("%s",s[i].student_name);
                    printf("Enter student's roll number: ");
                    scanf("%d",&s[i].student_roll_number);
                    printf("Enter the total marks: ");
                    scanf("%d",&s[i].total_marks);
                    i++;
                    e++;
                }
                else
                    printf("Entry limit exceeded");
                break;
            case 2:
                for(t=0;t<e;t++)
                {
                    printf("Name of the student: %s\n",s[t].student_name);
                    printf("Student's roll number: %d\n",s[t].student_roll_number);
                    printf("Total marks: %d\n",s[t].total_marks);
                    getch();
                }

                break;
            case 3:
                a=0;
                break;
            default : printf("Invalid Input\n");

        }
    }
}
