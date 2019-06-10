// mario.c: print out a half-pyramid between 1-23, as seen at the end of every level in SMB
//     ##
//    ###
//   ####
//  #####
// ######
#include <stdio.h>
int main()
{
	int height = 0;
	char st[1024];
	do
	{
		printf("Height: ");
		fgets(st, sizeof(st), stdin);
		sscanf(st, "%d", &height);
	}
	while (height < 1 || height > 23);
	for(int line = 0; line < height; line++)
	{
		for(int spaces = height - line; spaces > 1; spaces--)
		{
			printf(" ");
		}
		for(int hashes = 0; hashes < line + 2; hashes++)
		{
			printf("#");
		}
		printf("\n");
	}
	return 0;
}
