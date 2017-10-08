#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10];
    int b[10];
    int i,j,n,s;//n=number of words and s=size of word
    int checkparity=0;
    printf("Enter number of words=");
    scanf("%d",&n);
    printf("enter size of word=");
    scanf("%d",&s);
    for(i=0;i<n;i++)//scan the value of words like in our example word1 is 1101011
    {
        printf("enter word | ");
        for(j=0;j<s;j++)
        {
            scanf("%d",&a[i][j]);

        }

    }

 for(i=0;i<s;i++)
    {
        checkparity=0;
        for(j=0;j<n;j++)
        {
         checkparity=checkparity+a[j][i];

        }
     if(checkparity%2==0)
     {
        b[i]=0;
     }
     else
        {
        b[i]=1;
        }
    }
    printf("even parity lrc=");
    for(i=0;i<s;i++)//print lrc
    {
        printf("%d",b[i]);
    }
checkparity=0;
printf("\neven parity vrc =");
for(i=0;i<s;i++)//for check parity
{

    checkparity+=b[i];

}
if(checkparity%2==0)//if even
    {
        b[s]=0;
    }
    else
    {
        b[s]=1;
    }
    for(i=0;i<=s;i++) // add extra bit for vrc to check even parity if number of 1's is even in lrc then add 0 else add 1
{

    printf("%d",b[i]);

}
}
