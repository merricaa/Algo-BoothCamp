#include <stdio.h>
int main(){
	
	char c;
	scanf("%c",&c);
	if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ){
		printf("Vowell");
	}
	else
	{
		printf("Consonant");	
	}
	
	
	
	return 0;
	
}
