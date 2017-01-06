#include <stdio.h>
#include <string.h>

int main()

{
	int cont,vezes;
	char s[10],r[10];
	char Spock[] = "spock",pedra[] = "pedra",papel[] = "papel",tesoura[] = "tesoura",lagarto[] = "lagarto";
	scanf("%d",&vezes);
	for(cont=1;cont<=vezes;cont++)
	{
		scanf("%s %s",s,r);
		if(strcmp(s,pedra) == 0 && strcmp(r,tesoura) == 0)
			printf("rajesh\n");
		if(strcmp(s,papel) == 0 && strcmp(r,pedra) == 0)
			printf("rajesh\n");
		if(strcmp(s,tesoura) == 0 && strcmp(r,papel) == 0)
			printf("rajesh\n");
		if(strcmp(s,pedra) == 0 && strcmp(r,lagarto) == 0)
			printf("rajesh\n");
		if(strcmp(s,lagarto) == 0 && strcmp(r,Spock) == 0)
			printf("rajesh\n");
		if(strcmp(s,Spock) == 0 && strcmp(r,tesoura) == 0)
			printf("rajesh\n");
		if(strcmp(s,tesoura) == 0 && strcmp(r,lagarto) == 0)
			printf("rajesh\n");
		if(strcmp(s,lagarto) == 0 && strcmp(r,papel) == 0)
			printf("rajesh\n");
		if(strcmp(s,papel) == 0 && strcmp(r,Spock) == 0)
			printf("rajesh\n");
		if(strcmp(s,Spock) == 0 && strcmp(r,pedra) == 0)
			printf("rajesh\n");
		if(strcmp(r,pedra) == 0 && strcmp(s,tesoura) == 0)
			printf("sheldon\n");
		if(strcmp(r,papel) == 0 && strcmp(s,pedra) == 0)
			printf("sheldon\n");
		if(strcmp(r,tesoura) == 0 && strcmp(s,papel) == 0)
			printf("sheldon\n");
		if(strcmp(r,pedra) == 0 && strcmp(s,lagarto) == 0)
			printf("sheldon\n");
		if(strcmp(r,lagarto) == 0 && strcmp(s,Spock) == 0)
			printf("sheldon\n");
		if(strcmp(r,Spock) == 0 && strcmp(s,tesoura) == 0)
			printf("sheldon\n");
		if(strcmp(r,tesoura) == 0 && strcmp(s,lagarto) == 0)
			printf("sheldon\n");
		if(strcmp(r,lagarto) == 0 && strcmp(s,papel) == 0)
			printf("sheldon\n");
		if(strcmp(r,papel) == 0 && strcmp(s,Spock) == 0)
			printf("sheldon\n");
		if(strcmp(r,Spock) == 0 && strcmp(s,pedra) == 0)
			printf("sheldon\n");
		if(strcmp(s,r) == 0)
			printf("empate\n");
	}
	
	return 0;
}