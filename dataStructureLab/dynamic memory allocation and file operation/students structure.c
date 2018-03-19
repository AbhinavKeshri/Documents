# include <stdio.h>
# include <stdlib.h>
int total_no_of_students = -1;
typedef struct
{
	char name[100];
	int roll_no;
	int total_marks;
}students;
void inputer(int a, students *ptr)
{
	printf("\n\n\nEnter the name of the student\n");
	scanf_s("%s", &ptr[total_no_of_students].name);
	printf("Enter the roll no\n");
	scanf_s("%d", &ptr[total_no_of_students].roll_no);
	printf("Enter the total marks\n");
	scanf_s("%d", &ptr[total_no_of_students].total_marks);


}

void display(students * ptr)
{
	printf("name : %s\n", ptr[total_no_of_students].name);
	printf("Roll no : %d\n", ptr[total_no_of_students].roll_no);
	printf("Total Marks : %d\n\n\n", ptr[total_no_of_students].total_marks);
}
int main()
{

	students *ptr = (students *)malloc(10*sizeof(students));
	int option;
	do
	{
		printf("Enter choice\n1.For entering a new student\n2.For displaying the last inputed student\n");
		scanf_s("%d", &option);
			switch (option)
			{
			case 1:
				total_no_of_students++;
				inputer(total_no_of_students, ptr);
				break;
			case 2:
				display(ptr);
			}
	} while (1);

}
