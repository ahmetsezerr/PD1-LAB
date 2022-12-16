#include <stdio.h>
int main(){
	
	int a,b,control,max,min;
	
	printf("a gir:");
	scanf("%d",&a);
	
	printf("b gir:");
	scanf("%d",&b);
	
	printf("kontrol sayisi:");
	scanf("%d",&control);
	
	if (a > b){
		max = a;
		min = b;
		
	 }  else {
	 
		    max = b;
			min = a;
		}
			
			
	
	for (min; min <= max; min++){
	 	if (min % control == 0){
			printf("%d\n",min);
		}
	}
	
	
	return 0;
}
