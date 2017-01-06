#include <stdio.h>
#include <math.h>

int main()

{
	int raio;
	double pi=3.14159,area;
	scanf("%d",&raio);
	area = (4/3.0)*pi*pow(raio,3);
	printf("VOLUME = %.3lf\n",area);
	
	return 0;
	
}