#include<stdio.h>

int main(void)
{
	int opcao, quant;
	float preco, ppp[3];
	
	
	printf("Digite a opcao de pesagem do produto \n1- Mg\t2- G\t3- Kg\n");
	printf("Resposta: ");
	scanf("%d", &opcao);
	
	printf("Digite a quantidade(peso): ");
	scanf("%d", &quant);
	
	printf("Digite o preco: ");
	scanf("%f", &preco);
	

	
	switch(opcao)
	{
		case 3:
			system("cls");
			
			ppp[0] = preco / quant; //KG
			ppp[1] = ppp[0] / 1000; //G
			ppp[2] = ppp[1] / 1000; //MG
			
			printf("Preco total a pagar: %.2f\n", preco);
	
			printf("preco por quilo: %.2f\n", ppp[0]);
			
			printf("preco por grama: %.3f\n", ppp[1]);
		
			printf("preco por miligrama: %f\n", ppp[2]);
			
		break;
		
		case 2:

			system("cls");
			
			ppp[0] = preco / quant; //G
			ppp[1] = ppp[0] * 1000; //KG
			ppp[2] = ppp[0] / 1000; //MG
			
			printf("Preco total a pagar: %.2f\n", preco);
				
			printf("preco por quilo: %.2f\n", ppp[1]);
			
			printf("preco por grama: %.2f\n", ppp[0]);
			
			printf("preco por miligrama: %.3f\n", ppp[2]);
	
		break;	
		
		case 1:
			system("cls");
			
			ppp[0] = preco / quant; //MG
			ppp[1] = ppp[0] * 1000; //G
			ppp[2] = ppp[1] * 1000; //KG
			
			printf("Preco total a pagar: %.2f\n", preco);
				
			printf("preco por quilo: %.2f\n", ppp[2]);
			
			printf("preco por grama: %.2f\n", ppp[1]);
			
			printf("preco por miligrama: %.2f\n", ppp[0]);
			
		break;
		
			
	}
}
