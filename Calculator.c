#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	  setlocale(LC_ALL, "Turkish");
	  int sayi1,sayi2;
	  char islem;
	  
	  printf("1.Say�y� Giriniz!");
	  scanf("%d",&sayi1);
	  
	  printf("2.Say�y� Giriniz!");
	  scanf("%d",&sayi2);
	  
	  printf("I�lemi Giriniz!\n");
	  scanf("%s",&islem);
	  
	  switch(islem)
	  {
	  	case '+': printf("��lem De�eri:%d",(sayi1+sayi2));break;
	  	case '-': printf("��lem De�eri:%d",(sayi1-sayi2));break;
	  	case '*': printf("��lem De�eri:%d",(sayi1*sayi2));break;
	  	case '/': printf("��lem De�eri:%d",(sayi1/sayi2));break;
	  }
	return 0;
}

