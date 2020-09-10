#include <stdio.h>

int main(void)
{
	int n;
	
	printf("정수를 입력: "); scanf("%d", &n);
	
	if (n > 0)
		puts("이 수는 양수입니다.");
	else if (n < 0)
		puts("이 수는 음수입니다.");
	else
		puts("이 수는 0입니다.");
	return 0;
}
