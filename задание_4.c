#include <stdio.h>
int bt(int num, int bit);
int main(void)
{
	int num, bit;
	puts("enter an integer: ");
	scanf("%d", &num);
	puts("enter the bit you want to check: ");
	scanf("%d", &bit);
	printf("%d\r\n", bt(num, bit));
	return 0;
}
int bt(int num, int bit)
{
	int mask = 1;
	mask <<= bit;
	return(num & mask);
}