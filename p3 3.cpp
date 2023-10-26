#include <stdio.h>

int main()
{
	int sisialas, sisitinggi, sisimiringa, sisimiring;
	
	sisialas = 12;
	sisitinggi = 6;
	sisimiringa = (sisialas * sisialas) + (sisitinggi *sisitinggi);
	sisimiring = sisimiringa / 2;
	
	printf("Sisialas = %icm", sisialas);
	printf("\nSisiTinggi = %icm", sisitinggi);
	printf("\nSisimiring2 = SA x SA + ST x ST");
	printf("\nSisimiring2 = %icm", sisimiringa);
	printf("\nSisimiring = %icm", sisimiring);
	return0;
}