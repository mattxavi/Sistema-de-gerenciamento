#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#define SIZE 200

int opcao =0;


int main(void){
setlocale(LC_ALL, "Portuguese");
	int cadastro;
	
	char nome[SIZE] [50]; char email[SIZE] [50]; int cpf[SIZE]; char tipo [SIZE] [10]; char cor [SIZE] [10]; 
	FILE *file;
	
	int tam, cartao, final, opcao1, opcao2, delet;
	char usuario[15]="Dadovest";  // Nome do Usuário
	char usuario1[15];
	char senha[15]="223344"; // Senha
	char senha1[15];
	int usuario_logado = 0;
	
	while(!usuario_logado){
		printf("Digite o Usuário: ");
		scanf("%s", usuario1);
				
		printf("Digite a senha: ");
		scanf("%s", senha1);
		
		if(strcmp(usuario, usuario1) == 0 && strcmp(senha, senha1) == 0){
			printf("\n\nUsuário Logado\n\n");
			system("color B");
			system("cls");
			printf("\n\n\n\n\n\n CARREGANDO...");
			usuario_logado = 1;
			sleep(1);
		while(usuario_logado!=6){while(final!=1){
			system("cls");
			
			printf("\t\t SEJA BEM VINDO A DADOVEST!\n\n");
			printf("1 - Cadastrar Cliente\n");
			printf("2 - Realizar uma Compra\n");
			printf("3 - Cadastro e Status da Compra\n");
			printf("4 - Limpar dados\n");
			printf("5 - Manual do Usuário\n");
			printf("6 - Sair do Sistema");
			printf("\n\nDigite a Opção Desejada: ");
			scanf("%d", &opcao1);
			
	
	
		switch(opcao1){
		case 1: system("cls");
			printf("\n\n\t\t\t INICIANDO CADASTRO\n");
			printf("\t\t\t  ----------------\n\n");
			static int linha;
			printf("Nome do comprador: ");
			fflush(stdin);
			scanf("%s", &nome[linha]);
			printf("\nDigite o email do comprador: ");
			fflush(stdin);
			scanf("%s", &email[linha]);
			printf("\nDigite o CPF do comprador: ");
			scanf("%d", &cpf[linha]);
			printf("\nDados coletados!\n");
			system("pause");
			
			break;
			
			case 4: system("cls");
			printf("Quais dados você gostaria de deletar?\n1- Dados de cadastro\n2- Dados de compra\n");
			scanf("%d", &delet);
			
			switch(delet){
				case 1: memset (&nome, 0, sizeof (nome) );
				memset (&email, 0, sizeof (email) );
				memset (&cpf, 0, sizeof (cpf) );
				printf("Dados deletados\n");
				system("pause");
				break;
				case 2: memset (&tipo, 0, sizeof (tipo) );
				memset (&cor, 0, sizeof (cor) );
				memset (&tam, 0, sizeof (tam) );
				printf("Dados deletados\n");
				system("pause");
				break;
			}
			
			break;
			
		case 5: 
		system("cls");
		file = fopen("string.txt", "r");
		if(file == NULL){
			printf("Arquivo não encontrado");
			getchar;
			return 0;
		}
	char manual[100];
	
		while(fgets(manual, 100, file) !=NULL){
			printf("%s", manual);
		}
		
		fclose(file);
	
		system("pause");
		

		break;
		
		case 6: 
			system("cls");
			printf("\n Você deseja sair da DadoVest?\n\n");
			printf(" 1- Sim\n 2- Nao");
			printf("\n\n ");
			scanf("%d", &final);	
		switch(final){
			case 1:
				system("cls");
				printf("\n\n Volte sempre! \n\n\n\t\t");
				system("pause");
				return 0;
				break;
					}
			break;	
			
			
			
			case 3:
			system("cls");
			printf("\n\n\t\t\t    EXIBINDO CADASTRO E STATUS DA COMPRA \n");
			printf("\t\t\t  -------------------------------------------\n\n");
			printf("Nome do comprador: %s", nome);
			printf("\nEmail do comprador: %s", email);
			printf("\nCPF do comprador: ***********\n");
			printf("\nTipo de tênis selecionado: %s", tipo);
			printf("\nCor selecionada: %s", cor);
			printf("\nTamanho escolhido: %d\n", tam);
			printf("\nCONFIRA OS DADOS ANTES DE PROSSEGUIR!\n\n\n");
			printf("Compra finalizada? Digite 1 para 'SIM' OU 2 para 'NÃO': ");
			scanf("%d", &opcao2);
			if(opcao2 ==1 && tam == 0){
				printf("Há um campo não preenchido, digite '2' para voltar");
				scanf("%d", &opcao2);
				
			}
			
 			switch(opcao2){
 				case 1: 
				system("cls");
				printf("\n\n\t\t\t FINALIZAÇÃO DE COMPRA!\n");
				printf("\t\t\t  ----------------\n\n");	
				printf("1) VISA\n");
				printf("2) ELO\n");
				printf("3) MASTERCARD\n");
				printf("Qual a bandeira do cartão?\n");
				scanf("%d", &cartao);
					while(cartao<1||cartao>3)
					{
 						printf("\nO CARTÃO DIGITADO NÃO ESTÁ ENTRE OS LISTADOS, TENTE NOVAMENTE: ");
 						scanf("%d",&cartao);
 					}
 				system("cls");	
 				printf("\n\n\n\n\t\t\tRegistrando compra...");
 				sleep(2);
 				system("cls");
				printf("\n\n\t\t\t    COMPRA FINALIZADA \n");
				printf("\t\t\t  ------------------\n\n");
				printf("O cliente receberá os próximos passos via E-mail!\n");
				printf("\n\t\tVolte sempre!\n\n");
			 
				system("pause");
		break;
		}
		break;	 	
			
					case 2:
			system("cls");
			printf("\n\n\t\t\t    Realize uma compra \n\n");
		
			printf("Casual\n");
			printf("Esportivo\n");
			printf("Plataforma\n");
			printf("Retro\n");
			printf("Sapatênis\n\n");
			printf("Digite o tipo de tênis que mais combina com você: ");
			scanf("%s", &tipo);
			fflush(stdin);
			printf("\n\nPreto\n");
			printf("Branco\n");
			printf("Azul\n");
			printf("Cinza\n\n");
			printf("Digite a cor do tênis: ");
			scanf("%s", &cor);
			fflush(stdin);
			printf("Digite o tamanho do tênis: ");
			scanf("%d", &tam);
			while(tam<=32||tam>=46)
			{
 				printf("\n O TAMANHO DIGITADO NÃO ESTÁ DISPONÍVEL, TENTE NOVAMENTE: ");
 				scanf("%d",&tam);
 			}
			printf("\nDados coletados!\n");
			system("pause");
		
			break;
					break;
					break;
						}
					}
		}
		}
		else
			printf("\n\nDados Incorretos!\n\n");
}
	
	system("pause");
	return 0;
}



