#include <stdio.h>

int main(){
		int Array[5]={1,2,3,2,7};
		int Zähler=0, gesucht=0;
		printf("Bitte Suchzahl eingeben\n");
		scanf("%i",&gesucht);
		for(int i=0;i<=5;i++)
			{
				if(Array[i]==gesucht)
					{	
						Zähler++;
					}
				
			}
			printf("Ist %i mal vorhanden\n",Zähler);
return 0;
}

