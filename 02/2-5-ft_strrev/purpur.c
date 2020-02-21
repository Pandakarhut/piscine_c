char	*ft_strrev(char *s)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	while (s[i])
		i++; //Loop first string and count characters
	i--; //Minus null terminator
	j = 0; //Start of the string (i is still at end of string).
	while (j < i) //Loop until j also reaches the end
	{
		//For every character in string s, first store the last ones in temp
		tmp = s[i];
		
		//THen set the last one (or second to last etc.) to be the first one (or second one etc.).
		s[i] = s[j];
		
		//Then set the first one to be temp (which is now the last one s[i]).
		s[j] = tmp;
		
		//Now move the last iterator i closer to beginning
		i--;
		
		//Move first iterator j closer to ending.
		j++;
		
		//THis way we loop through the whole string, ending up with a reversed stirng
	}
	return (s);
}
