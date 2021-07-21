#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>

int main(){
	
	  //Declara��o de Vari�veis e condi��es
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome[30], cpf[16];
	int sexo, idade, cont = 0;
	int opcao, corretos, recomecar;
	
	// Gera um arquivo na pasta em que o .C eat� localizado
	
	FILE *file;
	file = fopen("DadosCadastraisClientes.txt", "w");
	
	comeco:
	
	// Entrada dos dados cadastrais
	
	
	system("cls");
	printf("--------------------------------\n");
	printf("| PR�-CADASTRO DADOS PESSOAIS  |\n");
	printf("--------------------------------\n");
	
	printf("--------------------------------\n");
	printf("|          COVID - 19          |\n");
	printf("--------------------------------\n");
	
	system("pause");
	system("cls");
	
	
	printf("--------------------------------------------\n");
	printf("Nome: ");
	fflush(stdin);
	scanf("%s", &nome);
		
	
	printf("--------------------------------------------\n");
	printf("CPF sem caracteres especiais: ");
	fflush(stdin);
	scanf("%s", &cpf);
		
	
	printf("--------------------------------------------\n");
	printf("[1]Masculino | [2]Feminino | [3]N�o declarar\n");
	printf("Sexo: ");
	fflush(stdin);
	scanf("%d", &sexo);
	

	
	
	printf("--------------------------------------------\n");
	printf("Idade: ");
	fflush(stdin);
	scanf("%d", &idade);
	printf("--------------------------------------------\n");
	
	system("cls");
	
	printf("|DADOS CADASTRAIS FINALIZADOS...       |\n");
	printf("|--------------------------------------|\n");
	printf("|NOME: %s\n", nome);
	printf("|--------------------------------------|\n");
	printf("|IDADE: %d\n",idade);
	printf("|--------------------------------------|\n");
	printf("|CPF: %s\n",cpf);
	printf("|--------------------------------------|\n");
	
	if (sexo == 1) {
		printf ("|SEXO: MASCULINO\n");
	}
	else if (sexo == 2) {
		printf ("|SEXO: FEMININO\n");
	}
	if (sexo==3) {
		printf("|SEXO: N�O DECLARADO\n");
	}
	 
	  //Confer�ncia dos dados
	
	printf("|--------------------------------------|\n");
	printf("Seus dados est�o corretos? \n");
	printf("[1]Sim | [2]N�o \n");
	fflush(stdin);
	scanf("%d", &corretos);
	printf("|--------------------------------------|\n");
	
	system("cls");
	
	if (corretos==1)
		goto aqui;  //Da seguimento aos procedimentos
	else
		printf("Refa�a seu cadastro! \n");
		goto comeco; //Come�o dos c�digos

	aqui:
	
	printf("|-----------------------------------|\n");
	printf("|      DECLARA��O DE SINTOMAS       | \n");
	printf("|-----------------------------------|\n");
	
	system("pause");
	system("cls");
	
	
	  //Entrada de dados dos sintomas
	
	printf("|-----------------------------------------|\n");
	printf("|TEM FEBRE? [1] para SIM | [2] para N�O   |\n");
	fflush(stdin);
	scanf("%d", &opcao);
	
	if (opcao == 1)
		cont = cont+5;
	else
		cont = cont+0;
	
	system("cls");
	
	printf("|----------------------------------------------|\n");
	printf("|TEM DOR DE CABE�A? [1] para SIM | [2] para N�O|\n");
	fflush(stdin);
	scanf("%d", &opcao);
	
	if (opcao == 1)
		cont = cont+1;
	else
		cont = cont+0;
	
	system("cls");
	
	printf("|-----------------------------------------------------------|\n");
	printf("|TEM SECRE��O NASAL OU ESPIRROS? [1] para SIM | [2] para N�O|\n");
	fflush(stdin);
	scanf("%d",&opcao);
	
	if (opcao == 1)
		cont = cont+1;
	else
		cont = cont+0;
	
	system("cls");
			
	printf("|-----------------------------------------------------------|\n");
	printf("|TEM DOR/IRRITA��O NA GARGANTA? [1] para SIM | [2] para N�O |\n");
	fflush(stdin);
	scanf("%d", &opcao);
	
	if (opcao == 1)
		cont = cont+1;
	else
		cont = cont+0;	
	
	system("cls");
	
	printf("|----------------------------------------------|\n");
	printf("|TEM TOSSE SECA? [1] para SIM | [2] para N�O   |\n");
	fflush(stdin);
	scanf("%d",&opcao);
	
	if (opcao == 1)
		cont = cont+3;
	else
		cont = cont+0;
	
	system("cls");
	
	printf("|-----------------------------------------------------------|\n");
	printf("|TEM DIFICULDADE RESPIRAT�RIA? [1] para SIM | [2] para N�O  |\n");
	fflush(stdin);
	scanf("%d",&opcao);
	
	if (opcao == 1)
		cont = cont+10;
	else
		cont = cont+0;
	
	system("cls");
	
	printf("|-----------------------------------------------|\n");
	printf("|TEM DORES NO CORPO? [1] para SIM | [2] para N�O|\n");
	fflush(stdin);
	scanf("%d",&opcao);
	
	if (opcao == 1)
		cont = cont+1;
	else
		cont = cont+0;
	
	system("cls");
	
	printf("|------------------------------------------|\n");
	printf("|TEM DIARREIA? [1] para SIM | [2] para N�O |\n");
	fflush(stdin);
	scanf("%d",&opcao);
	
	if (opcao == 1)
		cont = cont+1;
	else
		cont = cont+0;
	
	system("cls");
	
	printf("|-------------------------------------------------------------------------------------------------------|\n");
	printf("|ESTEVE EM CONTATO NOS �LTIMOS 14 DIAS COM ALGU�M CONTAMINADO PELO COVID-19? [1] para SIM | [2] para N�O|\n");
	fflush(stdin);
	scanf("%d",&opcao);
	
	if (opcao == 1)
		cont = cont+10;
	else
		cont = cont+0;
	
	system("cls");
	
	printf("|----------------------------------------------------------------------|\n");
	printf("|ESTEVE EM LOCAIS COM GRANDES AGLOMERA��ES? [1] para SIM | [2] para N�O|\n");
	fflush(stdin);
	scanf("%d",&opcao);
	
	if (opcao == 1)
		cont = cont+3;
	else
		cont = cont+0;
		
	system("cls");
	
	// Armazenamento dos dados do paciente no sistema.
	
	fprintf(file,"|--------------------------------------|\n");
	fprintf(file,"|NOME: %s\n", nome);
	fprintf(file,"|--------------------------------------|\n");
	fprintf(file,"|IDADE: %d\n",idade);
	fprintf(file,"|--------------------------------------|\n");
	fprintf(file,"|CPF: %s\n",cpf);
	fprintf(file,"|--------------------------------------|\n");
	
	if (sexo == 1) {
		fprintf (file,"|SEXO: MASCULINO                       |\n");
		fprintf(file,"|--------------------------------------|\n");
	}
	else if (sexo == 2) {
		fprintf (file,"|SEXO: FEMININO                       |\n");
		fprintf(file,"|--------------------------------------|\n");
	}
	if (sexo==3) {
		fprintf(file,"|SEXO: N�O DECLARADO                   |\n");
		fprintf(file,"|--------------------------------------|\n");
	}
	
	printf("|-------------------------------------------------| \n");
	printf("|SEU RESULTADO FOI: %d pontos \n", cont);
	printf("|-------------------------------------------------| \n");
	  
	  
	  //Pontua��o para encaminhamento as alas hospitalares
	
	if ((cont > 0 && cont <= 9)) {  //De 0 at� 9
		printf("|VOCE VAI SER ENCAMINHADO PARA ALA DE: RISCO BAIXO| \n");
		printf("|-------------------------------------------------| \n");
		fprintf(file,"|VOCE VAI SER ENCAMINHADO PARA ALA DE: RISCO BAIXO| \n");
		fprintf(file,"|-------------------------------------------------| \n");
	}
	
	else if ((cont > 9 && cont <= 19)) {  //De 10 at� 19
		printf("|VOCE VAI SER ENCAMINHADO PARA ALA DE: RISCO M�DIO| \n");
		printf("|-------------------------------------------------| \n");
		fprintf(file,"|VOCE VAI SER ENCAMINHADO PARA ALA DE: RISCO M�DIO| \n");
		fprintf(file,"|-------------------------------------------------| \n");
	}
	
	else if (cont >= 20) {   //20 ou superior
		printf("|VOCE VAI SER ENCAMINHADO PARA ALA DE: RISCO ALTO | \n");
		printf("|-------------------------------------------------| \n");
		fprintf(file,"|VOCE VAI SER ENCAMINHADO PARA ALA DE: RISCO ALTO | \n");
		fprintf(file,"|-------------------------------------------------| \n");
	}


	system("pause");
	
	
	comeco2: printf("Op��o inexistente! \n");
	
	printf("Aperte 1 para novo cadastro ou 2 para encerrar: ");
	fflush(stdin);
	scanf("%d",&recomecar);
	system("cls");
	
	if (recomecar == 1){
		system("cls");
		fprintf(file,"|--------------|\n");
		fprintf(file,"|OUTRO PACIENTE|\n");
		fprintf(file,"|--------------|\n");
		goto comeco;
	}
	else if(recomecar == 2){
		printf("|---------|\n");
		printf("|Obrigado!| \n");
		printf("|---------|\n");
	}
	else if(recomecar != 2 && recomecar != 1){
		printf("Op��o inexistente! \n");
		system("cls");
		goto comeco2;

	}
	
	fclose(file);
		
}
