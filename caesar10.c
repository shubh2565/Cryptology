#include<conio.h>
#include<string.h>
#include<stdio.h>
int main()
{
	char key[10],pt[100],ct[100];
	int i,j,a,b=0,c=0,key1[10];
	printf("enter the cipher text : ");
	gets(pt);
	printf("enter the key         : ");
	gets(key);
	for(i=0;key[i]!='\0';i++)
	key1[i]=key[i]-96;
	a=strlen(key);
	for(i=0;pt[i]!='\0';i++)
	{
		if(pt[i]!=' ')
		{
			b=(c+i)%a;
			if((pt[i]-key1[b])<97)
		    ct[i]=pt[i]-key1[b]+26;
		    else
		    ct[i]=pt[i]-key1[b];
	    }
		else
		{
			ct[i]=' ';
			c--;	
		}
	
    }
	printf("the plain text is     : %s",ct);
	getch();
	return(0);
	
	
}
