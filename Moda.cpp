#include <stdio.h>
int main()
{
int calificaciones[10],i,rango,mas_grande=0,valor_moda,calt=0,r;
int frec[10]={0};
float prom;

	printf("Digite los valores del arreglo:\n");

	for (i=0;i<10;i++)
	{
		scanf("%d",&calificaciones[i]);
		if(calificaciones[i]>10 || calificaciones[i]<0)
		{
		printf("La calificacion no puede ser mayor a 10 ni menor a 0");
		return 0;	
		}
	}

	for (i=0;i<10;i++)
	{
	frec[calificaciones[i]]++;
	}
	for (rango=1;rango<=10;rango++)
	{
		if (frec[rango]>mas_grande)
		{
		mas_grande=frec[rango];
		valor_moda=rango;
		}

	}

	printf("El valor moda es %d",valor_moda);
}
