#include<stdio.h>
int main()
{
	int i,j,s=0,p=4,k,s2=2,p2=2;
	for(i=1;i<=7;i++)
	{
		if(i<=4)
		{
			for(k=0;k<s;k++)
		    printf(" ");
		    for(j=1;j<=p;j++)
		    printf("* ");
		    p--;
		    s++;
		    printf("\n");
		}
		else
		{
			for(k=0;k<s2;k++)
			printf(" ");
			for(j=1;j<=p2;j++)
			printf("* ");
			s2--;
			p2++;
			printf("\n");
		}	
	}
}
