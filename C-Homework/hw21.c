#include <stdio.h>
int main(){
	
	int a,ilkbasamak;
	
	printf("Bir sayi gir:");
	scanf("%d",&a);
	
	ilkbasamak= a % 10;
	 
	while (a > 9){
	    a = a / 10;	    
	} 
	printf(" son basamak %d\n",a);
	printf("ilk basamak:%d",ilkbasamak);
	
	
	
	
	
	
	
	
	return 0;
}
