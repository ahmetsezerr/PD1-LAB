#include <stdio.h>

int main ()
{
  int n1,n2, top=0;
  
  printf("sayi gir: ");
  scanf("%d", &n1);
  
  printf("sayi gir: ");
  scanf("%d", &n2);
  if (n1 > n2) {
  	for (n2; n2 <= n1; n2++) {
  		top=n2 + top;
	  }
  } else {
    for (n1; n1 <= n2; n1++){
    	top = n1 + top;
	}
  }
   printf("toplam:%d",top);
   return 0;
  }  
