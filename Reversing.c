#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int sayi,a,b,c;
	
	printf("Sayi Giriniz: ");
	scanf("%d",&sayi);
	
	a=sayi/100;
	b=(sayi/10)%10;
	c=sayi%10;
	
	printf("%d%d%d",c,b,a);
	return 0;
}
