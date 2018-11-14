#include<stdio.h>

int main(){
		
		   
			int *p;
			int tamanio, b;
			int vector[tamanio], i;
			
			printf("ingrese el tamaño del vector");
			scanf("%i",&tamanio);
			for (i=0;i<tamanio;i++){
				printf("ingrese el dato\n");
				scanf("%d",&b);
				vector[i]=b;
} 
			p = vector;		
			for(i=0;i<tamanio;i++){
			printf("%i ",*p);
			p++;
	}
 }

