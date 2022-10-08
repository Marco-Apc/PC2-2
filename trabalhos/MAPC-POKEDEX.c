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
    struct tm tm;
    atributos atributos;
} pokemon;

void escrever_arquivo(pokemon *pokemons)
{
    FILE *arq;
    arq = fopen("pokemon.bin", "ab");

    if (arq != NULL)
    {
        fwrite(pokemons, sizeof(pokemon), 1, arq);
        fclose(arq);
    }
    else
    {
        printf("\nErro ao escrever no arquivo!\n");
        exit(1);
    }
}

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    pokemon *pkm = malloc(sizeof(pokemon));
    pokemon *aux_pkm = malloc(sizeof(pokemon));
    time_t data = time(NULL);

    int aux_menu = NULL;
    int indice = 0;
    int aux = 0;
    do
    {
        // menu
        system("cls");
        printf("\n");

        printf("Integrantes:\n");
        printf("Marco Antonio Pires de Carvalho.\n\n");

        printf("POKEDEX\n");
        printf("Escolha uma opcao (digite e pressione Enter):\n");
        printf("============================================\n");
        printf("[1] - Cadastrar novo pokemon\n");
        printf("[2] - Listar pokemons cadastrados\n");
        printf("[3] - Sair\n");
        printf("============================================\n");

        scanf("%d%*c", &aux_menu);
        switch (aux_menu)
        {
        case 1:

        // cadastrar novo pokemon
            system("cls");
            printf("Digite o nome do pokemon: ");
            scanf("%[^\n]", &*(pkm + aux)->nome);
            scanf("%*c");

            printf("Digite o tipo do pokemon: ");
            scanf("%[^\n]", &*(pkm + aux)->tipo);
            scanf("%*c");

            printf("Digite o valor do HP do pokemon (entre 100 e 200): ");
            do
            {
                scanf("%d", &(pkm + aux)->atributos.hp);
                if ((pkm + aux)->atributos.hp < 100 || (pkm + aux)->atributos.hp > 200)
                    printf("Valor invalido! Digite novamente: ");
            } while ((pkm + aux)->atributos.hp < 100 || (pkm + aux)->atributos.hp > 200);

            printf("Digite o valor do ataque do pokemon (entre 10 e 50): ");
            do
            {
                scanf("%d", &(pkm + aux)->atributos.atk);
                if ((pkm + aux)->atributos.atk < 10 || (pkm + aux)->atributos.atk > 50)
                    printf("Valor invalido! Digite novamente: ");
            } while ((pkm + aux)->atributos.atk < 10 || (pkm + aux)->atributos.atk > 50);

            printf("Digite o valor do ataque especial do pokemon (entre 10 e 50): ");
            do
            {
                scanf("%d", &(pkm + aux)->atributos.sp_atk);
                if ((pkm + aux)->atributos.sp_atk < 10 || (pkm + aux)->atributos.sp_atk > 50)
                    printf("Valor invalido! Digite novamente: ");
            } while ((pkm + aux)->atributos.sp_atk < 10 || (pkm + aux)->atributos.sp_atk > 50);

            printf("Digite a valor da defesa do pokemon (entre 10 e 50): ");
            do
            {
                scanf("%d", &(pkm + aux)->atributos.def);
                if ((pkm + aux)->atributos.def < 10 || (pkm + aux)->atributos.def > 50)
                    printf("Valor invalido! Digite novamente: ");
            } while ((pkm + aux)->atributos.def < 10 || (pkm + aux)->atributos.def > 50);

            printf("Digite o valor da defesa especial do pokemon (entre 10 e 50): ");
            do
            {
                scanf("%d", &(pkm + aux)->atributos.sp_def);
                if ((pkm + aux)->atributos.sp_def < 10 || (pkm + aux)->atributos.sp_def > 50)
                    printf("Valor invalido! Digite novamente: ");
            } while ((pkm + aux)->atributos.sp_def < 10 || (pkm + aux)->atributos.sp_def > 50);

            printf("Digite o valor da velocidade do pokemon (entre 1 e 10): ");
            do
            {
                scanf("%d", &(pkm + aux)->atributos.speed);
                if ((pkm + aux)->atributos.speed < 1 || (pkm + aux)->atributos.speed > 10)
                    printf("Valor invalido! Digite novamente: ");
            } while ((pkm + aux)->atributos.speed < 1 || (pkm + aux)->atributos.speed > 10);

            pkm->tm = *localtime(&data);
            // escrever no arquivo o pokemon cadastrado
            escrever_arquivo(pkm);
            aux++;

            break;

        case 2:

        // listar pokemons cadastrados
            system("cls");
            FILE *arq_aux = malloc(sizeof(pokemon));
            if ((arq_aux = fopen("pokemon.bin", "rb")) == NULL)
            {
                arq_aux = fopen("pokemon.bin", "wb");
                fclose(arq_aux);
            }
            else
                fclose(arq_aux);

            arq_aux = fopen("pokemon.bin", "rb");
            int len_vet = 0;

            while (fread(aux_pkm, sizeof(pokemon), 1, arq_aux))
                len_vet++;
            fclose(arq_aux);

            if (len_vet == 0)
            {
                printf("Nenhum pokemon cadastrado!\n");
                printf("Pressione qualquer tecla para voltar ao menu...");
                getch();
                break;
            }

            arq_aux = fopen("pokemon.bin", "rb");
            pokemon *vet_pkm = calloc(len_vet ,sizeof(pokemon));
            for (int i = 0; i < len_vet; i++)
            {              
                fread(vet_pkm + i, sizeof(pokemon), 1, arq_aux);
                printf("Nome: %s\n", (vet_pkm + i)->nome);
                printf("Tipo: %s\n", (vet_pkm + i)->tipo);
                printf("HP: %d\n", (vet_pkm + i)->atributos.hp);
                printf("Ataque: %d\n", (vet_pkm + i)->atributos.atk);
                printf("Ataque especial: %d\n", (vet_pkm + i)->atributos.sp_atk);
                printf("Defesa: %d\n", (vet_pkm + i)->atributos.def);
                printf("Defesa especial: %d\n", (vet_pkm + i)->atributos.sp_def);
                printf("Velocidade: %d\n", (vet_pkm + i)->atributos.speed);
                printf("Data e hora de cadastro: %d/%d/%d %d:%d:%d\n", (vet_pkm + i)->tm.tm_mday, (vet_pkm + i)->tm.tm_mon + 1, (vet_pkm + i)->tm.tm_year + 1900, (vet_pkm + i)->tm.tm_hour, (vet_pkm + i)->tm.tm_min, (vet_pkm + i)->tm.tm_sec);
                printf("============================================\n");
            }
            fclose(arq_aux);
            printf("Pressione qualquer tecla para voltar ao menu...");
            getch();
            break;

        case 3:
            printf("Saindo...\n");
            printf("Pressione qualquer tecla para sair...");
            getch();
            break;

        default:
            printf("Opção inválida");
            printf("Pressione qualquer tecla para voltar ao menu...");
            getch();
            break;
        }
    } while (aux_menu != 3);

    return 0;
}