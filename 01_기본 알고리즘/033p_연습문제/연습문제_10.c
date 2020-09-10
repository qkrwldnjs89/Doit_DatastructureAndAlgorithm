#include <stdio.h>

int main(void)
{
    int a, b;
    puts("b - a 를 구합니다.");
    do
    {
        puts("b 에 a 보다 큰 값을 입력하세요.");
        printf("a의 값: "); scanf("%d", &a);
        printf("b의 값: "); scanf("%d", &b);
    } while ( b <= a );
    printf("b - a 는 %d 입니다. \n", b - a);
    
    return 0;
}