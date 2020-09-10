#include <stdio.h>

int main(void)
{
	int a, b, c;
	int max;
	
	printf("a를 입력하세요: "); scanf("%d", &a);
	printf("b를 입력하세요: "); scanf("%d", &b);
	printf("c를 입력하세요: "); scanf("%d", &c);
	
	max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	
	printf("최댓값은 %d 입니다. \n", max);
	return 0;
}
