/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 09:09:53 by cjad              #+#    #+#             */
/*   Updated: 2021/07/11 13:48:18 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
int	ultimateL(int	size, char	**strs)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			j++;
			k++;
		}
		i++;
	}
	return (k);
}

void	addsep(char	*st, char	*sep, int	*pk)
{
	int	j;

	j = 0;
	while (sep[j] != '\0')
	{
		st[*pk] = sep[j];
		j++;
		*pk = *pk + 1;
	}
}

int	ultimatecat(int	size, char	*st, char	*sep, char	**strs)
{
	int	i;
	int	j;
	int	k;
	int	*pk;

	i = 0;
	k = 0;
	pk = &k;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			st[*pk] = strs[i][j];
			*pk = *pk + 1;
			j++;
			if (strs[i][j] == '\0' && i != (size - 1))
			{
				addsep(st, sep, pk);
			}
		}
		i++;
	}
	return (k);
}

char	*ft_strjoin(int	size, char **strs, char *sep)
{
	int		totall;
	int		sepl;
	char	*st;
	int		k;
	int		tot;

	totall = ultimateL(size, strs);
	sepl = 0;
	if (size >= 1)
	{
		while (sep[sepl] != '\0')
			sepl++;
		tot = totall + (sepl * (size - 1)) + 1;
		st = (char *) malloc (sizeof (char) * tot);
		k = ultimatecat(size, st, sep, strs);
		st[k] = '\0';
		return (st);
	}
	else
	{
		st = (char *) malloc(sizeof(char));
		st[0] = 0;
		return (st);
	}
}

int	main()
{
	char	*t[] ={"edddd", "", "lemon"};
	char	sep[]= " ";
	printf("%s", ft_strjoin(8, t, sep));
}
