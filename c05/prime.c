#include<stdio.h>
int	prime(int	n)
{
	int	i;
	int j;
	
	i = 2;
	j = n / 2;
	if ( n == 0 || n == 1)
		return (1);
	while(i < j)
	{
		if((n % i) == 0)
			return(0);
		i++;
	}
	return(1);
}

int	main()
{
	int a;

	a = 2100008441;	
	printf("%d",prime(a));
}
