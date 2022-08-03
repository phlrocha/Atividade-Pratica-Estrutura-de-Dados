#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct // Estrutura heterog�nea de dados
{
	int RU;
	char nome[60];
	char email[60];
}Aluno;

Aluno listaAlunos[10]; //Define um array de 10 valores para Aluno

void preencherLista() //Preenche os valores do array com dados pr�-definidos
{
	listaAlunos[0].RU = 3730548;
	strcpy_s(listaAlunos[0].nome,"Pedro Henrique Lima da Rocha");
	strcpy_s(listaAlunos[0].email,"pedro@uninter.com");

	listaAlunos[1].RU = 1000348;
	strcpy_s(listaAlunos[1].nome,"Jos� Roberto Fernandes");
	strcpy_s(listaAlunos[1].email,"joseroberto@uninter.com");

	listaAlunos[2].RU = 1000340;
	strcpy_s(listaAlunos[2].nome,"Jo�o da Silva");
	strcpy_s(listaAlunos[2].email,"joao@uninter.com");

	listaAlunos[3].RU = 1000341;
	strcpy_s(listaAlunos[3].nome,"Carlos Pereira");
	strcpy_s(listaAlunos[3].email,"carlos@uninter.com");

	listaAlunos[4].RU = 1000342;
	strcpy_s(listaAlunos[4].nome,"Claudia Gomes");
	strcpy_s(listaAlunos[4].email,"claudia@uninter.com");

	listaAlunos[5].RU = 1000343;
	strcpy_s(listaAlunos[5].nome,"Juliana Andrade");
	strcpy_s(listaAlunos[5].email,"juliana@uninter.com");

	listaAlunos[6].RU = 1000344;
	strcpy_s(listaAlunos[6].nome,"Paulo dos Santos");
	strcpy_s(listaAlunos[6].email,"paulo@uninter.com");

	listaAlunos[7].RU = 1000345;
	strcpy_s(listaAlunos[7].nome,"Mariana Silveira");
	strcpy_s(listaAlunos[7].email,"mariana@uninter.com");

	listaAlunos[8].RU = 1000346;
	strcpy_s(listaAlunos[8].nome,"Roberto de Andrade");
	strcpy_s(listaAlunos[8].email,"roberto@uninter.com");

	listaAlunos[9].RU = 1000347;
	strcpy_s(listaAlunos[9].nome,"Maria da Concei��o Alves");
	strcpy_s(listaAlunos[9].email,"maria@uninter.com");
}

int criarCodigoHash(int numeroRU) // Cria um c�digo hash
{
	return numeroRU %10;
}

Aluno* buscaAluno(int _ru) //Busca um valor dentro do array
{
	int cont = 0;
	int indice = criarCodigoHash(_ru);

	while (listaAlunos[indice].RU != -1 && cont<20) //Condi��es para a busca
	{
		if (listaAlunos[indice].RU == _ru) //Quando o valor digitado e o RU forem iguais,retorna os dados completos 
		{
			return &listaAlunos[indice];
		}
		else
		{
			indice = criarCodigoHash(indice + 1); //Enquanto os dados s�o diferentes, busca o pr�ximo valor do array
			cont++;
		}
	}
	return NULL;
	
}

void localizarAluno() //Fun��o que imprime os dados do Aluno
{
	int _ru;
	Aluno* _aluno;
	system("cls");
	printf("Cadastro Alunos - Uninter \n");
	printf("------------------------- \n");
	printf("Digite o n�mero do RU do aluno: \n");
	scanf_s("%d", &_ru); //Recebe o valor de RU inserido pelo usu�rio
	_aluno = buscaAluno(_ru);
	if (_aluno) //Imprime os dados do aluno
	{

		printf("\nRU:\t%d\n", _aluno->RU);
		printf("Nome:\t%s\n", _aluno->nome);
		printf("E-mail:\t%s\n", _aluno->email);
		printf("\n");
		system("pause");
		system("cls");
	}
	else //No caso de n�o houver cadastro do RU, informa a mensagem abaixo
	{
		printf("\nRU nao encontrado!\n");
		system("pause");
		system("cls");
	}
}
int main()
{
	setlocale(LC_ALL, "Portuguese"); //Define o idioma como "Portugu�s"
	int opcao;

	preencherLista(); //Chama a fun��o preencherLista
	do
	{
		printf("Cadastro Alunos - Uninter \n");
		printf("------------------------- \n");
		printf("Escolha uma das op��es abaixo: \n");
		printf("1 - Busca por RU\n");
		printf("0 - Sair  \n");
		scanf_s("%d", &opcao); //Recebe o valor inserido pelo usu�rio 
		system("cls"); // Limpa as informa��es da tela do CMD
		switch (opcao)
		{
		case 1:
			localizarAluno();//Chama a fun��o localizarAluno
			break;
		case 0:
			return 0;
			break;
		default:
			printf("Op��o inv�lida, tente novamente \n");
			system("pause"); //Aguarda a��o do usu�rio
			system("cls");
		}

	} while (opcao != 0);
}