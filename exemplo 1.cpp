#include <stdio.h>
// faca um programa que receba 10 idades e armazene em um vetor. Mostre as idades em ordem crescente. Use ordenacão por seleção.
	
	void mostrar_vetor(int num[], int tam){
		for(int i=0; i<tam; i++){
			printf("%d\t", num[i]);
		}
		
		printf("\n");
	}	
	
	void selection_sort(int num[], int tam){
		int i,j, min, aux;
		
		for(i=0; i<tam; i++){
			min = i;
			
			
			for(j = (i+1); j<tam; j++){
				if(num[j] < num[min]){
					min = j;
				}
			}
			
			if(i!=min){
				aux = num[i];
				num[i] = num[min];
				num[min] = aux;
			}
		}
	}
	
	
	int main(){
		
		int idade[10];
		int r;
		
		for(int i = 0; i<10; i++){
			printf("Informe a idade: ");
			scanf("%d", &idade[i]);
		}
		
	
	selection_sort(idade, 10);
	mostrar_vetor (idade, 10);
		
		
		
		
	return 0;	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	

