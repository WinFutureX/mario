// mario.c: print out a half-pyramid between 1-23, as seen at the end of every level in SMB
#include <stdio.h>
int main()
{
	int height = 0;
	char term;			// trick to check enter key
	printf ("Height: ");
	if (scanf ("%d%c", &height, &term) != 2 || term != '\n' || height < 0 || height > 23)
	{
		printf ("Invalid value.\n");
		printf ("Valid values are between 1 and 23.\n");
		return 1;
	}
	else
	{
		#ifndef _WIN32
		printf("\n");
		#endif
		for (int line = 0; line < height; line++)
		{
			for (int spaces = height - line; spaces > 1; spaces--)
			{
				printf (" ");
			}
			for (int hashes = 0; hashes < line + 1; hashes++)
			{
				printf ("#");
			}
		printf ("\n");
	}
	#ifndef _WIN32
	printf("\n");
	#endif
	return 0;
	}
}
