#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int idade, anos, meses, dias;
	
	scanf ("%d", &idade);
	
	anos = idade / 365;
	meses = (idade % 365) / 30;
	dias = (idade % 365) % 30;
	
	
	printf ("%d ano(s)\n", anos);
	printf ("%d mes(es)\n", meses);
	printf ("%d dia(s)\n", dias);
	
	system ("pause");
}
