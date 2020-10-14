#include <stdio.h>
#include <stdlib.h>

int _strlen(char *str);

char *_strdup(char *str)
{
	char *dup = NULL;
	int i, len;
	if (str == NULL)
	{
		return (dup);
	}
	len = _strlen(str);
	dup = (char*)malloc(len);
	if (dup != NULL){
		for (i = 0; i < len; i++)
		{
			dup[i] = str[i];
		}
	}
	return (dup);
}

int _strlen(char *str)
{
	int len = 0;
	while(*str){
		str++;
		len++;
	}
	return (len+1);
}