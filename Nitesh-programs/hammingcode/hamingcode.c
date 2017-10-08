#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{

    int c,a,i,j,k,r,n,a1[20],a2[20],b[10],a3[20],c1[10];
 int m,p,l,x,sum=0,ch;
    printf("enter length of message");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a1[i]);
    }
          for(r=0;r<7;r++)
          {
              a=pow(2,r);
             if(a-1>=n+r)
             {
                 break;
             }
        }
         printf("\n-------------------------------\n");
        printf("number of parity bits uses=%d",r);
        printf("\n");
         printf("-------------------------------\n");
        printf("message bits are\n\n");
        for(i=1;i<=n;i++)
        {
            printf("%d ",a1[i]);
        }

m=n+r;
j=0;
for(i=1;i<=m;i++)
{
    a=pow(2,j);
    if(i==a)
    {
        a2[i]=0;
        j++;
    }
   else
   {
   a2[i]=a1[n];
    n--;
   }

}
for(i=0;i<r;i++)
{
 a=pow(2,i);
 l=0;
 for(j=1;j<=m;j++)
 {
      c=j;
 for(k=0;k<r;k++)
    {
        b[k]=c%2;
        c=c/2;
    }
    if(b[i]==1)
    {
        a3[l]=a2[j];
        l++;
    }
 }
p=0;
for(k=0;k<l;k++)
{
    p+=a3[k];
}
if(p%2==0)
{
 a2[a]=0;
}
else
  a2[a]=1;

}
printf("\n-------------------------------");
printf("\nHamming code for the above message\n\n");
 for(i=m;i>=1;i--)
{
    printf("%d ",a2[i]);
}
 printf("\n-------------------------------");
printf("\n");
/*printf("\nenter the choice you want to alter the digit 1 for yes 0 for No ");
scanf("%d",&ch);
switch(ch)
{
    case 1:
printf("\n enter position where you want to alter the digit=");
scanf("%d",&l);
if(l>m | l<1)
{
    printf("\n position not found ");
}
else
{
for(i=1;i<=m;i++)
{
    if(i=l)
    {
        if(a2[i]==0)
        {
            a2[i]=1;
        }
        else
        {
            a2[i]=0;
        }
            break;
    }

}
printf("\nnew hamming code is=\n");
 for(i=m;i>=1;i--)
{
    printf("%d ",a2[i]);
}
x=0;
for(i=0;i<r;i++)
{
 a=pow(2,i);
 l=0;
 for(j=1;j<=m;j++)
 {
      c=j;
 for(k=0;k<r;k++)
    {
        b[k]=c%2;
        c=c/2;
    }
    if(b[i]==1)
    {
        a3[l]=a2[j];
        l++;
    }
 }
p=0;
for(k=0;k<l;k++)
{
    p+=a3[k];
}
if(p%2==0)
{
 c1[x]=0;
 x++;
}
else
{
  c1[x]=1;
  x++;
}
}
for(i=0;i<x;i++)
{
  sum=sum+(c1[i]*pow(2,i));
}
}
break;
    case 0:
        break;
    default :
        printf("\n wrong choice");
        break;

}
if(sum==0)
{
    printf("\n no error");
}
else
    printf("\nerror at position= %d ",sum);
*/
for(i=0;i<=m;i++)
{
    a1[i]=0;
}
printf("enter receiving code");
       for(i=m;i>=1;i--)
        {
           scanf("%d",&a1[i]);
        }
        for(i=m;i>=1;i--)
        {
            if(a2[i]!=a1[i])
            {
                sum++;
            }
        }
        if(sum>1)
        {
             printf("\n---------------------------------------------\n");
            printf("hamming code can not  detect more than 1 bit error");
             printf("\n--------------------------------------------\n");
        }
        else
        {
       x=0;
for(i=0;i<r;i++)
{
 a=pow(2,i);
 l=0;
 for(j=1;j<=m;j++)
 {
      c=j;
 for(k=0;k<r;k++)
    {
        b[k]=c%2;
        c=c/2;
    }
    if(b[i]==1)
    {
        a3[l]=a1[j];
        l++;
    }
 }
p=0;
for(k=0;k<l;k++)
{
    p+=a3[k];
}
if(p%2==0)
{
 c1[x]=0;
 x++;
}
else
{
  c1[x]=1;
  x++;
}
}
sum=0;
for(i=0;i<x;i++)
{
  sum=sum+(c1[i]*pow(2,i));
}
if(sum==0)
{
    printf("\n no error");
}
else
    printf("-------------------------------");
    printf("\nerror at position= %d\n",sum);
    printf("--------------------------------");
}
}

