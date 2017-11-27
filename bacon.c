#include<conio.h>
#include<stdio.h>
#include<string.h>
int main()
{
	  char pt[50],ct[250],temp[5],code[6][4][6] = {
	{ "AAAAA" , "AABBA" , "ABBAA"  , "BAABA"  },
    { "AAAAB" , "AABBB" , "ABBAB"  , "BAABB"  },
    { "AAABA" , "ABAAA" , "ABBBA"  , "BABAA"  },
    { "AAABB" , "ABAAB" , "ABBBB"  , "BABAB"  },
    { "AABAA" , "ABABA" , "BAAAA"  , "BABBA"  },
    { "AABAB" , "ABABB" , "BAAAB"  , "BABBB"  }},
    c[6][4] = {
    { 'a' , 'g' , 'n' , 't' },
    { 'b' , 'h' , 'o' , 'u' },
    { 'c' , 'i' , 'p' , 'v' },
    { 'd' , 'k' , 'q' , 'w' },
    { 'e' , 'l' , 'r' , 'y' },
    { 'f' , 'm' , 's' , 'z' }};
    int i,j,k;
    printf("THE BACON'S CODING IS : \n\n");
    for(i=0;i<6;i++)
    {
    	for(j=0;j<4;j++)
    	printf("%c - %s	",c[i][j],code[i][j]);
    	printf("\n");
    }
    printf("\nenter the plain text : ");
    gets(pt);
    for(k=0;pt[k]!='\0';k++)
    {
      for(i=0;i<6;i++)
      {
    	for(j=0;j<4;j++)
    	{
    		if(pt[k]==c[i][j])
    		{
    			strcpy(temp,code[i][j]);
    			strcat(ct,temp);
    		}
    	}
      }
    }
    printf("the cipher text is   : %s",ct);
    getch();
    return(0);
}
