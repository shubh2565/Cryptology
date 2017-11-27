#include<conio.h>
#include<string.h>
#include<stdio.h>
int main()
{
	char a,pt[100],ct[100];
	int i,b;
	printf("Enter the plain text : ");
	gets(pt);
	printf("Enter the key        : ");
	scanf("%c",&a);
	if(islower(a))
	b=a-96;
	else
	b=a-64;
	for(i=0;pt[i]!='\0';i++)
	{
		if(pt[i]!=' ')
		{
			if(islower(pt[i]))
			{
			
			   if((pt[i]+b)>122)
		       ct[i]=pt[i]+b-26;
		       else
		       ct[i]=pt[i]+b;
		    }
		    else
		    {
		       if((pt[i]+b)>90)
		       ct[i]=pt[i]+b-26;
		       else
		       ct[i]=pt[i]+b;
		    }
	    }
		else
		ct[i]=' ';
    }
	printf("The cipher text is   : %s",ct);
	getch();
	return(0);
	
	
}
