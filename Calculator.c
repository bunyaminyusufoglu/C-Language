#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	  setlocale(LC_ALL, "Turkish");
	  int sayi1,sayi2;
	  char islem;
	  
	  printf("1.Sayýyý Giriniz!");
	  scanf("%d",&sayi1);
	  
	  printf("2.Sayýyý Giriniz!");
	  scanf("%d",&sayi2);
	  
	  printf("Iþlemi Giriniz!\n");
	  scanf("%s",&islem);
	  
	  switch(islem)
	  {
	  	case '+': printf("Ýþlem Deðeri:%d",(sayi1+sayi2));break;
	  	case '-': printf("Ýþlem Deðeri:%d",(sayi1-sayi2));break;
	  	case '*': printf("Ýþlem Deðeri:%d",(sayi1*sayi2));break;
	  	case '/': printf("Ýþlem Deðeri:%d",(sayi1/sayi2));break;
	  }
	return 0;
}

