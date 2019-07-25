#ifndef __MYCOMMON__
#define __MYCOMMON__
 
#include "pthread.h"
#include "common.h"

volatile int counter = 0; 
int loops;
pthread_mutex_t puerta;
void *crear_puerta(){
        pthread_mutex_init(&puerta,NULL);
}
void *cerrar_puerta (){
        pthread_mutex_lock(&puerta);
}
void *abrir_puerta (){
        pthread_mutex_unlock(&puerta);
}
void *destruir_puerta (){
        pthread_mutex_destroy(&puerta);
}
void *worker(void *arg) {
    cerrar_puerta();
    int i;
    
    
    for (i = 0; i < loops; i++) {

        counter++;
    }
    
    abrir_puerta();
    return NULL;
}

int main(int argc, char *argv[]) {
    clock_t time1, time2;
    double secs;
    time1 = clock();
    time2 =clock();

    secs = (double)(time2 - time1) / CLOCKS_PER_SEC;

    printf(" el tiempo es: %f\n", secs);
     if (argc != 2) { 
        fprintf(stderr, "usage: threads <loops>\n"); 

    

        exit(1); 
  
    return 0;


    }
    crear_puerta();

    loops = atoi(argv[1]);
    pthread_t p1, p2;
    printf("Initial value : %d\n", counter);
    Pthread_create(&p1, NULL, worker, NULL);
    Pthread_create(&p2, NULL, worker, NULL);
    
    Pthread_join(p1, NULL);
    Pthread_join(p2, NULL);
    printf("Final value   : %d\n", counter);
    return 0;
    
    

    destruir_puerta();
    

    


}





#define puerta pthread_mutex_t // nuevo tipo de dato
#define crear_puerta(m) pthread_mutex_init(&m,NULL) // funcion para crear puerta
#define cerrar_puerta(m) pthread_mutex_lock(&m) // funcion para cerrar la puerta
#define abrir_puerta(m) pthread_mutex_unlock(&m) //funcion para abrir la puerta
#define destruir_puerta(m) pthread_mutex_destroy(&m) // funcion para destruir puerta



#endif
 	
