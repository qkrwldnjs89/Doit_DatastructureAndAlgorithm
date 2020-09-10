#include <stdio.h>

int med3(int a, int b, int c)
{
	if (a >= b)
	{
		if (b >= c)
			return b;
		else if (a <= c)
			return a;
		else
			return c;
	}
	else if (a > c)
		return a;
	else if (b > c)
		return c;
	else
		return b;
}

int main(void)
{
	int a, b, c;
	printf("세 정수 입력: "); scanf("%d %d %d", &a, &b, &c);
	printf("중간값은 %d 입니다. \n", med3(a, b, c));
	return 0;
}
