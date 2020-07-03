#include <unistd.h>

unsigned char	swap_bits(unsigned char octet)
{
	//Octet contains the binary code of given character ('t'). = 01110100
	//Perform an OR operation of two binary values:
	
	//octet >> 4 = 00000111 (Moved all bits 4 spots to the right)
	//octet << 4 = 01000000 (Moved all bits 4 spots to the left).
	
	//Return value is octet >> 4 OR octet << 4.
	//That becomes 00000111 OR 01000000.
	
	//Put them on top of each other:
	//00000111
	//01000000
	
	//Every spot where either bit is 1, will return one. Therefore:
	
	//     00000111
	//     01000000
	//OR   01000111    the | operator in the return call does this comparison and returns the result 01000111 = 71 = 'G'
	return ((octet >> 4) | (octet << 4));
}

int		main(void)
{
	char c;

	c = 't'; //Character t is ascii code 116 in binary is 01110100
	write(1, &c, 1); //Write character t.
	c = swap_bits(c); //Puts 4 first bits as last 4 bits, and last 4 bits as first 4 bits.
	write(1, &c, 1); //Write character that has binary 01000111. That is binary for ASCII code 71 = 'G'. So Print G
	return (0);
}