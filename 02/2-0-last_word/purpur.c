#include <unistd.h>

int main(int argc, char **argv)
{
	int index; //Index of the first character of the last word.
	int i; //Iterator for looping through characters
	index = -1; //-1 means no words found.
	i = 0;
	
	if (argc == 2)
	{
		//Find out which index starts the last word. Set index to 0, then loop through the string and reset the index every time you find a character that's after whitespace.
		//Last value for index will be the beginning of the last word.
		while(argv[1][i])
		{
			if (argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				//We found a real character. 
				//If it's the first character. Set the index here.
				//If its not the first one, but has whitespace before it set the index here.
				//We need to check if it's the first character first in the condition, because if it is, we can't check i-1 (doesn't exist). 
				//If i is 0, it won't even try to check the rest of the condition
				if (i == 0 || argv[1][i-1] == ' ' || argv[1][i-1] == '\t')
				{
					index = i; //Set the index of the last word so far..
				}
			}
			i++;
		}
		
		//Okay we looped through the whole string and now index is the index of the last word. Just print the word.
		while(argv[1][index])
		{
			write(1, &(argv[1][index]), 1);
			index++;
		}
	}
	write(1, "\n", 1);
	return(0);
}