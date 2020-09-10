#include <stdio.h>

int max4(int a, int b, int c, int d)
{
	int max = a;
	max = (b > max) ? b : max;
	max = (c > max) ? c : max;
	max = (d > max) ? d : max;
	
	return max;
}
int main(void)
{
	int a, b, c, d; 
	printf("네 정수를 입력: "); scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("가장 큰 수는 %d 입니다. \n", max4(a, b, c, d));
	return 0;
}
