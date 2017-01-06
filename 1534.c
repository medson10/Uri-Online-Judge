#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()

{
	int col,lin;
	int matriz[68][68],cont,tam,cont2;
	scanf("%d",&tam);
	while(scanf("%d",&tam) !=EOF))
	{
		col = tam;
		lin = tam;
		if(tam >= 3 && tam <= 69)
			for(cont=1;cont<=lin;cont++)
			{
				for(cont2=1;cont2<=col;cont2++)
				{
					if(cont == cont2)
						matriz[cont][cont2] = 1;
					else
						if(cont2 + cont == tam + 1 )
							matriz[cont][cont2] = 2;
						else
							matriz[cont][cont2] = 3;
					if(cont2 == col)
						printf("%d\n",matriz[cont][cont2]);
					else
						printf("%d",matriz[cont][cont2]);
				}
			}
		scanf("%d",&tam);
	}
	return 0;
}