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


Q. ���� �Լ��� ���� �Լ����� ��ȿ�����̴�. �� ������?
	���� ���� ���� �� ���� �Լ��� �� �����ڸ� ���� ���ƾ� 4�� ������ ����������
	���� �Լ��� ��� 4�� ������ 9������ ������ ������ �Ӵ��� ���� �����ڱ��� �̿��� �ϱ� ������
	�������� ��ȿ�����̴�. 
