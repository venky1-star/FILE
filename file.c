#include<stdio.h>
main()
{
	FILE *fp;
	char ch;
	int i,pos;
	fp=fopen("input.txt","r");
	fseek(fp,0,SEEK_END);
	pos=ftell(fp);
	i=0;
	while(i<pos)
	{
		i++;
		fseek(fp,-i,SEEK_END);
		ch=fgetc(fp);
		printf("%c",ch);
	}
}
