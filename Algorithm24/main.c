//���� ���α׷� main
#include<stdio.h>
#include"mergeSort.h"//�պ����� �Լ�

	
void printArr(int list[]) {//�迭 ��� �Լ�
	int i;
	for (i = 0; i < LISTMAX-1; i++)
		printf("%d | ", list[i]);
	printf("%d\n", list[i]);
}
int main() {
	int arr[8] = { 37, 10, 22, 30, 35, 13, 25, 24 };//8�� �Է� �迭
	printArr(arr);//�־��� 8���� ���� ���
	divide(arr, 0, LISTMAX-1);//8���� ���� �պ�����
	printArr(arr);//���ĵ� ���� �迭 ........................................................ ��1.2.1���� ���

	return 0;
}