#include<iostream>
using namespace std;

//������� ��� ������ �������� �� �����
void vyvod(char c);

//������� ��� ������ �������� � �������
void stolb (int x, int y)
{
	int	i;
	int	j;

	if (y > 1)
	{
		j = 0;
		while (j < (y - 2))
		{
			vyvod('\n');
			vyvod('B');
			i = 0;
			while (i < (x - 2))
			{
				vyvod(' ');
				++i;
			}
			if (x > 1)
				vyvod('B');
			++j;
		}
	}
}

//������� ��� ������ �������� � ������/��������� �������
void niz(int x, int y)
{
	int	i;

	if (x > 0 && y > 1)
	{
		vyvod('\n');
		vyvod('A');
		i = 0;
		while (i < (x - 2))
		{
			vyvod('B');
			++i;
		}
		if (x > 1)
			vyvod('C');
	}
	if (x > 0 && y > 0)
		vyvod('\n');
}

//������� ��� ������ �������� � ������� �������
void rush(int x, int y)
{
	int	i;
	if (x > 0 && y > 0)
		vyvod('A');
	    i = 0;
	while (i < (x - 2) && y > 0)
	{
		vyvod('B');
		++i;
	}
	if (x > 1 && y > 0)
		vyvod('C');
	    stolb(x, y);
	    niz(x, y);
	    system("pause");
}
