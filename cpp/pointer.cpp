//https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?h_r=next-challenge&h_v=zen

#include <stdio.h>
#include<cmath>

void update(int *a,int *b) {
    int x=*a,y=*b;
    *a= x+y;
    *b =abs(x-y);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}