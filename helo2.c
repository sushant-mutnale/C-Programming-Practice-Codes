#include <stdio.h>
#include <string.h>
void sus(char *string)
{
	int i, in = 0, index = 0;
	for (i = 0; i < strlen(string); i++)
	{
		if (string[i] == '<')
		{
			in = 0;
			continue;
		}
		else if (string[i] == '>')
		{
			in = 1;
			continue;
		}
		if (in == 1)
		{
			string[index] = string[i];
			index++;
		}
	}
	string[index] = '\0';

	while (string[0] == ' ')
	{
		int i;
		for (i = 0; i < strlen(string); i++)
		{

			string[i] = string[i + 1];
		}
	}
	while (string[strlen(string) - 1] == ' ')
	{
		string[strlen(string) - 1] = '\0';
	}
}
int main()
{
	printf("enter the html tag :");
	char string[30];
	scanf("%s",string);
	sus(string);
	printf("the paraser is ~%s~", string);

	return 0;
}

