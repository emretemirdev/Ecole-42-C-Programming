#include<stdio.h>

int    ft_strncmp(char *s1, char *s2, unsigned int n);
int main(void)
{

    char *str1;
    char *str2;
    int a;
    int n;
    n = 10;
    str1 = "Heslo";
    str2 = "Helo";
    a = ft_strncmp(str1, str2, n);
    printf("%d", a);
}
