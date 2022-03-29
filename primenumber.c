#include <stdio.h>

/*输出比n小的质数到txt文件*/
int main() {
	int i, j, k, n;
	FILE *fp = fopen("primenumber.txt", "wt+");
	printf("Input n: ");
	scanf("%d", &n);
	if (n >= 2) {
		fprintf(fp, "%20d", 2);
		k = 1;
		for (i = 3; i < n; i += 2) {
			for (j = 3; j < i; j += 2)
				if (i % j == 0)
					break;
			if (j == i) {
				fprintf(fp, "%20d", i);
				k++;
				if (k % 7 == 0)
					fprintf(fp, "\n"); /*每行7个质数*/
			}
		}
	} else
		fprintf(fp, "\n");
	fclose(fp);
	fflush(stdin);
	printf("\nPress any key to exit...");
	scanf("%c", &n);
	return 0;
}