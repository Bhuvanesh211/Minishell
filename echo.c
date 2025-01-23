#include "main.h"

void echo(char *input_string,int status)
{
	//echo $? -> how the previous command got 
	if(strncmp("echo $?", input_string,7) == 0)
	{
		printf("%d\n",status);
	}
 	//echo $$ --> PID of the minishell project 
	if(strncmp("echo $$", input_string,7) == 0)
	{
		printf("%d\n",getpid());
	}
	//echo $SHELL ->print the executable path of minishell project
	if(strncmp("echo $SHELL", input_string, 11) == 0)
	{	
		system("pwd");	
	}
}
