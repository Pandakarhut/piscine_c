char *ft_strrev(char *str)
{
  int i;
  int j;
  char tmp;
  
  i = 0;
  while (str[i])
    i++;
  i--;
  j = 0;
  while (j < i)
  {
    tmp = str[i];
    str[i] = str[j];
    str[j] = tmp;
    i--;
    j++;
  }
  return (str);
}
