#include <stdio.h>
#include <stdlib.h>

//doação de sangue
//n pode ter menos de 16
//n pode ter mais de 60
//n pode pesar menos q 51
int main(){
	int idade;
	float peso;
	printf("Informe sua idade: ");
	scanf("%i", &idade);
	if(idade >= 16 && idade < 60){
		printf("Informe seu peso: ");
		scanf("%f", &peso);
		if (peso>50){
			printf("Dirija-se ao guiche X para aa doacao\n");
			system("pause");}
		else{
			printf("\nCom %i anos voce ate poderia\nMas seu peso nao esta na faixa\n", idade);
			system("pause");
		}
	}
	else{
		printf("Com a sua idade(%i anos) nao e possivel doar sangue\n", idade);
		system("pause");
	}

}
