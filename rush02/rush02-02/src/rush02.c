/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamesser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 16:42:59 by mamesser          #+#    #+#             */
/*   Updated: 2020/02/09 16:58:48 by mamesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_verify_character.h"

char *ft_create_top_line2(int x, char *input)
{
	int a;

	a = 0;
	input = verify_character('A', input);
	while (a < x - 2)
	{
		input = verify_character('B', input);
		a++;
	}
	if (x > 1)
	{
		input = verify_character('A', input);
	}
	input = verify_character('\n', input);
	return(input);
}

char *ft_create_body_line2(int x, char *input)
{
	int a;

	a = 0;
	input = verify_character('B', input);
	while (a < x - 2)
	{
		input = verify_character(' ', input);
		a++;
	}
	if (x > 1)
	{
		input = verify_character('B', input);
	}
	input = verify_character('\n', input);
	return(input);
}

char *ft_create_bottom_line2(int x, char *input)
{
	int a;

	a = 0;
	input = verify_character('C', input);
	while (a < x - 2)
	{
		input = verify_character('B', input);
		a++;
	}
	if (x > 1)
	{
		input = verify_character('C', input);
	}
	input = verify_character('\n', input);
	return(input);
}

char *ft_rush02(int x, int y, char *input)
{
	int a;

	if (x > 0 && y > 0)
	{
		input = ft_create_top_line2(x, input);
		if (y > 1)
		{
			if (y > 2)
			{
				a = 0;
				while (a < y - 2)
				{
					input = ft_create_body_line2(x, input);
					a++;
				}
			}
			input = ft_create_bottom_line2(x, input);
		}
	}
	return(input);
}


int match_rush_02(char *input, int rows, int columns)
{
	//Okay we know how many rows and columns. Let's check if the rush00 print matches the input.
	char *ending;
	ending = ft_rush02(columns, rows, input);

	//If there are any non-matches, ending will point to a character X.
	//If we looped all the way to the end, the character shall be the input null terminator.
	if (*ending == '\0')
		return(1);
	
	return(0);
}