#include<conio.h>
#include<string.h>
#include<stdio.h>


void ATBASH_ENCRYPT()
{
	char a,pt[100],ct[100];
	int i,b;
	fflush(stdin);
	printf("Enter the plain text: ");
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
}

int ATBASH_DECRYPT()
{
	char a,pt[100],ct[100];
	int i,b;
	fflush(stdin);
	printf("Enter the cipher text : ");
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
	printf("The plain text is   : %s",ct);	
}

void ATBASH()
{
	int choice3;
	printf("SELECT\n1.Encypt a message\n2.Decypt a message");
	scanf("%d", &choice3);
	printf("\n");
	if(choice3==1)
	ATBASH_ENCRYPT();
	else
	ATBASH_DECRYPT();
}


void AUTOKEY()
{
	char key[100],pt[100],ct[100];
	int i,j,t,a,b=0,c=0,d=0,key1[100];
	fflush(stdin);
	printf("\nEnter the plain text : ");
	gets(pt);
	printf("Enter the key        : ");
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
	printf("The cipher text is   : %s",ct);
}


void BACON()
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
    fflush(stdin);
    printf("\nTHE BACON'S CODING IS : \n\n");
    for(i=0;i<6;i++)
    {
    	for(j=0;j<4;j++)
    	printf("%c - %s	",c[i][j],code[i][j]);
    	printf("\n");
    }
    printf("\nEnter the plain text : ");
    gets(pt);
    fflush(stdin);
    for(k=0;pt[k]!='\0';k++)
    {
      fflush(stdin);	
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
    printf("The cipher text is   : %s",ct);
}


void CAESAR1_ENCRYPT()
{
	char a,pt[100],ct[100];
	int i,b;
	fflush(stdin);
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
}

void CAESAR1_DECRYPT()
{
	char a,pt[100],ct[100];
	int i,b;
	fflush(stdin);
	printf("Enter the cipher text : ");
	gets(pt);
	printf("Enter the key         : ");
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
			
			   if((pt[i]-b)<97)
		       ct[i]=pt[i]-b+26;
		       else
		       ct[i]=pt[i]-b;
		    }
		    else
		    {
		       if((pt[i]-b)<65)
		       ct[i]=pt[i]-b+26;
		       else
		       ct[i]=pt[i]-b;
		    }
	    }
		else
		ct[i]=' ';
    }
	printf("The plain text is     : %s",ct);	
}

void CAESAR1()
{
	int choice3;
	printf("SELECT\n1.Encypt a message\n2.Decypt a message");
	scanf("%d",&choice3);
	printf("\n");
	if(choice3==1)
	CAESAR1_ENCRYPT();
	else
	CAESAR1_DECRYPT();
}

void CAESAR2_ENCRYPT()
{
	char key[100],pt[100],ct[100];
	int i,j,a,b=0,c=0,key1[100];
	fflush(stdin);
	printf("Enter the plain text : ");
	gets(pt);
	printf("Enter the key        : ");
	gets(key);
	for(i=0;key[i]!='\0';i++)
	key1[i]=key[i]-96;
	a=strlen(key);
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
	printf("The cipher text is   : %s",ct);	
}

void CAESAR2_DECRYPT()
{
	char key[10],pt[100],ct[100];
	int i,j,a,b=0,c=0,key1[10];
	fflush(stdin);
	printf("Enter the cipher text : ");
	gets(pt);
	printf("Enter the key         : ");
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
	printf("The plain text is     : %s",ct);	
}

void CAESAR2()
{
	int choice3;
	printf("SELECT\n1.Encypt a message\n2.Decypt a message");
	scanf("%d",&choice3);
	printf("\n");
	if(choice3==1)
	CAESAR2_ENCRYPT();
	else
	CAESAR2_DECRYPT();
}


int check(char table[5][5],char k)
{
int i,j;
fflush(stdin);
for(i=0;i<5;++i)
for(j=0;j<5;++j)
{
if(table[i][j]==k)
return 0;
}
return 1;
}

void PLAYFAIR()
{
int i,j,key_len;
char table[5][5];
fflush(stdin);
for(i=0;i<5;++i)
for(j=0;j<5;++j)
table[i][j]='0';

printf("Playfair Cipher\n\n");

printf("Enter the length of the Key. ");
scanf("%d",&key_len);

char key[key_len];

printf("Enter the Key. ");
for(i=-1;i<key_len;++i)
{
scanf("%c",&key[i]);
if(key[i]=='j')
key[i]='i';
}

int flag;
int count=0;

// inserting the key into the table
for(i=0;i<5;++i)
{
for(j=0;j<5;++j)
{
flag=0;
while(flag!=1)
{
if(count>key_len)
goto l1;

flag=check(table,key[count]);
++count;
}// end of while
table[i][j]=key[(count-1)];
}// end of inner for
}// end of outer for


l1:printf("\n");

int val=97;
//inserting other alphabets
for(i=0;i<5;++i)
{
for(j=0;j<5;++j)
{
if(table[i][j]>=97 && table[i][j]<=123)
{}
else
{
flag=0;
while(flag!=1)
{
if('j'==(char)val)
++val;
flag=check(table,(char)val);
++val;
}// end of while
table[i][j]=(char)(val-1);
}//end of else
}// end of inner for
}// end of outer for

printf("The table is as follows:\n");
for(i=0;i<5;++i)
{
for(j=0;j<5;++j)
{
printf("%c ",table[i][j]);
}
printf("\n");
}

int l=0;
printf("\nEnter the length of plain text.(without spaces) ");
scanf("%d",&l);

printf("\nEnter the Plain text. ");
char p[l];
for(i=-1;i<l;++i)
{
scanf("%c",&p[i]);
}

for(i=-1;i<l;++i)
{
if(p[i]=='j')
p[i]='i';
}

printf("\nThe replaced text(j with i)");
for(i=-1;i<l;++i)
printf("%c ",p[i]);

count=0;
for(i=-1;i<l;++i)
{
if(p[i]==p[i+1])
count=count+1;
}

printf("\nThe cipher has to enter %d bogus char.It is either 'x' or 'z'\n",count);

int length=0;
if((l+count)%2!=0)
length=(l+count+1);
else
length=(l+count);


printf("\nValue of length is %d.\n",length);
char p1[length];

//inserting bogus characters.
char temp1;
int count1=0;
for(i=-1;i<l;++i)
{
p1[count1]=p[i];
if(p[i]==p[i+1])
{
count1=count1+1;
if(p[i]=='x')
p1[count1]='z';
else
p1[count1]='x';
}
count1=count1+1;
}

//checking for length

char bogus;
if((l+count)%2!=0)
{
if(p1[length-1]=='x')
p1[length]='z';
else
p1[length]='x';
}

printf("The final text is:");
for(i=0;i<=length;++i)
printf("%c ",p1[i]);

char cipher_text[length];
int r1,r2,c1,c2;
int k1;

for(k1=1;k1<=length;++k1)
{
for(i=0;i<5;++i)
{
for(j=0;j<5;++j)
{
if(table[i][j]==p1[k1])
{
r1=i;
c1=j;
}
else
if(table[i][j]==p1[k1+1])
{
r2=i;
c2=j;
}
}//end of for with j
}//end of for with i

if(r1==r2)
{
cipher_text[k1]=table[r1][(c1+1)%5];
cipher_text[k1+1]=table[r1][(c2+1)%5];
}

else
if(c1==c2)
{
cipher_text[k1]=table[(r1+1)%5][c1];
cipher_text[k1+1]=table[(r2+1)%5][c1];
}
else
{
cipher_text[k1]=table[r1][c2];
cipher_text[k1+1]=table[r2][c1];
}

k1=k1+1;
}//end of for with k1

printf("\n\nThe Cipher text is:\n ");
for(i=1;i<=length;++i)
printf("%c ",cipher_text[i]);
}


void ROT13_ENCRYPT()
{
	char pt[100],ct[100];
	int i,a=13;
	fflush(stdin);
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
	printf("The cipher text is   : %s",ct);	
}

void ROT13_DECRYPT()
{
	char pt[100],ct[100];
	int i,a=13;
	fflush(stdin);
	printf("Enter the cipher text : ");
	gets(pt);
	for(i=0;pt[i]!='\0';i++)
	{
		if(pt[i]!=' ')
		{
			if(islower(pt[i]))
			{
			
		    	if((pt[i]-a)<97)
		        ct[i]=pt[i]-a+26;
		        else
		        ct[i]=pt[i]-a;
		    }
		    else
		    {
		    	if((pt[i]-a)<65)
		        ct[i]=pt[i]-a+26;
		        else
		        ct[i]=pt[i]-a;
		    }
	    }
		else
		ct[i]=' ';
    }
	printf("The plain text is     : %s",ct);	
}

void ROT13()
{
	int choice3;
	printf("SELECT\n1.Encypt a message\n2.Decypt a message");
	scanf("%d",&choice3);
	printf("\n");
	if(choice3==1)
	ROT13_ENCRYPT();
	else
	ROT13_DECRYPT();
}



int main()
{
	int choice1;
	char choice2;
	do
	{
		printf("\nMENU\n\n1.ATBASH CIPHER\n2.AUTOKEY CIPHER\n3.BACON CIPHER\n4.CAESAR CIPHER TYPE-1\n5.CAESAR CIPHER TYPE-2\n6.PLAYFAIR CIPHER\n7.ROT 13 CIPHER");
		scanf("%d",&choice1);
		printf("\n");
		switch(choice1)
		{
			case 1:ATBASH();
			       break;
			case 2:AUTOKEY();
			       break;
			case 3:BACON();
			       break;
			case 4:CAESAR1();
			       break;
			case 5:CAESAR2();
			       break;
			case 6:PLAYFAIR();
			       break;
			case 7:ROT13();
			       break;
			default:printf("WRONG ENTRY!");	
		}
		printf("\n\nDO YOU WANT TO CONTINUE?");
		scanf(" %c",&choice2);
	}
	while(choice2=='y'||choice2=='Y');
	return 0;
}
