#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char ch;
    scanf("%c%*c", &ch);

    char s[20];
    scanf("%s%*c", &s);

    char sen[100];
    scanf("%[^\n]%*c", &sen);

    printf("%c\n%s\n%s\n", ch, s, sen);

    return 0;
}
