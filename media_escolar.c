#include <stdio.h>

int main() {

float media , nota1 , nota2 ;

printf("Digite a primeira nota:");
	scanf(" %f", &nota1);
	
printf("Digite a segunda nota:");
	scanf(" %f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	printf("Media %.2f",media );
	
	if (media >= 7){
		printf ( "  Aprovado");
	}
	else if ( media >= 5){
		printf(" Recoperacao");
	}
	else{ printf("  Reprovado");
	}
    return 0;
}
