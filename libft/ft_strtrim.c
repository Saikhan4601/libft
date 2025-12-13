#include "libft.h"

static int to_trim(const char *set, char c);
static char *new_str(const char *s1, size_t start, size_t end);

char *ft_strtrim(const char *s1, const char *set)
{
    int i;
    int j;
    
    i = 0;
    j = ft_strlen(s1) - 1;
    if (ft_strlen(s1) == 0)
        return (ft_strdup(""));
    while (to_trim(set, s1[i]))
        i++;
    while (to_trim(set, s1[j]))
        j--;
    return (new_str(s1, i, j - (i - 1)));
}

static char *new_str(const char *s1, size_t start, size_t len)
{
    char *str;
    size_t i;

    if (len <= 0 || start >= ft_strlen(s1))
        return (ft_strdup(""));

    str = ft_calloc(len + 1, sizeof(char));
    if (!str)
        return (NULL);
    i = 0;

    while (i < len)
    {
        str[i] = s1[start + i];
        i++;
    }
    return (str);
}

/* This helper function return 1 if the character c is part of the
 * set of characters to trim and 0 if it is not part of it
 */
static int to_trim(const char *set, char c)
{
    int i;
    
    i = 0;
    /* neg usgee buh set dr shalgana
     */
    while (set[i])
    {
        if (c == set[i])
            return (1);
        i++;
    }
    return (0);
}

// #include <stdlib.h>
// #include <unistd.h> 
// #include <stdio.h>  
// #include <string.h>
// int main(void)
// {
// 	char *s1;
// 	char *set;
//     char *trimmed_str;

//     // Test Case 1: Standard trimming

// 	s1 ="sdsdsdsdsdHello HUmansdsdsdsd";
// 	set = "sd";
//     trimmed_str = ft_strtrim(s1, set);
// 	printf("Test 1 Input: \"%s\" | Set: \"%s\"\n", s1, set);
// 	printf("Test 1 Result: \"%s\"\n", trimmed_str);
//     free(trimmed_str);
// 	return (0);
// }