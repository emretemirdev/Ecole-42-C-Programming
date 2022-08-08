#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char *text[10];

	text[0] = "O";
	text[1] = "M";
	text[2] = "E";
	text[3] = "R";
	text[4] = "M";
	text[5] = "E";
	text[6] = "R";
	text[7] = "\' - \'";
	text[8] = "İ";
	text[9] = "CLİ";

	printf("%s\n", ft_strjoin(10, text, " - "));
}
