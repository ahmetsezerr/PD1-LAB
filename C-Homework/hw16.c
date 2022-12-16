#include <stdio.h>
int main(){
	int i,a,top=0;
	for(i=1000;i<=2000;i=i+1){
		if (i%2==0) {
			top = top + i;
		}
	}
	printf("%d\n",top);
	
	
	
	
	return 0;
}
