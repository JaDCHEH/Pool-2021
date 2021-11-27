/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nextprime.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 18:06:45 by cjad              #+#    #+#             */
/*   Updated: 2021/07/04 18:20:35 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	return (1);
}

int nextprime(int	n)
{
	if (n <= 2 )
		return (2);
	while(prime(n) != 1)
		n++;
	return (n);
}

int	main()
{
	printf("%d",nextprime(123894543));
}
