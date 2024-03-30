#include<stdio.h>
#define LISTMAX 8

int tempstr[LISTMAX];	//�պ����� �߰� �迭

void conquer(int str[], int start, int mid, int end)	//�������� ������ �迭�� ���� ���Ͽ� ���Ľ�Ű�� �Լ�
{
	int tempindex = start;
	int cpA = start;
	int cpB = mid + 1;

	while (cpA <= mid && cpB <= end)
	{
		if (str[cpA] < str[cpB])
		{
			tempstr[tempindex++] = str[cpA++];
		}
		else {
			tempstr[tempindex++] = str[cpB++];
		}
	}

	while (cpA <= mid) {
		tempstr[tempindex++] = str[cpA++];
	}

	while (cpB <= end) {
		tempstr[tempindex++] = str[cpB++];
	}

	for (int i = start; i <= end; i++)
	{
		str[i] = tempstr[i];
	}
}

void divide(int str[], int start, int end)	//�պ������� �������� ������ �迭 ����� �ּҰ� �� ������ ��ͽ�Ű�� �Լ�
{
	int mid = (start + end) / 2;
	if (start < end)
	{
		divide(str, start, mid);
		divide(str, mid + 1, end);
		conquer(str, start, mid, end);
	}
}