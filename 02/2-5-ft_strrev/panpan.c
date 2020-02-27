char *ft_strrev(char *str)
{
  int i;
  int j;
  char tmp;
  
  i = 0;
  while (s[i])
    i++;
  i--;
  j = 0;
  while (j < i)
  {
    tmp = s[i];
    s[i] = s[j];
    s[j] = tmp;
    i--;
    j++;
  }
  return (str);
}
