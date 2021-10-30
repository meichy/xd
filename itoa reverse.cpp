#include <stdio.h>
#include <string.h>
void reverse(char s[])  /*倒置字符串中各个字符的位置*/
{
	int i,j,c;

	for(i=0,j=strlen(s)-1;i<j;i++,j--){
		c=s[i];
		s[i]=s[j];
		s[j]=c;
	}
}

void itoa(int n,char s[])  /*数字转化成字符串*/
{
	int i,sign;
	if((sign=n)<0)
		n=-n;
	i=0;
	do{
		s[i++]=n%10+'0';
	}while((n/=10)>0);
	if (sign<0)
		s[i++]='-';
	s[i]='\0';
	reverse(s);
}


 int main()
{
	int a;
	char c[999];
	scanf("%d",&a);
    itoa(a,c);
	printf("数字转字符串为：%s",c);
	reverse(c);
	printf("反序为：%s",c);
}