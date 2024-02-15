#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i,j,k,a,b;
	
	printf("Sayi giriniz: ");
	scanf("%d",&i);
	for(j=1;j<=i;j++)
	{
		for(a=1;a<=i-j;a++)
		{
			printf(" ");
		}
		for(b=1;b<j;b++)
		{
			printf("*");
		}
		for(k=1;k<=j;k++)
		{
		printf("*");
	    }
	    printf("\n");
	}
	
	return 0;
}
