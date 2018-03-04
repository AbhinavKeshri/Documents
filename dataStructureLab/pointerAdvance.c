# include <stdio.h>
# include <stdlib.h>
# define MALLOC(p,s) if(!((p) = malloc(s))){fprintf(stderr,"Insufficient Memory");exit(EXIT_FAILURE);}
# define swap(x,y,z) {(z) = (x) ;(x)  = (y); (y) = (z);}
int main()
{
    int i ,*pi;
    float  *pf;
    MALLOC(pf, sizeof(int));
    pf = (float *)malloc(sizeof(float));
    *pi = 1023;
    *pf = 3.12;
    printf("An integer = %d, a float = %f\n address of integer %p", *pi, *pf, pi);
    free(pi);
    free(pf);
    int j;
    i  = 3;
    j = 5;
    int temp = 1;
    swap(i, j, temp);
    printf("\n%d %d",i ,j);


}
