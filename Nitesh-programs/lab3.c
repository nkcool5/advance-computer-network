#include<stdio.h>
static int available; 
void ProducerConsumer(int quantity)
{
int i,temp;
for(i=0;i<50000;i++)
{
temp=available;
temp=temp+quantity;
available=temp;
}
}
void main()
{
ProducerConsumer(1);
ProducerConsumer(-1);
printf("\n The Availability of item sare=%d", available);
}
