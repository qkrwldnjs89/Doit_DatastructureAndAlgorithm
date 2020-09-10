#include <stdio.h>

int min3(int a, int b, int c)
{
	int min = a;
	min = (b < min) ? b : min;
	min = (c < min) ? c : min;
	
	return min;
}

int main(void)
{
	int a, b, c;
	printf("세 정수 입력: "); scanf("%d %d %d", &a, &b, &c);
	printf("제일 작은 수는 %d 입니다. \n", min3(a, b, c));
		
	return 0;
} 
