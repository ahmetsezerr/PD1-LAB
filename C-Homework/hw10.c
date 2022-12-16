#include <stdio.h>
int main(){
	int a,b,c;
	printf("a:");
	scanf("%d",&a);
	
	printf("b:");
	scanf("%d",&b);
	
	printf("c:");
	scanf("%d",&c);
	if( a>b && a>c){
		printf("a en buyuk sayidir.");
	}
	else if(b>c && b>a){
		printf("b en buyuk sayidir");
	}
	else if (c>a && c>b){
		printf("c en buyuk sayidir");
	}
	
	
		
		
	
	
	
	
	
	
	
	
	
	return 0;
}
