#include <stdio.h>

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    char ped = 'e';
    char pap = 'a';
    char ata = 't';

    for (int i=0;i<n;i++){
        
        char j1[10];
        char j2[10];
        scanf("%s %s",&j1,&j2);
        
        if ((j1[1]==ata&&j2[1]==pap)||(j1[1]==ata&&j2[1]==ped)||(j1[1]==ped&&j2[1]==pap)){
            printf("Jogador 1 venceu\n");
        }
        else if ((j2[1]==ata&&j1[1]==pap)||(j2[1]==ata&&j1[1]==ped)||(j2[1]==ped&&j1[1]==pap)){
            printf("Jogador 2 venceu\n");
        }
        else if ((j1[1]==pap&&j2[1]==pap)){
            printf("Ambos venceram\n");
        }
        else if ((j1[1]==ped&&j2[1]==ped)){
            printf("Sem ganhador\n");
        }
        else if ((j1[1]==ata&&j2[1]==ata)){
            printf("Aniquilacao mutua\n");
        }
    }
    return 0;
}