#include <stdio.h>

void modifyValue(int x) {
	x = 20;
}

void modifyValue(int b[]) {
	b[0] = 20;
}

int main()
{
	int a = 10;
	int arr[3] = { 1,2,3 };

	modifyValue(a);
	printf("값 : %d\n", a);

	modifyValue(arr);
	printf("주소값 : %d\n", arr[0]);

}