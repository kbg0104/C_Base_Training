#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int arry[10000] = {0};
	for (int i = 0; i < n; i++) {
		scanf("%d", &arry[i]);
	}
	for (int i = n-1; i >= 0; i--) {
		printf("%d ", arry[i]);
	}

}