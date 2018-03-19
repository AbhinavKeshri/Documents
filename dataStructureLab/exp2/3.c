#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int n=0;
struct employee
{
    char employee_name[20];
    int employee_no;
    int emp_salary;

};
main()
{
    int a=1,c=0,i=0,n,e=0,t;
    printf("Enter the total number of entries: ");
    scanf("%d",&n);
    struct employee *s=(struct employee *)malloc(n*sizeof(struct employee));
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
                    printf("Enter the name of the employee: ");
                    scanf("%s",s[i].employee_name);
                    printf("Enter employee's number: ");
                    scanf("%d",&s[i].employee_no);
                    printf("Enter the total salary: ");
                    scanf("%d",&s[i].emp_salary);
                    i++;
                    e++;
                }
                else
                    printf("Entry limit exceeded");
                break;
            case 2:
                for(t=0;t<e;t++)
                {
                    printf("Name of the employee: %s\n",s[t].employee_name);
                    printf("Employee number: %d\n",s[t].employee_no);
                    printf("Total salary: %d\n",s[t].emp_salary);
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
