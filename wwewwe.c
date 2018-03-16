#include <stdio.h>
#include<string.h>
void main()
{
   char s[200];
   int l,count=1,i;
   scanf("%s",s);
   l=strlen(s);
   for(i=0;i<l;i++)
   {
       if(s[i]=='.')
       {
       count++;
       printf("%d",count);
           
       }
       else
       {
       printf("%d",count);
       }
   }

 
}
