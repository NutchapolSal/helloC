#include <stdio.h>
int main() {
	int a = 0;
	int b = 0;
	int count = -1;
	do {
		b += a;
		count++;
		printf("enter a number : ");
		scanf("%d",&a);
	} while (0 < a);
	if (count == 0) {
		printf("you entered no numbers! :(\n");
	} else {
		printf("summation = %d\n", b);
		printf("average = %f\n", b / (double) count);
	}
	return 0;
}
