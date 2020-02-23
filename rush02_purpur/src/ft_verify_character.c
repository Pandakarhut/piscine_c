#include <stdlib.h>

char *verify_character(char c, char *input)
{
	char *error_char;
	
	if (*input != 'X')
	{
		if (*input && *input == c)
			input++; //Move to next character on input
		else
		{
			error_char = malloc(sizeof(char));
			*error_char = 'X';
			return error_char;
		}
	}

	return(input);
}