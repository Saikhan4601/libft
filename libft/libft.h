#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h> //size_t
# include <stdlib.h> //malloc null
# include <unistd.h>
# include <stdio.h>


int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
size_t	ft_strlen(const char *str);

void	ft_bzero(void *s, size_t n);
void *ft_memset(void *a, int c, size_t len);

int	ft_atoi(const char *str);


#endif