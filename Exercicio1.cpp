//#include<stdio.h>
//#include<stdlib.h>
//#include <locale.h>
//#include <string.h>
//struct Lista  //Struct que armazena as informações inseridas pelo usuário
//{
//	char musica[50], artista[50];
//	float duracao;
//	struct Lista* proxima;
//}	*Head;
//
//void listaMusica(); // Invoca a função listaMusica
//void insereMusica(); // Invoca a função insereMusica
//
//int main()
//{
//	setlocale(LC_ALL, "Portuguese"); //Define o idioma como "Português"
//	int opcao;
//	Head = NULL;
//	do
//	{
//		printf("Lista de Músicas \n");
//		printf("---------------- \n");
//		printf("Menu Principal \n");
//		printf("---------------- \n");
//		printf("Escolha uma das opções abaixo: \n");
//		printf("1 - Nova Música \n");
//		printf("2 - Lista de Músicas \n");
//		printf("0 - Sair  \n");
//		scanf_s("%d", &opcao);
//		system("cls"); // Limpa as informações da tela do CMD
//		switch (opcao)
//		{
//		case 1:
//			insereMusica();
//			break;
//		case 2:
//			listaMusica();
//			break;
//		case 0:
//			return 0;
//			break;
//		default:
//			printf("Opção inválida, tente novamente \n");
//		}
//	} while (opcao != 0);
//}
//
//void insereMusica() // Coleta as informações da nova entrada da lista
//{
//	int c;
//	while ((c = getchar()) != '\n' && c != EOF) {}
//	Lista* novaMusica;
//	novaMusica = (struct Lista*)malloc(sizeof(struct Lista)); // aloca espaço na memória
//	printf("\n Digite o nome da música: ");
//	gets_s(novaMusica->musica);
//	printf("\n Digite o artista: ");
//	gets_s(novaMusica->artista);
//	printf(" \n Digite a duração da musica: ");
//	scanf_s("%f", &novaMusica->duracao);
//	if (Head == NULL) //No caso da lista estar vazia, insere a música na primeira posição
//	{
//		Head = novaMusica;
//		Head->proxima = NULL;
//	}
//	else //Substitiu o valor antigo para uma posição subsequente e insere a nova música na primeira posição
//	{
//		novaMusica->proxima = Head;
//		Head = novaMusica;
//	}
//	while ((c = getchar()) != '\n' && c != EOF) {}
//	system("cls || clear");
//}
//
//void listaMusica() //Exibe a lista de músicas salvas no sistema
//{ 
//	Lista* exibirMusica;
//	exibirMusica = (struct Lista*)malloc(sizeof(struct Lista)); // aloca espaço na memória
//	exibirMusica = Head;
//
//	if (exibirMusica == NULL) //Exibe uma mensagem no caso da lista estar vazia
//	{ 
//		printf("\n Nenhuma musica cadastrada!");
//		return;
//	}
//
//	while (exibirMusica != NULL) // Estrutura de repetição que exibe as informações salvas na lista
//	{
//		printf("Nome da música: %s \n", exibirMusica->musica);
//		printf("Artista: %s \n", exibirMusica->artista);
//		printf("Tempo de duração: %f \n", exibirMusica->duracao);
//		printf("------------------------------\n");
//		exibirMusica = exibirMusica->proxima;
//		
//	};
//
//	system("pause");
//	system("cls || clear");
//	return;
//}