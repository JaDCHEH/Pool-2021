#include<unistd.h>
void	print(int	argc, char	**argv)
{
	int	p;
	int	a;
	
	a = 1;
	while (a < argc)
	{
		p = 0;
		while(argv[a][p] != '\0')
		{
			write(1, &argv[a][p], 1);
			p++;
		}
		write(1, "\n", 1);
		a++;
	}
}

int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(int	argc,char	**argv)
{
	int	a;
	char	*b;

	a = 1;
	if (argc > 1)
	{	
		while (a < argc - 1)
		{
			if (ft_strcmp(argv[a], argv[a + 1]) > 0)
			{
				b = argv[a];
				argv[a] = argv[a + 1];
				argv[a + 1] = b;
				a = 0;
			}
			a++;
		}
		print(argc, argv);
	}
	return (0);
}
