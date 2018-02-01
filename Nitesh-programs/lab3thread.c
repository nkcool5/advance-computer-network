#include <pthread.h>
#include <stdio.h>

static long int available;
pthread_mutex_t lock;
void *ProducerConsumer(void *quantity)
{
pthread_mutex_lock(&lock);

int *quantity1=(int*)quantity;

long int i,temp;

pthread_t thId = pthread_self();
printf("\n thread id=%ld",thId);

for(i=0;i<5000000;i++)
{
temp=available;
temp=temp+*quantity1;
available=temp;
}
pthread_mutex_unlock(&lock);
//printf("\n The Availability of item sare=%d", available);
}

int main()
{
int x=1,y=-1;
if (pthread_mutex_init(&lock, NULL) != 0)
    {
        printf("\n mutex init failed\n");
        return 1;
    }
//printf("Before thread=%d",x);
//printf("Before thread=%d",y);
pthread_t thread;
pthread_t thread1;
pthread_create(&thread, NULL, ProducerConsumer, &x);
pthread_create(&thread1, NULL, ProducerConsumer, &y);
pthread_join(thread1, NULL);
pthread_join(thread, NULL);
pthread_mutex_destroy(&lock);
printf("\n The Availability of item sare=%ld", available);
return 0;
}
