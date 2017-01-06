#include <stdio.h>

int main()

{
	int num,cont,S,teste,cont2;
	scanf("%d",&teste);
	for (cont=1;cont<=teste;cont++)
		{
			S= 0;
			scanf("%d",&num);
			for(cont2=1;cont2<=num;cont2++)
			{
				if(cont2 % 2 == 0)
					S = S - 1;
				else
					S = S + 1;
			}
			printf("%d\n",S);
		}
	return 0;
}