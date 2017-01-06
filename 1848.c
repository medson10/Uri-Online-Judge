#include <stdio.h>

int main()

{
	char olhos[10];
	char um[] = "--*",dois[] = "-*-",tres[] = "-**",quatro[] = "*--",cinco[] = "*-*",seis[] = "**-",sete[] = "***",fim[] = "caw caw";
	int soma,cont;
	for(cont=1;cont<=3;cont = cont + 0)
	{
		gets(olhos);
		if(strcmp(olhos, um) == 0)
			soma = soma + 1;
		if(strcmp(olhos, dois) == 0)
			soma = soma + 2;
		if(strcmp(olhos, tres) == 0)
			soma = soma + 3;
		if(strcmp(olhos, quatro) == 0)
			soma = soma + 4;
		if(strcmp(olhos, cinco) == 0)
			soma = soma + 5;
		if(strcmp(olhos, seis) == 0)
			soma = soma + 6;
		if(strcmp(olhos,sete) == 0)
			soma = soma + 7;
		if(strcmp(olhos, fim) == 0)
		{
			printf("%d\n",soma);
			soma = 0;
			cont = cont + 1;
		
		}
	}
	
	return 0;
}