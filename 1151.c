#include <stdio.h>

int main()

{
	int n,fib,cont,ant,pos;
	scanf("%d",&n);
	ant = 1;
	pos = 1;
	for(cont=1;cont<=n;cont++)
	{
		
		if(cont == 1)
			printf("0 ");
		else
			if(cont == 2 || cont == 3)
				printf("1 ");
			if(cont >= 4)
			{
				fib = ant + pos; 
				ant = pos;
				pos = fib;
				if(cont == n)
					printf("%d\n",fib);
				else
					printf("%d ",fib);
				
			}
	}
	return 0;
	
}