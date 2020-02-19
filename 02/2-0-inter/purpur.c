#include <unistd.h>

int main(int argc, char **argv)
{
	//Create an ascii table that holds every possible character. 0 = not printed yet, 1 = already printed.
	int characters[256] = {}; //If norme doesn't like this, you can just while loop through the array and set everything to 0.
	int i;
	int j;
	i = 0;
	j = 0;
	
	//Loop through first argument and print characters that also exist in second argument. Add to characters so they are only printed once.
	while(argc == 3 && argv[1][i])
	{
		//Loop through argv[2] to see if this character is also in the second argument
		while(argv[2][j])
		{
			//If the character is also found in the second argument, print it and mark it as printed to the characters array.
			if(argv[1][i] == argv[2][j] && characters[argv[1][i]] != 1)
			{
				write(1, &(argv[1][i]), 1);
				
				//Mark the character ASCII code as printed in the characters array.
				characters[argv[1][i]] = 1;
			}
			j++;
		}
		j=0;
		i++;
	}
	
	write(1, "\n", 1);
	return(0);
}