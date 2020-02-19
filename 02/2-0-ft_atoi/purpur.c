#include <stdio.h>

int	ft_atoi(char *s)
{
	int		sign;
	int		r;

	r = 0;
	sign = 1;
	
	//Remove all whitespace in front of number
	while (*s == 32 || (*s >= 9 && *s <= 13))
		s++;
	
	//If there's a minus sign, sign = -1. Else sign = 1 (already set).
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	
	while (*s >= '0' && *s <= '9')
	{
		r = r * 10 + *s - '0';
		s++;
	}
	return (sign * r);
}

int		main(void)
{
	char a[] = "    \n\n\v\f\r\t 	-5234AAAgreghrsth";// -5234
	printf("%d\n",ft_atoi(a));//
}