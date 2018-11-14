#include<stdio.h>


 
int main(){
	int n;
	int otro;
	printf("ingrese un numero");
	scanf("%i",&n);
	otro= invertir(n);
	
	printf("invertido %i", invertir(n));
}

int invertir(int n){ 
int invertido; 
if(n<10){ 
invertido=n; 
}
else{ 
invertido=(n%10)*10+invertir(n/10); 
} 
return invertido; 
}

 
