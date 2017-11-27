#include<conio.h>
#include<string.h>
#include<stdio.h>
int main()
{
	char key[100],pt[100],ct[100];
	int i,j,t,a,b=0,c=0,d=0,key1[100];
	printf("enter the plain text : ");
	gets(pt);
	printf("enter the key        : ");
	gets(key);
	t=strlen(key);
	for(i=0;pt[i]!='\0';i++)
	{
		if(pt[i]!=' ')
		key[t+i+d]=pt[i];
		else
		d--;
	}
	for(i=0;key[i]!='\0';i++)
	key1[i]=key[i]-96;
	a=strlen(pt);
	for(i=0;pt[i]!='\0';i++)
	{
		if(pt[i]!=' ')
		{
			b=(c+i)%a;
			if((pt[i]+key1[b])>122)
		    ct[i]=pt[i]+key1[b]-26;
		    else
		    ct[i]=pt[i]+key1[b];
	    }
		else
		{
			ct[i]=' ';
			c--;	
		}
	
    }
	printf("the cipher text is   : %s",ct);
	getch();
	return(0);
	
	
}
