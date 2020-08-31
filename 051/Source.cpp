#include <stdio.h>
int main() {
	int a;
	scanf_s("%d", &a);
	if (a == 0) {
		printf("zero");
	}
	else if (a > 0) {
		if (a % 2 == 0) {
			printf("Positive Even");
		}
		else if (a % 2 != 0) {
			printf("Positive Odd");
		}
	}
	else if (a < 0) {
		if (a % 2 == 0) {
			printf("Negative Even");
		}
		else if (a % 2 != 0) {
			printf("Negative Odd");
		}
	}
}