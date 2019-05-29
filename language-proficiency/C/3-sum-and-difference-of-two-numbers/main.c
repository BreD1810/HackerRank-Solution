#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i1, i2;
	scanf("%d %d%*c", &i1, &i2);

    float f1, f2;
    scanf("%f %f%*c", &f1, &f2);
    
    printf("%d %d\n%.1f %.1f\n", i1+i2, i1-i2, f1+f2, f1-f2);

    return 0;
}
