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
        scanf("%d", &size);  // Убрал пробелы и \n

        if (size == 3)
        {
            printf("matrices with the 'double' type(3x3): \n");

            double m[3][3];
            for(int x = 0; x < 3; x++)
            {
                for(int y = 0; y < 3; y++)
                {
                    printf("Element [%d][%d]: ", x, y);
                    scanf("%lf", &m[x][y]);  // Исправлено
                }
            }

            printf("the sum of the main diagonal = %lf \n", 
                   m[0][0] + m[1][1] + m[2][2]);
            printf("the sum of the side diagonal = %lf \n", 
                   m[0][2] + m[1][1] + m[2][0]);
        }
        
        else if (size == 2)
        {
            printf("matrices with the 'int' type(2x2): \n");

            int mm[2][2];
            for(int xx = 0; xx < 2; xx++)
            {
                for(int yy = 0; yy < 2; yy++)
                {
                    printf("Element [%d][%d]: ", xx, yy);
                    scanf("%d", &mm[xx][yy]);  // Исправлено
                }
            }

            printf("the square of the matrix: \n");
            printf("%d %d\n", 
                   (mm[0][0]*mm[0][0]) + (mm[0][1]*mm[1][0]),
                   (mm[0][0]*mm[0][1]) + (mm[0][1]*mm[1][1]));
            printf("%d %d\n", 
                   (mm[0][0]*mm[1][0]) + (mm[1][1]*mm[1][0]),
                   (mm[1][0]*mm[0][1]) + (mm[1][1]*mm[1][1]));
        }

        else
        {
            printf("You have entered the wrong value, please try again! \n");
        }
        
        int z;
        printf("write '1' if you wanna continue or '0' if you wanna stop: \n");
        scanf("%d", &z);
        if (!z) break;
    }

    return 0;
}