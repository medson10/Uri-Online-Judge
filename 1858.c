#include <stdio.h>

int main()
{
	int n,t,cont,pes,men,mai;
	scanf("%d",&n);
	if(n>=1 && n<=100)
		for(cont=1;cont<=n;cont++)
		{
			scanf("%d",&t);
			if(t>=0 && t<= 20)
			{
				if(cont == 1)
				{
					men = t;
					pes = cont;
				}
				else
					if(men <= t)
						men = men;
					else
					{
						men = t;
						pes = cont;
					}
			}
		}
	printf("%d\n",pes);
	
	return 0;

}