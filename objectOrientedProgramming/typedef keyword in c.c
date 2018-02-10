# include <stdio.h>
# include <stdlib.h>
# include <string.h>
typedef int integer; /// Another name for int is integer.

/* typedef keyword can also be used to name a structure
  if you define a structure with typedef then you do not need to
    write struct again and again in order to initialize structure.*/
typedef struct student
{
    int rollno;
    char name[20];
    int age;

}STUDENT;
int main()
{

    integer i = 34;
    printf("%d",i);
    STUDENT s1;
    s1.rollno = 35;
    printf("\n%d",s1.rollno);
    strcpy(s1.name,"Abhinav");
    printf("%s",s1.name);
}
