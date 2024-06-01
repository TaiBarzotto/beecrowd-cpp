#include <stdio.h>

int main(){
        int s,t,f;
        scanf("%d %d %d",&s,&t,&f);

        int hora= s+t+f;

        if (hora>24){
            hora-=24;
        }  
        if(hora<0){
            hora=24+hora;
        }

        printf("%d", hora);

        return 0;
}