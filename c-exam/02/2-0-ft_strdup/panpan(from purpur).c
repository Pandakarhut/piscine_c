#include <stdlib.h>

char *ft_strdup(char *src)
{
  char *dup;
  int len;

  len = 0;
  while (src[len])
    len++;
  dup = malloc(sizeof(char) * (len + 1));
  if(!dup)
    return(NULL);
  len = 0;
  while (src[len])
  {
    dup[len] = src[len];
    len++;
  }
  dup[len] = '\0';
  return (dup);
}
