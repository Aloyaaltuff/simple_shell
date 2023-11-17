#include "shell.h"

/**
 * read_cmd - function read the command the user enter
 * @cmd: pointer to character
 * @size: size type parameter
 * Return:nothing
*/
void read_cmd(char *cmd, size_t size)
{
	if (fgets(cmd, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			sro_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			sro_print("error!!");
			exit(EXIT_FAILURE);
		}
	}
	cmd[strcspn(cmd, "\n")] = '\0';
}
