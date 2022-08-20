#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x[]={1,2,3,4,5};
   int temp,i,len;
   len=sizeof(x)/sizeof(x[0]);
   printf("original array :\t");
   for(i=0;i<len;i++)
   {
       printf("%d\t",x[i]);
   }
   printf("\n");
   for (i=0;i<len/2;i++)
   {
       temp=x[len-i-1];
       x[len-i-1]=x[i];
       x[i]=temp;
   }
printf("reverse of array :\t");
   for(i=0;i<len;i++)
   {
       printf("%d\t",x[i]);
   }
}
