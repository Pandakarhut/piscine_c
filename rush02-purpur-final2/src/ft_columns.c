int ft_columns(char *str)
{
	int columns;
	columns = 0;

	while (str[columns] && str[columns] != '\n')
		columns++;

	return(columns);
}