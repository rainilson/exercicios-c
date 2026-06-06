#include <stdio.h>

int main() {

int idade ;
	
	printf("[ CLASIFICACAO POR IDADE ]\n");
	
	printf("\n Digite uma idade:");
	scanf("%d", &idade);
	
	


if (idade <=12 ){
	printf("\ncrianca");
}
	
	else if( idade <=17){
	printf("\nadolescente");
}

else{

printf("\nadulto");
}
	 
    return 0;
}
