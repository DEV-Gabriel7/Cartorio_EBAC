#include <stdio.h> // biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> // biblioteca de aloca��es de texto por regi�o
#include <string.h> // biblioteca respons�vel pelas strings

int registro() //fun��o responsavel por cadastrar os usu�rios no sistema 
{
	//inicio cria��o de vari�veis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//fim cria��o de vari�veis/string
	
	printf("Digite o CPF a ser cadastrado: "); //coletando informa��o do usu�rio
	scanf("%s", cpf);// %s se refere a string
	
	strcpy(arquivo , cpf); //respons�vel por copiar os valores das strings
	

	
	FILE *file; //Cria o arquivo no banco de dados
	
	file= fopen(arquivo,"w");// cria o arquivo e o "w" significa escrever
	fprintf(file, cpf); //salva o valor da vari�vel
	fclose(file); //fecha o arquivo
	
	
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file, nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s", sobrenome);
	
	file= fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s", cargo);
	
	file= fopen(arquivo, "a");
	fprintf(file, cargo);
	fclose(file);
	
	system("pause"); 
	
}

int consulta() //fun��o responsavel por consultar os usu�rios no sistema 
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	//inicio cria��o de vari�veis/string	
	char cpf[40];
	char conteudo[200];
	//fim cria��o de vari�veis/string
	
	printf("Digite o CPF a ser consultado: "); //coletando informa��o do usu�rio
	scanf("%s", cpf); // %s se refere a string
	
	FILE *file; //Abre o arquivo no banco de dados
	file = fopen(cpf, "r"); // l� o arquivo no banco de dados
	
	if(file == NULL)
	{
		printf("N�o foi possivel abrir o arquivo, n�o localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
}


int deletar()
{
	//inicio cria��o de vari�veis/string
	char cpf[40];
	//fim cria��o de vari�veis/string
	
	printf("Digite o CPF a ser deletado: "); //coletando informa��o do usu�rio
	scanf("%s",cpf); // %s se refere a string
	
	remove(cpf); //deleta o CPF digitado pelo usu�rio
	
	FILE *file; //Abre o arquivo no banco de dados
	file = fopen(cpf, "r");  // l� o arquivo no banco de dados
	
	if(file == NULL)
	{
		printf("Usu�rio n�o cadastrado no sistema.\n");
	}
	
	system("pause"); //deixa a janela aberta no printf acima
	
}


int main()
{
	int opcao=0; //Definindo vari�veis
	int laco=1;
	
	for(laco=1; laco=1;)
	{
		
		system("cls"); //respons�vel por limpar a tela
		
		setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
		printf("#### Cart�rio da EBAC #### \n\n"); //Inicio do menu
		printf("Escolha a op��o desejada do MENU: \n\n");
		printf("\t1 - Registrar nomes \n");
		printf("\t2 - Consultar nomes \n");
		printf("\t3 - Deletar nomes \n"); 
		printf("\t4 - Sair do sistema\n\n");
		printf("Opc�o: ");//fim do menu
	
		scanf("%d", &opcao); //armazenamento da escolha do usu�rio
		 
		system("cls"); //respons�vel por limpar a tela
		
		
		switch(opcao) //inicio da sele��o
		{
			case 1:
			registro(); //chamada de fun��es
			break;
			
			case 2:
			consulta();
			break;
			
			case 3:
			deletar(); 
			break;
			
			case 4:
			printf("Obrigado por utilizar o sistema!\n");
			return 0;
			break;
			
			
			default:
			printf("Essa op��o n�o est� dispon�vel. \n");
			system("pause");
			break;
			//fim da sele��o
		}
	}
}
