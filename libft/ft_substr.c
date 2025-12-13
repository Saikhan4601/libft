#include "libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len)
{
    size_t i;
    char *str;

    if (!s)
        return (NULL);
    /* hooson string butssah heregtei
     */
    if (start > ft_strlen(s))
        return (ft_strdup(""));
    /*"Bonjour?"
     * s bol B-gees ehlii geh ued
     * nemeh start genguut N-ees ehlej ugiin urtiig olno
     * s + start = 6 "njour?" */
    if (len > ft_strlen(s + start))
        len = ft_strlen(s + start);
    /* tegeed memory allocate hiine*/
    str = ft_calloc((len + 1) * sizeof(char));
    if (!str)
        return (NULL);
    i = 0;
    while (i < len)
    {
        str[i] = s[start + i];
        i++;
    }
    str[i] = '\0';
    return (str);
}