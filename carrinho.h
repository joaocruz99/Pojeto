#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>


struct mbway_t
{
	int numerotlf;
};
typedef struct mbway_t mbway;

struct numerario_t
{
	float troco;

};
typedef struct numerario_t numerario;

struct pagamento_t
{
	mbway mbwayc1;
	numerario numerarioc1;
};
typedef struct pagamento_t pagamento;


void troco_f(float troco1) {

	int troco, n_500, m_100, m_200, m_50, m_20, m_10, m_5, m_2, m_1;

	troco = troco1 * 100;

	n_500 = troco / 500;
	troco = troco % 500;

	m_200 = troco / 200;
	troco = troco % 200;

	m_100 = troco / 100;
	troco = troco % 100;

	m_50 = troco / 50;
	troco = troco % 50;

	m_20 = troco / 20;
	troco = troco % 20;

	m_10 = troco / 10;
	troco = troco % 10;

	m_5 = troco / 5;
	troco = troco % 5;

	m_2 = troco / 2;
	troco = troco % 2;

	m_1 = troco / 1;
	troco = troco % 1;

	printf("Troco:\n%d --> 5\n%d --> 2\n%d --> 1\n%d --> 0.50\n%d --> 0.20\n%d --> 0.10\n%d --> 0.05 \n%d --> 0.02\n%d --> 0.01\n", n_500, m_200, m_100, m_50, m_20, m_10, m_5, m_2, m_1);

}

void Metodo_Pagamento(int met_pag) {

	pagamento a1;

	switch (met_pag)
	{
	case 1:   //NUMERARIO

		printf("Introduza o numerario em moedas:\t");
		scanf("%f", &a1.numerarioc1.troco);
		printf("\n");
		troco_f(a1.numerarioc1.troco);

		break;

	case 2:   //MBWAY
		printf("Introduza o seu numero de telemovel:\t");
		scanf("%d", &a1.mbwayc1.numerotlf);
		if (a1.mbwayc1.numerotlf >= 900000000 && a1.mbwayc1.numerotlf <= 999999999) {

			for (int i = 0; i < 4; i++)
			{
				system("cls");
				printf("A processar ...");
				Sleep(1200);
				system("cls");
			}
			printf("-----Transacao concluida-----");
		}
		else
		{
			printf("ERRO");
		}
		break;

	default:
		printf("Error! Metodo de pagamento incorreto!");
	}
}

void MenuPagamento() {
	printf("----> Metodos de Pagamento <----\n\n");
	printf("'1' ---  Numerario\n");
	printf("'2' ---  MB WAY\n");
	printf("\n");
	printf("--------------------------------");
}

int main(void) {

	int met_pag;
	MenuPagamento();
	printf("\nEscolha: ");
	scanf("%d", &met_pag);
	Metodo_Pagamento(met_pag);

	return 0;
}


/*int main() {
	char car;
	int dia = 0, mes = 0, ano = 0;
	printf("Introduza a data:\n");
//	scanf("%d%*c%d%*c%d", &dia, &mes, &ano); sem barras
	scanf("%d%c%d%c%d", &dia, &car, &mes, &car, &ano);  //com barras
	
	printf("%d", dia);
	printf("%c", car);
	printf("%d", mes);
	printf("%c", car);
	printf("%d", ano);
	
	
	return 0;
}*/