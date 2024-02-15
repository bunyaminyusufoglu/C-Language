#include <stdio.h>
#include <stdlib.h>


	void dikdortgen(int uzun,int kisa){
		
		int i,j;
		printf("\n");
		for(i=0;i<kisa;i++)
		{
			for(j=0;j<uzun;j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}

	int main() {
		int uzun,kisa;
		printf("Uzun Kenari Girin: ");
		scanf("%d",&uzun);
		printf("Kisa Kenari Girin: "),
		scanf("%d",&kisa);
		dikdortgen(uzun,kisa);
	
		return 0;
	}
