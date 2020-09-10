#include <stdio.h>

int min4(int a, int b, int c, int d)
{
	int min = a;
	min = (b < min) ? b : min;
	min = (c < min) ? c : min;
	min = (d < min) ? d : min;
	
	return min;
}

int main(void)
{
	int a, b, c, d;
	printf("네 수를 입력하세요: "); scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("제일 작은 수는 %d 입니다. \n", min4(a, b, c, d));
	
	return 0;
}
