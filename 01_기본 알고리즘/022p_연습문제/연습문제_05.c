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

int med3(int a, int b, int c)
{
	if ( (b >= a && c <= a) || (b <= a && c >= a) )
		return a;
	else if ( (a > b && c < b) || (a < b && c > b) )
		return b;	
	return c;
}


Q. 밑의 함수는 위의 함수보다 비효율적이다. 그 이유는?
	리턴 값을 정할 때 위의 함수는 비교 연산자를 통해 많아야 4번 연산을 진행하지만
	밑의 함수는 적어도 4번 많으면 9번까지 연산을 진행할 뿐더러 관계 연산자까지 이용을 하기 때문에
	비교적으로 비효율적이다. 
