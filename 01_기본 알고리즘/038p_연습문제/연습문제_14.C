#include <stdio.h>

int main(void)
{
    int side;
    int i, j;

    puts("사각형을 출력합니다.");
    printf("입력할 수: "); scanf("%d", &side);
    for (i = 0; i < side; i++)
    {
        for (j = 0; j < side; j++)
        {
            printf("*");
        }
        putchar('\n');
    }
    return 0;
}