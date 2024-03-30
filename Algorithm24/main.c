//정렬 프로그램 main
#include<stdio.h>
#include"mergeSort.h"//합병정렬 함수

	
void printArr(int list[]) {//배열 출력 함수
	int i;
	for (i = 0; i < LISTMAX-1; i++)
		printf("%d | ", list[i]);
	printf("%d\n", list[i]);
}
int main() {
	int arr[8] = { 37, 10, 22, 30, 35, 13, 25, 24 };//8개 입력 배열
	printArr(arr);//주어진 8개의 값을 출력
	divide(arr, 0, LISTMAX-1);//8개의 값을 합병정렬
	printArr(arr);//정렬된 후의 배열 ........................................................ ①1.2.1에서 사용

	return 0;
}