#include "shell.h"


/**
 * sro_print - function to print shell
 * @prt : pointer to character
 * return: nothing
 */

void sro_print(const char *prt)
{
	write(STDOUT_FILENO, prt, strlen(prt));
}

