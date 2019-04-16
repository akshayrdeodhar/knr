#include <stdio.h>
#define MAXLENGTH 100

int reverse(char str[])
{
	int i = 0;
	// go to '\0'
	while (str[i++] != '\0');
	// there is XX at i now. '
	// \0' lies at i - 1
	// now reverse will cloe down between 0 and i - 2 
	
	int j = 0;

	i = i - 2;

	char container;

	while (i > j)
	{
		// the famous switcheroo
		container = str[i];
		str[i] = str[j];
		str[j] = container;
		++j;
		--i;
	}

	return 0;
}

int getline_new(char line[], int maxlen)
{
	int i = 0;
	int c;
	while ( i < maxlen - 1 && ((c = getchar()) != EOF) && c != '\n')
	{
		line[i++] = c;
	}
	if (c == '\n')
	{
		line[i++] = '\n';
	}
	line[i] = '\0';
	if (i == maxlen - 1)
	{
		while (((c = getchar()) != EOF) && c != '\n')
		{
			++i;
		}
		/* woakwoakwoakwoakwoak 
		 *
		 *
		 * */
		if (c == '\n')
		{
			++i;
		}
	}
	return i;
}

int main()
{
	char str1[MAXLENGTH];
	char longest[MAXLENGTH];
	int length;
	int max_till_now = 0;
	while ((length = getline_new(str1, MAXLENGTH)) != 0)
	{
		reverse (str1);	
		printf("%s",str1);
	}
	return 0;
}



	
