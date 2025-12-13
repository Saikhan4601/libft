#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
    char *join;
    int i;
    int j;
    
    i = 0;
    j = 0;
    /* heregtei hemjeenii memory beldene*/
    join = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
    if (!join)
        return (NULL);
    while (s1[i])
        join[j++] = s1[i++];
    /*i-iig noil nolgohgui bol s2-iig ehnees n copydohgui*/
    i = 0;
    while (s2[i])
        join[j++] = s2[i++];
    join[j] = '\0';
    return (join);
}