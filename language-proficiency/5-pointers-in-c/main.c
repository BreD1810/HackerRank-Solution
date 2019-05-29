#include <stdio.h>

void update(int *a,int *b) {
    int a_old = *a;
    *a = *a + *b;
    *b = a_old > *b ? a_old - *b : *b - a_old;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

