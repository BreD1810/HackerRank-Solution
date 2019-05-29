#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char* number_to_english(int i);

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.

    char* output;
    for(int i = a; i <= b; i++)
    {
        if(i <= 9)
        {
            output = number_to_english(i);
        }
        else if (i % 2 == 0)
        {
            output = "even";
        }
        else
        {
            output = "odd";
        }
        printf("%s\n", output);
    }

    return 0;
}

char* number_to_english(int i)
{
    char* output;
    switch (i)
    {
    case 1:
        output = "one";
        break;
    case 2:
        output = "two";
        break;
    case 3:
        output = "three";
        break;
    case 4:
        output = "four";
        break;
    case 5:
        output = "five";
        break;
    case 6:
        output = "six";
        break;
    case 7:
        output = "seven";
        break;
    case 8:
        output = "eight";
        break;
    case 9:
        output = "nine";
        break;
    }
    return output;
}
