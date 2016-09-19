#include <stdio.h>
#include <string.h>
char palindromo(char *palavra, int min, int max  )
{
	 if (max%2 != 0 )
	{
		 if(min == max)
		 {
		 	return 1;
		 }		
	}
	else
 	{
 		if (min > max)
 		{
 			return 1;
 		}
	}

	if (palavra[max] == palavra[min])
	{
		palindromo(palavra, min + 1, max - 1);		
	}
	else 
	{
		return 0;
	}
}


int main ()
{ 	
	int tam;
	char palavra[100];

	while (gets(palavra) != NULL )
	{
		tam = strlen(palavra) - 1;
		printf("%d\n", palindromo(palavra, 0, tam ) );
	}
	return 0;
}