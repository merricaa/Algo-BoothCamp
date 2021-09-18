#include <stdio.h>
int main() {
	
			
		int l;
		int b;
		int area;
		int peri;
		scanf("%d %d",&l,&b);
		area= l*b;
		peri= (l+b)*2;
		 
		if(area > peri)
		{
			
			printf("Area\n");
			printf("%d",area);
		}
		else if(peri> area)
		{
			printf("Peri\n");
			printf("%d",peri);
		}
		else {
			printf("Eq\n");
	
		}
	
		
				
		
	return 0;
}
