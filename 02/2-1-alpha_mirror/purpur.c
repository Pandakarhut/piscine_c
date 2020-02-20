#include <unistd.h>

int main(int ac, char **av)
{
	//We use this variable to set which character we want to print.
	char print;
	
	if (ac == 2)
	{
		//Loop all characters of the argument
		while(*av[1])
		{
			//Set character to print to the one we are looping at..
			print = *av[1];
			
			//If it's an alpha character then flip a->z, b->y etc.
			if (*av[1] >= 'A' && *av[1] <= 'Z')
				//A = 65, Z = 90, let's say we have E = 69 currently in loop.. We want V = 86 to be printed
				print = 'A' + ('Z' - *av[1]); 
			else if (*av[1] >= 'a' && *av[1] <= 'z')
				print = 'a' + ('z' - *av[1]);
			
			//Write the character to output
			write(1, &print, 1);
			
			//Advance pointer to next character
			av[1]++;
		}
	}
	write(1, "\n", 1);
	return(0);
}