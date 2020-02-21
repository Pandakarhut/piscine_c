#include <stdio.h>
int		is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0); //0 isn't power of 2. 2^0 = 1, 2^1 = 2, 4, 8, 16, 32 etc.
	
	while (n % 2 == 0)  //Okay, let's keep dividing by 2 and making sure there's no remainder. 16 becomes 8, then 8 becomes 4, then 4, 2, then 2, 1.
		n /= 2;
		
	if (n == 1) //If the last division we did was actually 2/2 = 1
		return 1; //Retun that it was a power of 2.
			
	return (0); //Wasn't a power of 2.
	
	//Example: Let's say the number is 56. First it will be divided by 2 on line 8, becomes 28, then 14, then 7, then 3 with remainder 1, so we stop at 7. 7 is not 1. So we return 0 (not power of 2).
}

int main()
{
	int i;
	i = 0;
	while(i <= 32)
	{
		printf("Check if %d is a power of 2: Result: %d\n", i, is_power_of_2(i));
		i++;
	}
	
	return 0;
}