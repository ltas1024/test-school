#include <stdio.h>
int main(void)
{
	int arr1[] = { 1, 2, 3 };
	int arr2[] = { 4, 5, 6 };
	int arr3[] = { 7, 8, 9 };
	int* arr[] = { arr1, arr2, arr3 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}