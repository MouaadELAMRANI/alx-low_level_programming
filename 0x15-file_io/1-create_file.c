#include "main.h"

/**
 * create_file - create file
 * @filename: char
 * @text_content: char
 * Return: 1 sucess,  -1 fail
 */

int create_file(const char *filename, char *text_content)
{
	int fdesc;
	int nletters;
	int rwr;

	if (!filename)
	{
		return (-1);
	}

	fdesc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fdesc == -1)
	{
		return (-1);
	}

	if (!text_content)
	{
		text_content = "";
	}

	for (nletters = 0; text_content[nletters]; nletters++)
	{
		rwr = write(fdesc, text_content, nletters);
		if (rwr == -1)
		{
			return (-1);
		}
	}

	close(fdesc);

	return (1);
}
