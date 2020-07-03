int ft_rows(char *str)
{
	int i;
	int rows;
	i = 0;
	rows = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			rows++;
		i++;
	}
	
	return(rows);
}