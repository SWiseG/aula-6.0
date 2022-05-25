#include<stdio.h>
#include<conio.h>

int main(){
	int i;
	float notas[5] = {7, 8, 9.5, 9.9, 5.2};
	
	printf("Exibindo os valores do Vetor \n\n");
	
	for(i=0; i<=4;i++){
		print("notas[%d] = %.1f\n", i, notas[i]);
		
	}
	getch();
	return 0;
	
}

