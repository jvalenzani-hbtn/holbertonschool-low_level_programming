# include "holberton.h"


issize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	fd = open(*filename, O_RDONLY);
	if (fd == -1)
	{
	}
}
