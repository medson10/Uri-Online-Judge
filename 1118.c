#include <stdio.h>

int main()
{
	float n1,n2,media;
	int X;
	do
	{
		scanf("%f",&n1);
		scanf("%f",&n2);
		if(n1>= 0 && n1<=10)
			n1 = n1;
		else
		{
			printf("nota invalida\n");
			do{
				scanf("%f",&n1);
				if(n1 > 10 || n1 < 0)
					printf("nota invalida\n");
				
			}while(n1 > 10 || n1 < 0);
		} 
		if(n2>=0 && n2<=10)
			n2 = n2;
		else
		{
			printf("nota invalida\n");
			do{
				scanf("%f",&n2);
				if(n2 > 10 || n2 < 0)
					printf("nota invalida\n");
				
			}while(n2 > 10 || n2 < 0);
		} 
		media = (n1 + n2)/2;
		printf("media = %.2f\n",media);
		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%d",&X);
		while(X != 1 && X != 2)
		{
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d",&X);
		}
	}while(X == 1);
	
	return 0;	
}