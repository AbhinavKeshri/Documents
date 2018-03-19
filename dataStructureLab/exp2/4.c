#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int n=0;
struct faculty
{
    char faculty_name[20];
    int faculty_ID;
    int class_code;
    char class_name[20];

};
main()
{
    int a=1,c=0,i=0,n,e=0,t;
    printf("Enter the total number of entries: ");
    scanf("%d",&n);
    struct faculty *s=(struct faculty *)malloc(n*sizeof(struct faculty));
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
                    printf("Enter the name of the faculty: ");
                    scanf("%s",s[i].faculty_name);
                    printf("Enter faculty's number: ");
                    scanf("%d",&s[i].faculty_ID);
                    printf("Enter the class code: ");
                    scanf("%d",&s[i].class_code);
                    printf("Enter the class name: ");
                    scanf("%s",s[i].class_name);
                    i++;
                    e++;
                }
                else
                    printf("Entry limit exceeded");
                break;
            case 2:
                for(t=0;t<e;t++)
                {
                    printf("Name of the faculty: %s\n",s[t].faculty_name);
                    printf("Faculty ID: %d\n",s[t].faculty_ID);
                    printf("Class codes: %d\n",s[t].class_code);
                    printf("Class name is: %s\n",s[t].class_name);
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
