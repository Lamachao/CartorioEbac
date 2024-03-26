#include <stdio.h> //biblioteca de comunica��o com o us�ario
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria  
#include <locale.h> //biblioteca de aloca��o de texto por regi�o   
#include <string.h> // biblioteca de string 

int registro()
{
		 	printf("Registro de nomes\n\n\n"); // t�tulo da p�gina 
	     	
	     	
	     	char arquivo[40]; 
	     	char cpf[40];  // para possibilitar entrada de vari�veis no armazenamento 
	     	char nome[40];  // para possibilitar entrada de vari�veis no armazenamento 
	     	char sobrenome[40];  // para possibilitar entrada de vari�veis no armazenamento 
	     	char cargo[40];  // para possibilitar entrada de vari�veis no armazenamento 
	     	
	     	printf("Digite o CPF a ser cadatrado:"); // pergunta direta ao usu�rio 
	     	scanf("%s", cpf); // possibilitar a entrada dos dados do CPF 
	     	
	     	strcpy(arquivo, cpf); // copiar o dado para armazenamento 
	     	
	     	FILE *file; // abrir arquivo 
	     	file = fopen(arquivo, "w"); //cria o arquivo 
	     	fprintf(file, cpf); // salvar valor da vari�vel 
            fclose(file); // fechar arquivo 
            
            file = fopen(arquivo, "a");
            fprintf(file,",");
            fclose(file);
            
            printf("Digite o nome a ser cadastrado: ");
            scanf("%s", nome); 
            
            file = fopen(arquivo, "a");
            fprintf(file, nome);
            fclose(file);
            
            file = fopen(arquivo, "a");
            fprintf(file, ",");
            fclose(file);
            
            printf("Digite seu sobrenome:");
            scanf("%s", sobrenome);
            
            file = fopen(arquivo, "a");
            fprintf(file, sobrenome);
            fclose(file);
            
            file = fopen(arquivo, "a");
            fprintf(file, ",");
            fclose(file);
            
            printf("Digite seu cargo:");
            scanf("%s", cargo);
            
            file = fopen(arquivo, "a");
            fprintf(file, cargo);
            fclose(file);
            
            file = fopen(arquivo, "a");
            fprintf(file, ",");
            fclose(file);
            
            system("pause");
				     	
	     	
}
int consulta()
{
	
	setlocale(LC_ALL, "Portuguese"); // fazer para reconhecer a gram�tica portuguesa 
	
	    	printf("Consulta de nomes\n\n\n"); //titulo para o usuario saber em qual parte do programa se localiza 
	    
		    		    
		    char cpf[40]; // para possibilitar a enbtrada de variaiveis na pesquisa
		    char conteudo[200];
		    
		       printf("Digite o CPF  a ser consultado:"); // pergunta direta para o usu�rio 
		       scanf("%s", cpf);
		    
		    FILE *file; // localizando arquivo
		    file = fopen(cpf, "r"); // "rr" significa ler arquivo 
		    
		    if(file == NULL) // caso o cpf solicitado n�o seja encontrado 
		        {
		    	printf("Usu�rio n�o encontrado..."); // mensagem para apararecer
		     	}
			
			while(fgets(conteudo, 200, file) != NULL) // enquanto o programa localiza os dados 
		    	{
				printf("\nEssas s�o as informa��es do usu�rio"); // texto para revelar pesquisa se for encontrada 
				printf("%s", conteudo); // de onde tirar o conteudo 
				printf("\n\n"); // so para pular linha realmente 
		     	}
			
		            	fclose(file); // Fechar o arquivo ap�s a leitura
		            	system("pause"); // pausar arquivo para possibilitar tempo para leitura do usu�rio.
			
		
}

int deletar()
{
	     	printf("Deletar nomes\n\n\n");
	    
}

int main()
{
    int opcao=0; // definindo as vari�veis 
    int laco=1;
    
    for(laco=1;laco=1;) // definir valor para possibilitar repti��es 
    {
    	
    	system("cls"); // limpar pagina quando atualizar 
	
	setlocale(LC_ALL, "Portuguese"); // fazer para reconhecer a gram�tica portuguesa 
	printf("\t### Cart�rio da EBAC ###\n \n"); // \n = Pular linha 
	printf("Escolha a op��o desejada do MENU: \n\n");
	printf("\t1- Registrar nomes\n"); // \t = comando para dar espa�amento 
	printf("\t2- Consultar nomes\n");
	printf("\t3- Deletar nomes\n\n");
	printf("\t4- Sair do Programa! \n\n");
	printf("Qual op��o deseja escolher?"); // fim do menu 
		
	scanf("%d", &opcao);
	
	system("cls");
	
	switch(opcao) // forma mais simplificada de aplicar e agrupar possiveis decis�es 
	{
		case 1: 
		registro();
		break; 
		
		case 2: 
     	consulta(); // consultar o int registro, ou melhor a fun��o registro
		break;
		
		case 3:
	    deletar();
		break;
		
		case 4:
		printf("Obrigado! At� mais!");
		return 0;
		break;
		
		
		default: 
		printf("Op��o indsponivel!\n\n\n");
		system("pause");
	}
	
	
   }
   
   
}
