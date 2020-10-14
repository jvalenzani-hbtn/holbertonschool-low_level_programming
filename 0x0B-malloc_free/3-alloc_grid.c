#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int **ret = NULL;
	int i;
	if(width == 0 || height == 0)
	{
		return (NULL);
	}
	ret = (int **)malloc(height * sizeof(int *));
	if (ret != NULL){
		for(i = 0; i < height; i++)
		{
			ret[i] = malloc(width * sizeof(int));
			if (ret[i] == NULL)
			{
				return (NULL);
			}
		}
	}
	if (ret == NULL)
	{
		return (NULL);
	}
	return (ret);
}