#include <stdio.h> //biblioteca de comunicação com o usúario
#include <stdlib.h> //biblioteca de alocação de espaço em memória  
#include <locale.h> //biblioteca de alocação de texto por região   
#include <string.h> // biblioteca de string 

int registro()
{
		 	printf("Registro de nomes\n\n\n"); // título da página 
	     	
	     	
	     	char arquivo[40]; 
	     	char cpf[40];  // para possibilitar entrada de variáveis no armazenamento 
	     	char nome[40];  // para possibilitar entrada de variáveis no armazenamento 
	     	char sobrenome[40];  // para possibilitar entrada de variáveis no armazenamento 
	     	char cargo[40];  // para possibilitar entrada de variáveis no armazenamento 
	     	
	     	printf("Digite o CPF a ser cadatrado:"); // pergunta direta ao usuário 
	     	scanf("%s", cpf); // possibilitar a entrada dos dados do CPF 
	     	
	     	strcpy(arquivo, cpf); // copiar o dado para armazenamento 
	     	
	     	FILE *file; // abrir arquivo 
	     	file = fopen(arquivo, "w"); //cria o arquivo 
	     	fprintf(file, cpf); // salvar valor da variável 
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
	
	setlocale(LC_ALL, "Portuguese"); // fazer para reconhecer a gramática portuguesa 
	
	    	printf("Consulta de nomes\n\n\n"); //titulo para o usuario saber em qual parte do programa se localiza 
	    
		    		    
		    char cpf[40]; // para possibilitar a enbtrada de variaiveis na pesquisa
		    char conteudo[200];
		    
		       printf("Digite o CPF  a ser consultado:"); // pergunta direta para o usuário 
		       scanf("%s", cpf);
		    
		    FILE *file; // localizando arquivo
		    file = fopen(cpf, "r"); // "rr" significa ler arquivo 
		    
		    if(file == NULL) // caso o cpf solicitado não seja encontrado 
		        {
		    	printf("Usuário não encontrado..."); // mensagem para apararecer
		     	}
			
			while(fgets(conteudo, 200, file) != NULL) // enquanto o programa localiza os dados 
		    	{
				printf("\nEssas são as informações do usuário"); // texto para revelar pesquisa se for encontrada 
				printf("%s", conteudo); // de onde tirar o conteudo 
				printf("\n\n"); // so para pular linha realmente 
		     	}
			
		            	fclose(file); // Fechar o arquivo após a leitura
		            	system("pause"); // pausar arquivo para possibilitar tempo para leitura do usuário.
			
		
}

int deletar()
{
	     	printf("Deletar nomes\n\n\n");
	    
}

int main()
{
    int opcao=0; // definindo as variáveis 
    int laco=1;
    
    for(laco=1;laco=1;) // definir valor para possibilitar reptições 
    {
    	
    	system("cls"); // limpar pagina quando atualizar 
	
	setlocale(LC_ALL, "Portuguese"); // fazer para reconhecer a gramática portuguesa 
	printf("\t### Cartório da EBAC ###\n \n"); // \n = Pular linha 
	printf("Escolha a opção desejada do MENU: \n\n");
	printf("\t1- Registrar nomes\n"); // \t = comando para dar espaçamento 
	printf("\t2- Consultar nomes\n");
	printf("\t3- Deletar nomes\n\n");
	printf("\t4- Sair do Programa! \n\n");
	printf("Qual opção deseja escolher?"); // fim do menu 
		
	scanf("%d", &opcao);
	
	system("cls");
	
	switch(opcao) // forma mais simplificada de aplicar e agrupar possiveis decisões 
	{
		case 1: 
		registro();
		break; 
		
		case 2: 
     	consulta(); // consultar o int registro, ou melhor a função registro
		break;
		
		case 3:
	    deletar();
		break;
		
		case 4:
		printf("Obrigado! Até mais!");
		return 0;
		break;
		
		
		default: 
		printf("Opção indsponivel!\n\n\n");
		system("pause");
	}
	
	
   }
   
   
}
