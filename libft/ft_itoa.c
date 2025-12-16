#include "libft.h"

static int	int_len(long n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		n = n * (-1);
		i++;
	}
	while (n > 0)
	{
		n = n/10;
		i++;
	}
	return (i);
}

static char	*convert_str(char *str, long l, int i)
{
	if (l == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (l < 0)
	{
		str[0] = '-';
		l = l * (-1);
	}
	while (l > 0)
	{
		str[i] = ((l % 10) + '0'); //or48
		l = l/10;
        i--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long		l;

	l = n;
	i = int_len(l);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if ((!str))
		return (NULL);
	str[i--] = '\0';
	return (convert_str(str, l, i));
}
