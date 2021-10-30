#include <stdio.h>
#include <string.h>

int trim(char s[])
{
	int n;

	for(n=strlen(s)-1;n>=0;n--)
		if(s[n]!=' '&&s[n]!='\t'&&s[n]!='\n')
			break;
	s[n+1]='\0';
	return n+1;
}

int main()
{
	char a[10];
	int i;
	for(i=0;i<=10;i++)
		a[i]='\0';
	scanf("%s",&a);
	printf("×ÖÊýÎª£º%d",trim(a));
}