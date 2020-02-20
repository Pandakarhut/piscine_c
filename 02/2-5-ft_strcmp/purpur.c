#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	int index;
	index = 0;
	
	//Loop as long as character at index is the same on both strings.
	//Keep adding to the index. If at some point we get to the end of the string or the characters differ, stop counting.
	//Then return the difference of the ASCII code of the character found at that spot.
	while (*(s1+index) == *(s2+index) && *(s1+index) && *(s2+index))
		index++;
	
	return (*(s1+index) - *(s2+index));
}

int main()
{
	char message[13] = "Hello World!";
	char other[13] = "Hello World!";
	
	int difference = ft_strcmp(message, other);
	
	if (difference == 0)
	{
		printf("There was no difference with the strings!");
	}
	else
	{
		printf("Difference found.. The first different character was %d ASCII codes different on String2", difference);
	}
	return(0);
}