#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) 
{
    int mm[2][2];
	int xx;
	int yy;
    for(xx =0; xx < 2; xx++)
    {
        for(yy =0; yy < 2; yy++)
        {
            scanf("%d \n", &mm[xx][yy]);
        }
    }

	printf("the square of the second matrix: \n");
    printf("%d", (mm[0][0]*mm[0][0])+(mm[0][1]*mm[1][0]));
	printf(" %d \n", (mm[0][0]*mm[0][1])+(mm[0][1]*mm[1][1]));
    printf("%d", (mm[0][0]*mm[1][0])+(mm[1][1]*mm[1][0]));
	printf(" %d \n", (mm[1][0]*mm[0][1])+(mm[1][1]*mm[1][1]));

   
	return 0;
}