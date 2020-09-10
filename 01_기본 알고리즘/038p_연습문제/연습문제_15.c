#include <stdio.h>

int main(void)
{
    int row, cal;
    int i, j;
    
    puts("직사각형을 출력합니다.");
    printf("높이: "); scanf("%d", &row);
    printf("너비: "); scanf("%d", &cal);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < cal; j++)
        {
            printf("*");
        }
        putchar('\n');
    }
    return 0;
}