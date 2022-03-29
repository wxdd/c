#include <stdio.h>

/*�ֽ�������*/
int main() {
	int i, x;
	int IsPrimeNumber(int j);
	while(1){
	printf("Input x: ");
	scanf("%d", &x);
	if (x >= 4) {
		for (i = 2; i <= x / 2; i++)
			if ((IsPrimeNumber(i)) && (IsPrimeNumber(x - i)))
				printf("x=%d+%d\n", i, x - i);
	} else
		printf("This number is to small.\n");
	fflush(stdin);}
	return 0;
}

int IsPrimeNumber(int j) {
	int k;
	for (k = 2; k < j; k++)
		if (j % k == 0)
			break;
	if (k == j)
		return 1;
	else
		return 0;
}
