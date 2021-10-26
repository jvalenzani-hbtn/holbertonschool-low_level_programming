#include <stdlib.h>

int _strlen(char *str);

char *str_concat(char *s1, char *s2)
{
    
    int size_s1 = _strlen(s1);
    int size_s2 = _strlen(s2);
    int i, j;
    char *new_string = malloc(sizeof(char) * (size_s1+size_s2));
    if(!new_string)
    {
        return NULL; 
    }
    i = 0;
    while(i+1 < size_s1)
    {
        new_string[i] = s1[i];
        i++;
    }
    j = 0;
    while(j+1 < size_s2)
    {
        new_string[i] = s2[j];
        i++;
        j++;
    }
    return new_string;
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