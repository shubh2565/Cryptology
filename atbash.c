#include<conio.h>
#include<string.h>
#include<stdio.h>
int main()
{
	char a,pt[100],ct[100];
	int i,b;
	printf("Enter the plain text : ");
	gets(pt);
	for(i=0;pt[i]!='\0';i++)
	{
		if(pt[i]!=' ')
		{
		   if(islower(pt[i]))	
		   {
		   	   
		       if(pt[i]<110)
               { 	
                  b=pt[i]-97;
	              ct[i]=122-b;
	           }
		       else
               { 	
                  b=122-pt[i];
	              ct[i]=97+b;
	           }
	       }
	       else
	       {
		   	   
		       if(pt[i]<78)
               { 	
                  b=pt[i]-65;
	              ct[i]=90-b;
	           }
		       else
               { 	
                  b=90-pt[i];
	              ct[i]=65+b;
	           }
	       } 
	    } 
		  else
		  ct[i]=' ';
		  
    }
	printf("The cipher text is   : %s",ct);
	getch();
	return(0);
	
	
}
