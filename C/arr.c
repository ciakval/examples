#include <stdio.h>

enum x {
	A,
	B,
	C,
	D,
	E,
};

int main(void)
{
	int arr[] = {
		[C] = 10,
		[A] = 40,
		[E] = 60,
		20,
	};

	int s = sizeof(arr) / sizeof(arr[0]);

	printf("SIZE = %d\n", s);

	for (int i = 0; i < s; i++) {
		printf("VAL[%d] = %d\n", i, arr[i]);
	}
}
	
