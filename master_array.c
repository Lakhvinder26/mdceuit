#include"header.h"
#include"prototype.h"

char * master_array(int fd)
{	
	char ch;
	char *ma;
	int flag;
	int k;
	int i=0,l;
	ma = NULL;
	flag=0;
	printf("reading of the file begins\n");
for( k=0;k<20;k++)
//while(1)

{
	read(fd,&ch,1);

	
		if(ch == 10)
		{
			break;

		}

	printf("%c\n",ch);
		for(l=0;l<i;l++)
			
		{
			if(*(ma+l)==ch)
			{
				flag=1;
				break;
						
			}
		}
		if(flag==0)
			
		{ma=(char *) realloc(ma,i+1);
			 *(ma+i)=ch;
				i++;

		}	
		
				
		flag=0;

	printf("this is the master array%s\n",ma);
}

	*(ma+i)='\0';


return ma;
OUT:
return 0;
}
