#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) 
{
    int i = 0;
    while (i == 0)
    {       
        int size;
        printf("enter the size of the matrix: \n");
        scanf("%d", &size);

        if (size == 3)
        {
            printf("matrices with the 'double' type(3x3): \n");

            double m[3][3];
            int x;
            int y;
            for(x =0; x < 3; x++)
            {
                for(y =0; y < 3; y++)
                {
                    scanf("%lf", &m[x][y]);
                }
            }

            printf("the sum of the values of the main diagonal = %lf \n", m[0][0]+m[1][1]+m[2][2]);
            printf("the sum of the values of the side diagonal = %lf \n", m[0][2]+m[1][1]+m[2][0]);
        }
        
        else if (size == 2)
        {
            printf("matrices with the 'int' type(2x2): \n");

            int mm[2][2];
            int xx;
            int yy;
            for(xx =0; xx < 2; xx++)
            {
                for(yy =0; yy < 2; yy++)
                {
                    scanf("%d", &mm[xx][yy]);
                }
            }

            printf("the square of the second matrix: \n");
            printf("%d", (mm[0][0]*mm[0][0])+(mm[0][1]*mm[1][0]));
            printf(" %d \n", (mm[0][0]*mm[0][1])+(mm[0][1]*mm[1][1]));
            printf("%d", (mm[0][0]*mm[1][0])+(mm[1][1]*mm[1][0]));
            printf(" %d \n", (mm[1][0]*mm[0][1])+(mm[1][1]*mm[1][1]));
        }

        else
        {
            printf("You have entered the wrong value, please try again! \n");
        }

        int z;
        printf(" \n");
        printf("write '1' if ypu wanna contune or '0' if you wanna stop: \n");
        scanf("%d", &z);
        if (!z) break;
    }

	return 0;
}



