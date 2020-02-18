int ft_atoi(char *str)
{
  int result;
  int negative;
  int i;
  
  result = 0;
  negative = 1;
  i = 0;
  while (str[i] <= 32)
    i++;
  if (str[i] == '-')
    negative = -1;
  if (str[i] == '+' || str[i] == '-')
    i++;
  while (str[i] >= '0' && str[i] <= '9')
  {
    result = result * 10;
    result += (int)str[i] - '0';
    i++;
  }
  return (result * negative);
}
