#include <stdio.h>
#include <string.h>
int ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char str1[] = "He";
	char str2[] = "Her";

   	ft_strcmp(str1, str2);	
  	printf("%d", ft_strcmp(str1, str2));
} 

