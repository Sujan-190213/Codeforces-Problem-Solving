#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 gets(str);
 puts(strstr(str,"1111111")||strstr(str,"0000000")?"YES":"NO");
 return 0;
}
