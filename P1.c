/* P1.c */
/* Igor_Olympio_França */
/* 11721EEL021 */

#include <stdio.h>

int main()
{
	int estado = 0, i = 0;
	char bits[256];
	
	printf("Digite um valor para a sequencia: ");
	scanf("%s", bits);

	for(i=0; bits[i] != '\0'; i++)
	{
		if(estado == 0 && bits[i]== '0')
		{
			estado = 0;
		}
		else if(estado == 0 && bits[i] == '1')
		{
			estado = 1;
		}
		else if(estado == 1 && bits[i] == '0')
		{
			estado = 2;
		}
		else if(estado == 1 && bits[i] == '1')
		{
			estado = 0;
		}
		else if(estado == 2 && bits[i] == '0')
		{
			estado = 1;
		}
		else if(estado == 2 && bits[i] == '1')
		{
			estado = 2;
		}
	}
	
	printf("\nSequencia digitada: %s ",bits);
	printf("\nEstado final da sequencia: %i",estado);
	
	if(estado == 0)
	{
		printf("\nMultiplo de 3. ");
	}
	else
	{
		printf("\nNao multiplo de 3.");
	}
	
	return 0;

}
