# include <stdio.h>
# include <stdlib.h>

void matrix_inputer(int row, int column, int matrix_name[row][column])
{
	int iter1, iter2;
	for(iter1=0; iter1<row; iter1++)
	{
		for(iter2 =0; iter2<column;iter2++)
		{
			scanf("%d", &matrix_name[iter1][iter2]);
		}
	}
}
void matrix_printer(int row, int column, int matrix_name[row][column])
{
	int iter1, iter2;
	for(iter1=0; iter1<row; iter1++)
	{
		for(iter2 =0; iter2<column;iter2++)
		{
			printf("%d  ", matrix_name[iter1][iter2]);
		}
		printf("\n");
	}
}
void triplet_matrix_creator(int row, int column, int matrix[row][column], int* triplet)
{
	int iter1, iter2;
	int i=0,j =0;
	for(iter1=0;iter1<row;iter1++)
        for(iter2 = 0; iter2<column;iter2++)
    {
       if(matrix[iter1][iter2])
       {
       	
       		triplet = (int*)realloc(triplet,(j+3)*sizeof(int));
       		j++;
          triplet[i++] = iter1;
          triplet[i++] = iter2;
          triplet[i++] = matrix[iter1][iter2];
       }
    }
}

int *triplet_matrix_adder(int *triplet1, int *triplet2)
{
	int i=0;
	int j =0;
	int *triplet;
	do{
	
	if(triplet1[i] == triplet2[i]&&triplet1[i+1]==triplet2[i+1])
	{
		triplet = (int *)realloc(triplet,(j+3)*sizeof(int));
		triplet[j]= triplet1[i];
		triplet[j+1] = triplet1[i+1];
		triplet[j+2] = triplet1[i+2]+triplet2[i+2];
		i++;
		
	}
	}
}

int main()
{
	int n , m;
	printf("To add two matrices\n");
	printf("enter the size of first matrix\n");
	scanf("%d %d",&n , &m );
	printf("enter matrix\n");
	int first_matrix[n][m];
	matrix_inputer(n,m, first_matrix);
	matrix_printer(n,m,first_matrix);
	int * triplet1;
	triplet_matrix_creator(n,m,first_matrix, triplet1);
	/// second matrix 
	printf("enter the size of second matrix\n");
	scanf("%d %d",&n , &m );
	printf("enter matrix\n");
	int second_matrix[n][m];
	matrix_inputer(n,m, second_matrix);
	matrix_printer(n,m,second_matrix);
	int * triplet2;
	triplet_matrix_creator(n,m,second_matrix, triplet2);
	int *triplet3;
	triplet3 = triplet_matrix_adder(triplet1, triplet2);
	
}
