int ft_atoi(char *str)
{
  int negative;
  int i;
  
  negative = 1;
  i = 0;
  while (*str == ' ' || *str == '\n' || *str == '\t' ||
            *str == '\r' || *str == '\f' || *str == '\v')
  {
    str++;
  }
  if (*str == '-')
    negative = -1;
  if (*str == '-' || *str == '+')
    str++;
  if (*str < 48 || *str > 57)
    return(0); 
  while (*str >= 48 && *str <= 57)
  {
    i = i * 10 + (*str - 48);
    str++;
  }
  return (i * negative);
}
