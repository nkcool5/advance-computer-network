#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
   int a,b,c,d,i;
   int a1[8],b1[8],c1[8],d1[8];
   printf("first Octate ");
   scanf("%d",&a);
    printf("second Octate ");
   scanf("%d",&b);
    printf("third Octate ");
   scanf("%d",&c);
    printf("fourth Octate ");
   scanf("%d",&d);
   printf("\nyour ipv4 address is=%d.%d.%d.%d",a,b,c,d);
   printf("\n");
   if(a<=127)
   {
       printf("class A");

   }
    if(a>=128 && a<=191)
   {
       printf("class B");

   }
    if(a>=192 && a<=223)
   {
       printf("class C");

   }
    if(a>=224 && a<=239)
   {
       printf("class D");

   }
    if(a>=240 && a<=255)
   {
       printf("class E");

   }
   for(i=0;i<8;i++)
   {
       a1[i]=a%2;
       a=a/2;
   }
   for(i=0;i<8;i++)
   {
       b1[i]=b%2;
       b=b/2;
   }
   for(i=0;i<8;i++)
   {
       c1[i]=c%2;
       c=c/2;
   }
   for(i=0;i<8;i++)
   {
       d1[i]=d%2;
       d=d/2;
   }
   printf("\nyour binary representation:");
   for(i=7;i>=0;i--)
   {
       printf("%d",a1[i]);
   }
   printf(".");
 for(i=7;i>=0;i--)
   {
       printf("%d",b1[i]);
   }
    printf(".");
 for(i=7;i>=0;i--)
   {
       printf("%d",c1[i]);
   }
    printf(".");
 for(i=7;i>=0;i--)
   {
       printf("%d",d1[i]);
   }
}
