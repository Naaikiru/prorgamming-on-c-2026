#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) 
{
	
	double m[3][3];
	int x;
	int y;

    for(x =0; x < 3; x++)
    {
        for(y =0; y<3; y++)
        {
            scanf("%lf \n", &m[x][y]);
        }
    }

    printf("%lf \n", m[0][0]);

	return 0;
}

