#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	  setlocale(LC_ALL, "Turkish");
	  
	  int a,i;
	  a=1;
	  printf("Enter Number: ");
	  scanf("%d",&i);
	  
	  while(0<i)
	  {
	  	a=a*i;
	  	i--;
	  }
	  
	printf("%d",a);
	
	
	return 0;
}

