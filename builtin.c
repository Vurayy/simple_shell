#include "shell.h"

/**
 * _vsexit - exit to shell
 * @info: struct that contains potential argument 
 * Return: exits with the given exit status
 */
int_vsexit(info_t *info)
{
	int exittcheck;
	if (info->argv[1])
	{

