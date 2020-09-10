#include <stdio.h>

int main(void)
{
    int n;
    int m = 10, digit = 1;
    
    puts("n의 자릿수를 구합니다.");
    do
    {
        printf("양의 정수 n의 값: "); scanf("%d", &n);
    } while ( n <= 0 );
    
    while (n / m != 0)
    {
        digit++;
        m *= 10;
    }
    
    printf("%d는 %d자리입니다. \n", n, digit);
    return 0;
}