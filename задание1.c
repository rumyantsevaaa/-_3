#include <stdio.h>
int bt(char *pbin);
int main(void)
{
	char *pbin = "01001001";
	printf("%s is %d\r\n", pbin, bt(pbin));
	return 0;
}
int bt(char *pbin)
{
	int c = 0;
	while (*pbin != '\0')
		c = (c << 1) + *pbin++ - '0';
	return c;
}