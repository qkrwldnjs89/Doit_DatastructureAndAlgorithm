#include <stdio.h>

void triangleLB(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            putchar('*');
        }
        putchar('\n');
    }
}

void triangleLU(int n)
{
    int i, j;
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            putchar('*');
        }
        putchar('\n');
    }
}

void triangleRU(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j < i)
                putchar(' ');
            else
                putchar('*');
        }
        putchar('\n');
    }
}

void triangleRB(int n)
{
    int i, j;
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= n; j++)
        {
            if (i > j)
                putchar(' ');
            else
                putchar('*');
        }
        putchar('\n');
    }
}

int main(void)
{
    while (1)
    {
        int option, n;
        puts("직각삼각형 출력 옵션");
        printf("1. 왼쪽아래 직각 \n\
2. 왼쪽 위 직각 \n\
3. 오른쪽 위 직각 \n\
4. 오른쪽 아래 직각 \n\
5. 프로그램 종료 \n\
옵션 선택: "); 
        scanf("%d", &option);

        if (option == 1)
        {
            printf("몇 단? "); scanf("%d", &n);
            triangleLB(n);
        }
        else if (option == 2)
        {
            printf("몇 단? "); scanf("%d", &n);
            triangleLU(n);
        }
        else if (option == 3)
        {
            printf("몇 단? "); scanf("%d", &n);
            triangleRU(n);
        }
        else if (option == 4)
        {
            printf("몇 단? "); scanf("%d", &n);
            triangleRB(n);
        }
        else if (option == 5)
        {
            puts("프로그램 종료");
            return 0;
        }
        else
            puts("다시 입력하세요");
    }
    
    return 0;
}