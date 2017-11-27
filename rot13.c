#include<conio.h>
#include<string.h>
#include<stdio.h>
int main()
{
	char pt[100],ct[100];
	int i,a=13;
	printf("Enter the plain text : ");
	gets(pt);
	for(i=0;pt[i]!='\0';i++)
	{
		if(pt[i]!=' ')
		{
			if(islower(pt[i]))
			{
			
		    	if((pt[i]+a)>122)
		        ct[i]=pt[i]+a-26;
		        else
		        ct[i]=pt[i]+a;
		    }
		    else
		    {
		    	if((pt[i]+a)>90)
		        ct[i]=pt[i]+a-26;
		        else
		        ct[i]=pt[i]+a;
		    }
	    }
		else
		ct[i]=' ';
    }
	printf("The cipher text is after using ROT13 cipher is  : %s",ct);
	getch();
	return(0);
	
	
}
