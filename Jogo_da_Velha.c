#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void mapa();
char validador_opcao();
int retorna_linha(char a);
int retorna_coluna(char a);

int main(){

    char pos[3][3]= {
                        {' ',' ',' '},
                        {' ',' ',' '},
                        {' ',' ',' '}
                    };
    char opcao;
    int vitoria=0,i=0,j=0,loop=0,erro=0,empate=0;

    do{
        //Jogador 1
        do{ // Posicionamento no tabuleiro

            //Tabuleiro do Jogo da Velha!
            system("cls");
            printf("   Jogo da velha!\n\n");
            printf("\t%c|%c|%c\n", pos[0][0], pos[0][1], pos[0][2]);
            printf("\t%c|%c|%c\n", pos[1][0], pos[1][1], pos[1][2]);
            printf("\t%c|%c|%c\n", pos[2][0], pos[2][1], pos[2][2]);

            printf("\n");

            mapa();     //Mostra as posiçoes possiveis de jogar
            printf("Jogador 1!\n");
            opcao = validador_opcao();   //valida a opcao escolhida

            // Mostra o espaço que deseja jogar
            i = retorna_linha(opcao);
            j = retorna_coluna(opcao);
           
            //Verifica se o espaço ja foi ocupado alguma vez!
            if(pos[i][j] != ' '){
                erro = 1;        
            }else{
                pos[i][j] = 'x';
                erro = 0;
            }

        }while(erro != 0);

        //condicao de vitoria em linha
        for(i=0; i<3; i++){
            if((pos[i][0] == 'x') && (pos[i][1] == pos[i][0]) && (pos[i][1] == pos[i][2])){
                vitoria = 1;
            }
        }

        //condicao de vitoria em coluna
        for(i=0; i<3; i++){
            if((pos[0][i] == 'x') && (pos[1][i] == pos[0][i]) && (pos[1][i] == pos[2][i])){
                vitoria = 1;
            }
        }

        //condicao de vitoria diagonal principal
        if((pos[0][0] == 'x') && (pos[0][0] == pos[1][1]) && (pos[1][1] == pos[2][2])){
            vitoria = 1;
        }

        //condicao de vitoria diagonal secundaria
        if((pos[0][2] == 'x') && (pos[0][2] == pos[1][1]) && (pos[1][1] == pos[2][0])){
            vitoria = 1;
        }

        // Sai do loop infinito ao alcancar a condicao de vitoria
        if(vitoria == 1){
            break;
        }

        //condicao de empate
        empate++;
        if(empate == 5){
            break;
        }

        //Jogador 2
        do{ //Posicionamento no tabuleiro


            //Tabuleiro do Jogo da Velha!
            system("cls");
            printf("   Jogo da velha!\n\n");
            printf("\t%c|%c|%c\n", pos[0][0], pos[0][1], pos[0][2]);
            printf("\t%c|%c|%c\n", pos[1][0], pos[1][1], pos[1][2]);
            printf("\t%c|%c|%c\n", pos[2][0], pos[2][1], pos[2][2]);

            printf("\n");

            mapa();     //Mostra as posiçoes possiveis de jogar
            printf("Jogador 2!\n");
            opcao = validador_opcao();   //valida a opcao escolhida

            i = retorna_linha(opcao);
            j = retorna_coluna(opcao);

            //Verifica se o espaço ja foi ocupado alguma vez!
            if(pos[i][j] != ' '){
                erro = 1;        
            }else{
                pos[i][j] = 'o';
                erro = 0;
            }

        }while(erro != 0);

        //condicao de vitoria em linha
        for(i=0; i<3; i++){
            if((pos[i][0] == 'o') && (pos[i][1] == pos[i][0]) && (pos[i][1] == pos[i][2])){
                vitoria = 2;
            }
        }

        //condicao de vitoria em coluna
        for(i=0; i<3; i++){
            if((pos[0][i] == 'o') && (pos[1][i] == pos[0][i]) && (pos[1][i] == pos[2][i])){
                vitoria = 2;
            }
        }

        //condicao de vitoria diagonal principal
        if((pos[0][0] == 'o') && (pos[0][0] == pos[1][1]) && (pos[1][1] == pos[2][2])){
            vitoria = 2;
        }

        //condicao de vitoria diagonal secundaria
        if((pos[0][2] == 'o') && (pos[0][2] == pos[1][1]) && (pos[1][1] == pos[2][0])){
            vitoria = 2;
        }

        // Sai do loop infinito ao alcancar a condicao de vitoria
        if(vitoria == 2){
            break;
        }

    }while(loop != 1);

    //Resultado da Partida
    system("cls");
    printf("   Jogo da velha!\n\n");
    printf("\t%c|%c|%c\n", pos[0][0], pos[0][1], pos[0][2]);
    printf("\t%c|%c|%c\n", pos[1][0], pos[1][1], pos[1][2]);
    printf("\t%c|%c|%c\n", pos[2][0], pos[2][1], pos[2][2]);

    printf("\n");

    if(vitoria == 1){
        printf("Parabens o Jogador 1 ganhou!!\n");
    }else if(empate == 5){
        printf("O jogo empatou!!\n");
    }

    if(vitoria == 2){
        printf("Parabens o Jogador 2 ganhou!!\n");
    }


    return 0;
}

void mapa(){

    printf("MAPA!\n");
    printf("A|B|C\n");
    printf("D|E|F\n");
    printf("G|H|I\n");
    printf("\n");
}

char validador_opcao(){
    char opcao;

    do{
        printf("Qual posicao voce deseja posicionar? ");
        scanf(" %c", &opcao);
    }while((opcao!='A' && opcao!='a') && (opcao!= 'B' && opcao!='b') && (opcao!='C' && opcao!='c') && (opcao!='D' && opcao!='d') && (opcao!='E' && opcao!='e') && (opcao!='F' && opcao!='f') && (opcao!='G' && opcao!='g') && (opcao!='H' && opcao!='h') && (opcao!='I' && opcao!='i'));

    return opcao;
}

int retorna_linha(char a){
        int i=0;
        char b;
        b = toupper(a);
    switch (b)
            {
                case 'A' :
                    return i=0;
                    break;
            
                case 'B' :
                    return i=0;
                   break;

                case 'C' :
                    return i=0;
                    break;

                case 'D' :
                    return i=1;
                    break;

                case 'E' :
                    return i=1;
                    break;

                case 'F' :
                    return i=1;
                    break;

                case 'G' :
                    return i=2;
                    break;

                case 'H' :
                    return i=2;
                    break;

                case 'I' :
                    return i=2;
                    break;
            }
}

int retorna_coluna(char a){
        int j=0;
        char b;
        b = toupper(a);
    switch (b)
            {
                case 'A' :
                    return j=0;
                    break;
            
                case 'B' :
                    return j=1;
                   break;

                case 'C' :
                    return j=2;
                    break;

                case 'D' :
                    return j=0;
                    break;

                case 'E' :
                    return j=1;
                    break;

                case 'F' :
                    return j=2;
                    break;

                case 'G' :
                    return j=0;
                    break;

                case 'H' :
                    return j=1;
                    break;

                case 'I' :
                    return j=2;
                    break;
            }
}
