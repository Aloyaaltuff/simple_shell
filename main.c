#include "shell.h"
/**
 * main - entrey point
 *
 * Return: 0
*/
int main(void)
{
	char cmd[130];

	while (1)
	{
		show_prompt();
		read_cmd(cmd, sizeof(cmd));
		excute_cmd(cmd);
	}
	return (0);
}
/**
 * show_prompt - function that show the show_prompt
 *
 * Return : nothing
*/
void show_prompt(void)
{
	sro_print("ourshell$$");
}
