#include <stdio.h>
#include<string.h>
void main() 
{
	char a[100];
	int n,i,count=0;
	printf("enter the paragraph");
	scanf("%[^\t\n]s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
	   if(a[i]=='  ')
	    {
	        count++;
	    }
	}
	printf("%d",count);
}
