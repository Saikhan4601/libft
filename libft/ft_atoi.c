#include "libft.h"

/*
	DESCRIPTION :
	The function ft_atoi converts a string into an int.

	RETURN VALUE :
	The converted int.
*/


int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	making_integer;

	i = 0;
	sign = 1;
	making_integer = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		making_integer = (making_integer * 10) + (str[i] - 48);
		i++;
	}
	return (making_integer * sign);
}