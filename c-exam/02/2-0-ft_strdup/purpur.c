#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*duplicate;
	int		length;
	
	length = 0;
	
	//Loop through every character in *src
	while (src[length])
		length++;
	
	duplicate = malloc(sizeof(char) * (length + 1));
	
	//If memory allocation failed or length+1 is 0
	//then malloc returned a null pointer. Can't duplicate str, return NULL
	if (!duplicate)
		return (NULL);
	
	//Loop through src again but this time copy characters to duplicate
	length = 0;
	while (src[length])
	{
		duplicate[length] = src[length];
		length++;
	}
	
	//Add null terminator to duplicate
	duplicate[length] = '\0';
	
	return (duplicate);
}

int main()
{
	//Create message Hello World!
	char message[13] = "Hello world!";
	
	//Use ft_strdup to duplicate message to a new string.
	//ft_strdup returns a pointer to a new string that's a duplicate of message.
	char *new = ft_strdup(message);
	
	//Print the new string
	printf("%s\n", new);
	return 0;
}