#include <stdio.h>

int main()

{
	float n1,n2,n3,n4,exam,media;
	scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
	media = (n1 * 0.2)+(n2 * 0.3)+(n3 * 0.4)+(n4 * 0.1);
	if(media >= 7)
	{
		printf("Media: %.1f\n",media);
		printf("Aluno aprovado.\n");
	}
	if(media < 5)
	{
		printf("Media: %.1f\n",media);
		printf("Aluno reprovado.\n");
	}
	if(media >= 5 && media <= 6.9)
	{
		scanf("%f",&exam);
		printf("Media: %.1f\n",media);
		printf("Aluno em exame.\n");
		printf("Nota do exame: %.1f\n",exam);
		media = (media + exam)/2.0;
		if(media >= 5)
		{
			printf("Aluno aprovado.\n");
			printf("Media final: %.1f\n",media);
		}
		else
		{
			printf("Aluno reprovado.\n");
			printf("Media final: %.1f\n",media);
		}
	}
	return 0;
} 