#include <stdio.h>

int main(void)
{
    int no;
    printf("두자리 정수를 입력하세요 \n");
    do
    {
        printf("수는 "); scanf("%d", &no);
    } while (no < 10 || no > 99); // !(no >= 10 && no <= 99) 와 동치 가능 by 드모르간 법칙
    printf("변수 no의 값은 %d. \n", no);
    return 0;
}