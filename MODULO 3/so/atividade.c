#include<stdio.h>
#include<pthread.h>
#include<sys/types.h>
#include<unistd.h>

int i;
int soma = 0;

void *executar(void *tid);
void *intruso();

int main(void)
{
  pthread_t threads[10];
  pthread_t thr2; //thread intrusa

  printf("Thread principal\n");

  while(soma<50)
  {
    for(i=0;i<10;i++)
    {
      pthread_create(&threads[i],NULL,executar,(void*)i);
    }
  
  
    pthread_create(&thr2,NULL,intruso,NULL);

    printf("Sincronizando as threads com a thread main\n");
    for(i=0;i<10;i++)
    {
      pthread_join(threads[i],NULL);
    }
  }

  printf("Thread principal Terminando\n");
  return 0;
}

void *executar(void *tid)
{
  printf("ThreadID: %d. A soma eh: %d\n",tid,soma); //esse tid eh o numero do seu processo da thread
  soma =soma+1;
}

void *intruso()
{
  printf("Thread Intruso: A soma antes: %d\n",soma);
  soma = 0;
  printf("Thread Intruso: A soma depois: %d\n",soma);
}