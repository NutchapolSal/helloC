#include <stdio.h>
int main() {
	int a = 0;
	int b = 0;
	do {
		b += a;
		printf("enter a number : ");
		scanf("%d",&a);
	} while (0 < a);
	printf("summation = %d\n", b);
	return 0;
}
