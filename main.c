#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define THREAD_QNTY  3
#define INDEX 100


int maximo;
int minimo;
double media;

int listagem_numeros[INDEX], qtd_numeros, i;



void *thread_minimo(){
	minimo = listagem_numeros[0];
	for (i=0; i<qtd_numeros; i++)
		if(minimo > listagem_numeros[i])
			minimo = listagem_numeros[i];
}

void *thread_maximo(){
	maximo = listagem_numeros[0];
        for (i=0; i<qtd_numeros; i++) 
                if(maximo < listagem_numeros[i])
                        maximo = listagem_numeros[i];
}

void *thread_media(){
	int somatorio = 0;
	for(i=0; i<=qtd_numeros;i++)
		somatorio+=listagem_numeros[i];
	media = somatorio/qtd_numeros;
}


int main(){
scanf("%d", &qtd_numeros);
for(i=0; i<qtd_numeros; i++)
	scanf("%d",&listagem_numeros[i]);

int thread_final;
pthread_t thd1;
pthread_t thd2;
pthread_t thd3;

thread_final= pthread_create(&thd1, NULL, &thread_media, NULL);
pthread_join(thd1,NULL);
thread_final= pthread_create(&thd2, NULL, &thread_minimo, NULL);
pthread_join(thd2,NULL);
thread_final= pthread_create(&thd3, NULL, &thread_maximo, NULL);
pthread_join(thd3,NULL);

printf("O valor medio eh %lf\n", media);
printf("O valor minimo eh %d\n", minimo);
printf("O valor maximo eh %d\n", maximo);

return 0;


}
