#include <stdio.h>
#include <string.h>

int main()

{
	int cont,vezes;
	char s[10],r[10];
	char Spock[] = "Spock",pedra[] = "pedra",papel[] = "papel",tesoura[] = "tesoura",lagarto[] = "lagarto";
	scanf("%d",&vezes);
	for(cont=1;cont<=vezes;cont++)
	{
		scanf("%s %s",s,r);
		if(strcmp(s,pedra) == 0 && strcmp(r,tesoura) == 0)
			printf("Caso #%d: Bazinga!\n",cont);
		if(strcmp(s,papel) == 0 && strcmp(r,pedra) == 0)
			printf("Caso #%d: Bazinga!\n",cont);
		if(strcmp(s,tesoura) == 0 && strcmp(r,papel) == 0)
			printf("Caso #%d: Bazinga!\n",cont);
		if(strcmp(s,pedra) == 0 && strcmp(r,lagarto) == 0)
			printf("Caso #%d: Bazinga!\n",cont);
		if(strcmp(s,lagarto) == 0 && strcmp(r,Spock) == 0)
			printf("Caso #%d: Bazinga!\n",cont);
		if(strcmp(s,Spock) == 0 && strcmp(r,tesoura) == 0)
			printf("Caso #%d: Bazinga!\n",cont);
		if(strcmp(s,tesoura) == 0 && strcmp(r,lagarto) == 0)
			printf("Caso #%d: Bazinga!\n",cont);
		if(strcmp(s,lagarto) == 0 && strcmp(r,papel) == 0)
			printf("Caso #%d: Bazinga!\n",cont);
		if(strcmp(s,papel) == 0 && strcmp(r,Spock) == 0)
			printf("Caso #%d: Bazinga!\n",cont);
		if(strcmp(s,Spock) == 0 && strcmp(r,pedra) == 0)
			printf("Caso #%d: Bazinga!\n",cont);
		if(strcmp(r,pedra) == 0 && strcmp(s,tesoura) == 0)
			printf("Caso #%d: Raj trapaceou!\n",cont);
		if(strcmp(r,papel) == 0 && strcmp(s,pedra) == 0)
			printf("Caso #%d: Raj trapaceou!\n",cont);
		if(strcmp(r,tesoura) == 0 && strcmp(s,papel) == 0)
			printf("Caso #%d: Raj trapaceou!\n",cont);
		if(strcmp(r,pedra) == 0 && strcmp(s,lagarto) == 0)
			printf("Caso #%d: Raj trapaceou!\n",cont);
		if(strcmp(r,lagarto) == 0 && strcmp(s,Spock) == 0)
			printf("Caso #%d: Raj trapaceou!\n",cont);
		if(strcmp(r,Spock) == 0 && strcmp(s,tesoura) == 0)
			printf("Caso #%d: Raj trapaceou!\n",cont);
		if(strcmp(r,tesoura) == 0 && strcmp(s,lagarto) == 0)
			printf("Caso #%d: Raj trapaceou!\n",cont);
		if(strcmp(r,lagarto) == 0 && strcmp(s,papel) == 0)
			printf("Caso #%d: Raj trapaceou!\n",cont);
		if(strcmp(r,papel) == 0 && strcmp(s,Spock) == 0)
			printf("Caso #%d: Raj trapaceou!\n",cont);
		if(strcmp(r,Spock) == 0 && strcmp(s,pedra) == 0)
			printf("Caso #%d: Raj trapaceou!\n",cont);
		if(strcmp(s,r) == 0)
			printf("Caso #%d: De novo!\n",cont);
	}
	
	return 0;
}