#include <stdio.h>
#include <string.h>

int main()
{
	char entrada[7];
	char one[] = "one",two[] = "two",three[] = "three";
	int soma1,soma2,soma3,n,cont;
	scanf("%d",&n);
	for(cont=0;cont<=n;cont++)
	{
		soma1 = 0;
		soma2 = 0;
		soma3 = 0;
		fgets(entrada,7,stdin);
		if(entrada[0] == 'o')
			soma1 = soma1 + 1;
		if(entrada[1] == 'n')
			soma1 = soma1 + 1;
		if(entrada[2] == 'e')
			soma1 = soma1 + 1;
		if(soma1 >= 2)
			printf("1\n");
		if(entrada[0] == 't')
			soma2 = soma2 + 1;
		if(entrada[1] == 'w')
			soma2 = soma2 + 1;
		if(entrada[2] == 'o')
			soma2 = soma2 + 1;
		if(soma2 >= 2)
			printf("2\n");
		if(entrada[0] == 't')
			soma3 = soma3 + 1;
		if(entrada[1] == 'h')
			soma3 = soma3 + 1;
		if(entrada[2] == 'r')
			soma3 = soma3 + 1;
		if(entrada[3] == 'e' )
			soma3 = soma3 + 1;
		if(entrada[4] == 'e')
			soma3 = soma3 + 1;
		if(soma3 >= 4)
			printf("3\n");
	}
	
	return 0;
	
}