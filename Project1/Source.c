#include<stdio.h>

void menu() {

    int opcao;

    printf("Bem-vindo. Que operacao deseja realizar?\n");
    printf(" \n");
    printf("1 - Registar um novo usuario.\n");
    printf("2 - Registar uma nova atividade.\n");
    printf("3 - Ver as atividades planeadas.\n");
    printf("4 - Seguidores.\n");
    printf("5 - Outros.\n");
    printf("6 - Hist�rico de informa��o introduzida.\n");




}



void main() {

    menu();

}

/*anota��es tiradas enquanto fui fazendo o menu:

Op��o 1 do menu: Ter uma fun��o para fazer as informa��es que v�o ser necess�rias para serem impressas
no ficheiro 1 que o prof pede.

Op��o 2 - Ao registar a atividade, rgegist�-la num tipo de hist�rico (necess�rio uma fun��o para isso)
para depois s� imprimir no segundo ficheiro que o professor pede. Tamb�m fazer uma fun��o para dar origem
�s informa��es do ficheiro 3.


Op��o 3 - Ter a fun��o com o calend�rio, para os pontos 4, 5, 6 e tudo o qiue inclua o utilizador ter de
colocar um certo per�odo de tempo.

Op��o 4 - Funcionalidade de seguir e ver seguidores. Fun��o que mostre quem podemos seguir e quem j�
seguimos.

Op��o 5 - Tudo o que � coisas para gerar mas que n�o tenham cenas diretamente relacionadas com as outras
op��es. Ter op��o do ponto 7 de ver as m�dias. Ter op��o tambem do ponto 8,10 e 11.

Op��o 6 - Fun��o que apanhe toda a informa��o inserida pelo utilizador, talvez separadas por categorias.
Ou seja, "Participantes" e "Atividades"

*/

void main()
{
    menu();
}