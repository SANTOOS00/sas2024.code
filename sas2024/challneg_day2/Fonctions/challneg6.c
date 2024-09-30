#include <stdio.h>

int	fibonacci(int n)
{
    int res;
	if (n < 0)
		return (-1);
	if (n < 2)
		return (n);
        res =(n - 2) + (n - 1);
        return (res);
}