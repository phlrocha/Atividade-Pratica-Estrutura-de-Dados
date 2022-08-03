//#include<stdio.h>
//#include<stdlib.h>
//#include <locale.h>
//#include <string.h>
//struct Lista  //Struct que armazena as informa��es inseridas pelo usu�rio
//{
//	char musica[50], artista[50];
//	float duracao;
//	struct Lista* proxima;
//}	*Head;
//
//void listaMusica(); // Invoca a fun��o listaMusica
//void insereMusica(); // Invoca a fun��o insereMusica
//
//int main()
//{
//	setlocale(LC_ALL, "Portuguese"); //Define o idioma como "Portugu�s"
//	int opcao;
//	Head = NULL;
//	do
//	{
//		printf("Lista de M�sicas \n");
//		printf("---------------- \n");
//		printf("Menu Principal \n");
//		printf("---------------- \n");
//		printf("Escolha uma das op��es abaixo: \n");
//		printf("1 - Nova M�sica \n");
//		printf("2 - Lista de M�sicas \n");
//		printf("0 - Sair  \n");
//		scanf_s("%d", &opcao);
//		system("cls"); // Limpa as informa��es da tela do CMD
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
//			printf("Op��o inv�lida, tente novamente \n");
//		}
//	} while (opcao != 0);
//}
//
//void insereMusica() // Coleta as informa��es da nova entrada da lista
//{
//	int c;
//	while ((c = getchar()) != '\n' && c != EOF) {}
//	Lista* novaMusica;
//	novaMusica = (struct Lista*)malloc(sizeof(struct Lista)); // aloca espa�o na mem�ria
//	printf("\n Digite o nome da m�sica: ");
//	gets_s(novaMusica->musica);
//	printf("\n Digite o artista: ");
//	gets_s(novaMusica->artista);
//	printf(" \n Digite a dura��o da musica: ");
//	scanf_s("%f", &novaMusica->duracao);
//	if (Head == NULL) //No caso da lista estar vazia, insere a m�sica na primeira posi��o
//	{
//		Head = novaMusica;
//		Head->proxima = NULL;
//	}
//	else //Substitiu o valor antigo para uma posi��o subsequente e insere a nova m�sica na primeira posi��o
//	{
//		novaMusica->proxima = Head;
//		Head = novaMusica;
//	}
//	while ((c = getchar()) != '\n' && c != EOF) {}
//	system("cls || clear");
//}
//
//void listaMusica() //Exibe a lista de m�sicas salvas no sistema
//{ 
//	Lista* exibirMusica;
//	exibirMusica = (struct Lista*)malloc(sizeof(struct Lista)); // aloca espa�o na mem�ria
//	exibirMusica = Head;
//
//	if (exibirMusica == NULL) //Exibe uma mensagem no caso da lista estar vazia
//	{ 
//		printf("\n Nenhuma musica cadastrada!");
//		return;
//	}
//
//	while (exibirMusica != NULL) // Estrutura de repeti��o que exibe as informa��es salvas na lista
//	{
//		printf("Nome da m�sica: %s \n", exibirMusica->musica);
//		printf("Artista: %s \n", exibirMusica->artista);
//		printf("Tempo de dura��o: %f \n", exibirMusica->duracao);
//		printf("------------------------------\n");
//		exibirMusica = exibirMusica->proxima;
//		
//	};
//
//	system("pause");
//	system("cls || clear");
//	return;
//}