#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

/*
    Grupo: 3 Integrantes
    Construa uma Pokédex utilizando linguagem em C e arquivos, para cadastrar e listar os Pokémons capturados.

    Requisitos básicos:
        • Realizar cadastro de um novo Pokémon capturado;
        • Exibir a listagem dos Pokémons registrados na Pokédex;
        • Um Pokémon ao ser cadastrado deve receber um identificador único (Código sem repetição e sequencial);
        • Cada Pokémon possui seus dados como nome, tipo... e atributos como ataque, defesa entre outros. Os
          mesmos devem ser tratados com Structs(Pokémon->Atributos);
        • Você deve armazenar no mínimo 8 dados de cada Pokémon, e entre eles deve ser armazenada a data e hora
          que o Pokémon foi registrado na Pokédex, esse dado deve ser inserido automaticamente com auxílio da
          biblioteca <time.h>;
        • O software deve exibir o nome completo dos 3 integrantes na tela inicial;
        • Todos os possíveis erros devem ser tratados;
        • A Pokédex deve ser funcional e deixar bem claro para o usuário sua forma de manipulação.

    Critérios de avaliação
        • (2 Pontos) Cadastro de Pokémon;
        • (2 Pontos) Listagem de Pokémon;
        • (2 Pontos) Utilização de recursos:
            o Struct;
            o File;
            o Time;
        • (6 Pontos) Critérios técnicos:
            o Lógica de programação;
            o Utilização de recursos (Memória e Processamento);
            o Tratamento de erros;
        • (3 Pontos) Usabilidade e criatividade:
*/

typedef struct Atributos
{
    int hp;
    int atk;
    int sp_atk;
    int def;
    int sp_def;
    int speed;
} atributos;

typedef struct Pokemon
{
    char nome[15];
    char tipo[15];
    atributos atributos;
} pokemon;

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    pokemon pkm;
    int aux_menu = NULL;
    int contador = 0;

    do
    {
        system("cls");
        printf("\n");

        printf("[1] - Cadastrar novo pokemon\n");
        printf("[2] - Listar pokemons cadastrados\n");
        printf("[3] - Sair\n");

        scanf("%d%*c", &aux_menu);
        switch (aux_menu)
        {
        case 1:
            system("cls");
            printf("Digite o nome do pokemon: ");
            fgets(pkm.nome, 15, stdin);

            printf("Digite o tipo do pokemon: ");
            fgets(pkm.tipo, 15, stdin);

            printf("Digite o HP do pokemon: ");
            scanf("%d%*c", &pkm.atributos.hp);

            printf("Digite o ataque do pokemon: ");
            scanf("%d%*c", &pkm.atributos.atk);

            printf("Digite o ataque especial do pokemon: ");
            scanf("%d%*c", &pkm.atributos.sp_atk);

            printf("Digite a defesa do pokemon: ");
            scanf("%d%*c", &pkm.atributos.def);

            printf("Digite a defesa especial do pokemon: ");
            scanf("%d%*c", &pkm.atributos.sp_def);

            printf("Digite a velocidade do pokemon: ");
            scanf("%d%*c", &pkm.atributos.speed);

            FILE *arquivo;
            FILE *arq_contador;
            arquivo = fopen("pokedex.txt", "a");
            arq_contador = fopen("contador.txt", "w");
            fwrite(&pkm, sizeof(pokemon), 1, arquivo);
            fprintf(arq_contador, "%d", contador);
            fclose(arquivo);
            fclose(arq_contador);
            contador++;

            break;
        case 2:
            printf("deu certo 2");
            break;
        case 3:
            printf("deu certo 3");
            break;

        default:
            printf("Opção inválida");
            break;
        }
    } while (aux_menu != 3);

    return 0;
}