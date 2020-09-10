#include <stdio.h>

int sumof(int a, int b)
{
    int sum = (b < a) ? ( (a + b) / (double)2 ) * (a - b + 1) : ( (a + b) / (double)2 ) * (b - a + 1);
    return sum;
}

int main(void)
{
    int a, b;
    puts("a 와 b 를 포함한 그 사이의 모든 정수의 합을 구합니다.");
    printf("a의 값: "); scanf("%d", &a);
    printf("b의 값: "); scanf("%d", &b);
    printf("a 와 b 를 포함한 그 사이의 모든 정수의 합은 %d. \n", sumof(a, b));
    return 0;
}