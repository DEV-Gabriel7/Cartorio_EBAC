#include <stdio.h> // biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> // biblioteca de alocações de texto por região
#include <string.h> // biblioteca responsável pelas strings

int registro() //função responsavel por cadastrar os usuários no sistema 
{
	//inicio criação de variáveis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//fim criação de variáveis/string
	
	printf("Digite o CPF a ser cadastrado: "); //coletando informação do usuário
	scanf("%s", cpf);// %s se refere a string
	
	strcpy(arquivo , cpf); //responsável por copiar os valores das strings
	

	
	FILE *file; //Cria o arquivo no banco de dados
	
	file= fopen(arquivo,"w");// cria o arquivo e o "w" significa escrever
	fprintf(file, cpf); //salva o valor da variável
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

int consulta() //função responsavel por consultar os usuários no sistema 
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	//inicio criação de variáveis/string	
	char cpf[40];
	char conteudo[200];
	//fim criação de variáveis/string
	
	printf("Digite o CPF a ser consultado: "); //coletando informação do usuário
	scanf("%s", cpf); // %s se refere a string
	
	FILE *file; //Abre o arquivo no banco de dados
	file = fopen(cpf, "r"); // lê o arquivo no banco de dados
	
	if(file == NULL)
	{
		printf("Não foi possivel abrir o arquivo, não localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas são as informações do usuário: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
}


int deletar()
{
	//inicio criação de variáveis/string
	char cpf[40];
	//fim criação de variáveis/string
	
	printf("Digite o CPF a ser deletado: "); //coletando informação do usuário
	scanf("%s",cpf); // %s se refere a string
	
	remove(cpf); //deleta o CPF digitado pelo usuário
	
	FILE *file; //Abre o arquivo no banco de dados
	file = fopen(cpf, "r");  // lê o arquivo no banco de dados
	
	if(file == NULL)
	{
		printf("Usuário não cadastrado no sistema.\n");
	}
	
	system("pause"); //deixa a janela aberta no printf acima
	
}


int main()
{
	int opcao=0; //Definindo variáveis
	int laco=1;
	
	for(laco=1; laco=1;)
	{
		
		system("cls"); //responsável por limpar a tela
		
		setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
		printf("#### Cartório da EBAC #### \n\n"); //Inicio do menu
		printf("Escolha a opção desejada do MENU: \n\n");
		printf("\t1 - Registrar nomes \n");
		printf("\t2 - Consultar nomes \n");
		printf("\t3 - Deletar nomes \n"); 
		printf("\t4 - Sair do sistema\n\n");
		printf("Opcão: ");//fim do menu
	
		scanf("%d", &opcao); //armazenamento da escolha do usuário
		 
		system("cls"); //responsável por limpar a tela
		
		
		switch(opcao) //inicio da seleção
		{
			case 1:
			registro(); //chamada de funções
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
			printf("Essa opção não está disponível. \n");
			system("pause");
			break;
			//fim da seleção
		}
	}
}
