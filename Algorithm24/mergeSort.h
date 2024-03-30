#include<stdio.h>
#define LISTMAX 8

int tempstr[LISTMAX];	//합병정렬 추가 배열

void conquer(int str[], int start, int mid, int end)	//논리적으로 나눠진 배열에 값을 비교하여 정렬시키는 함수
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

void divide(int str[], int start, int end)	//합병정렬의 시작이자 나눠진 배열 사이즈가 최소가 될 때까지 재귀시키는 함수
{
	int mid = (start + end) / 2;
	if (start < end)
	{
		divide(str, start, mid);
		divide(str, mid + 1, end);
		conquer(str, start, mid, end);
	}
}