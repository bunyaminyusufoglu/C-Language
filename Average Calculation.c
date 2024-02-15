#include <stdio.h>
#include <stdlib.h>


int main() {
	
	float a=1,n=0,toplam=0,ort;
	
	while(a!=0)	
	{
		printf("Sayi Giriniz: ");
	    scanf("%f",&a);
		toplam=toplam+a;
		n++;
	}
	ort=toplam/(n-1);
	printf("Girdiginiz %.0f Sayinin Ortalamasi: %f",n-1,ort);
	
	return 0;
}
