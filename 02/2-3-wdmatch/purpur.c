#include <unistd.h>

void	wdmatch(char *s1, char *s2)
{
	//We will figure out if we can write the whole first string only using characters from the second string, in the right order.
	int len = 0; //Length 
	int i = 0;

	//If we find all characters of s1 in s2 in the right order, we print them all. Otherwise we print nothing.
	//Let's first find out the length of s1. then find out how many matches we have in s2.

	while (s1[len])
		len++; //Figure out length of s1 by looping to the end of it.
	
	while (*s2 && i < len) //Now let's loop through s2 and use i as the counter of how many matches we have.
	{
		if (*s2 == s1[i])
			i++; //We found a matching character on s2. Move to the next character on s1 (i++)
		
		s2++; //Move to the next character on s2 anyway, even if it didn't match s1.
	}
	
	//Now we have the matching character count in i, and string length in len.
	//If the length is the same as matching characters we found, we know we found them all.
	if (i == len)
		write(1, s1, len); //Write the string entirely.
}

int		main(int ac, char **av)
{
	//Check that there are 3 arguments (program name, first string, second string)
	if (ac == 3)
		wdmatch(av[1], av[2]); //Call wodmatch for first and second string
	write(1, "\n", 1); //Write newline
	return (0);
}