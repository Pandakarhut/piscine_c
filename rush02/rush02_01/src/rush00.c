#include "ft_verify_character.h"
#include <stdlib.h>

char *ft_create_frame_line(int x, char *input)
{
	int a;

	a = 0;
	input = verify_character('o', input);
	while (a < x - 2)
	{
		input = verify_character('-', input);
		a++;
	}
	if (x > 1)
	{
		input = verify_character('o', input);
	}
	input = verify_character('\n', input);
	return(input);
}

char *ft_create_body_line(int x, char *input)
{
	int a;

	a = 0;
	input = verify_character('|', input);
	while (a < x - 2)
	{
		input = verify_character(' ', input);	
		a++;
	}
	if (x > 1)
	{
		input = verify_character('|', input);
	}
	input = verify_character('\n', input);
	return(input);
}

char *ft_rush(int x, int y, char *input)
{
	int a;

	a = 0;
	if (x > 0 && y > 0)
	{
		input = ft_create_frame_line(x, input);
		if (y > 1)
		{
			if (y > 2)
			{
				while (a < y - 2)
				{
					input = ft_create_body_line(x, input);
					a++;
				}
			}
			input = ft_create_frame_line(x, input);
		}
	}
	return(input);
}

int match_rush_00(char *input, int rows, int columns)
{
	//Okay we know how many rows and columns. Let's check if the rush00 print matches the input.
	char *ending;
	ending = ft_rush(columns, rows, input);

	//If there are any non-matches, ending will point to a character X.
	//If we looped all the way to the end, the character shall be the input null terminator.
	if (*ending == '\0')
		return(1);
	
	return(0);
}
