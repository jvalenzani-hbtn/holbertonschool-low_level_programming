# include "holberton.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int ret = 0;
	unsigned int i = 0;
	
	if(b != NULL)
	{
		/* Loop through the string */
		for(i = 0; b[i] != '\0'; i++)
		{
			/* Shift right the result 1 bit 
			 * to make space for the next bit.
			 */
			ret <<= 1;
			/* If char is not 0 or 1
			 * return 0
			 */
			if (b[i] != '0' && b[i] != '1')
			{
				return (0);
			}
			/* If char is 1, add one to the result
			 * i.e. put the last bit (rightmost) in 1
			 */
			if (b[i] == '1')
			{
				ret += 1;
			}
		}
	}
	return (ret);
}
