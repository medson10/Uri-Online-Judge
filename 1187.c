#include <stdio.h>

int main()

{
	char op;
	double matriz[12][12];
	double soma,media;
	int lin,col,cont,cont2;
	soma = 0;
	cont = 1;
	cont2 = 10;
	op = getchar();
	for(lin=0;lin<=4;lin++)
	{
		for(col=cont;col<=cont2;col++)
			scanf("%lf",&matriz[lin][col]);
		
		cont = cont + 1;
		cont2 = cont2 - 1;
	}
	for(lin=0;lin<=4;lin++)
	{
		for(col=cont;col<=cont2;col++)
			soma = soma + matriz[lin][col];
		
		cont = cont + 1;
		cont2 = cont2 - 1;
	}
	if(op == 'M')
	{
		media = soma/30.0;
		printf("%.1lf\n",media);
	}
	if(op == 'S')
		printf("%.1lf\n",soma);
	return 0;
}