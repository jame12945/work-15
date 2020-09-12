#include<iostream>
int n, i, j, k = 0, m = 0;
int card();
int card() {
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {
		i <= 5 ? k++ : k--;
		for (j = 1; j <= n; j++) {
			if (j <= 6 - k || j >= 4 + k)
				printf("*");
			else
				printf(" ");

		}
		printf("\n");


	}
	for (i = 1; i <= n; i++) {
		i <= 5 ? m++ : m--;
		for (j = 1; j <= n; j++) {
			if (j <= 6 - m || j >= 4 + m)
				printf("*");
			else
				printf(" ");

		}
		printf("\n");


	}

	return 0;
}
int main() {
	card();
}