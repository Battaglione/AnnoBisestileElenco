#include <stdio.h>
#define MAX 1000
int main(){
    int anno, n, cont = 0;
    float bisestile1, bisestile2, bisestile3 = 0;
    do{
        printf("Quanti anni bisestili vuoi visualizzare (dal 1900)? (Massimo 1000)\n");
        scanf("%d", &n);
    }while(n < 0 || n > MAX);
    anno = 1900;
    for(cont = 0; cont < n; cont++){
        bisestile1 = anno % 4;
        bisestile2 = anno % 400;
        bisestile3 = anno % 100;

        if(bisestile3 == 0){
            anno++;
        }

        else{
            if(bisestile1 == 0 || bisestile2 == 0){
                printf("%d\n", anno);
                anno++;
                }
            }

        if(bisestile1 != 0 && bisestile2 != 0){
            anno++;
        }
    }
}