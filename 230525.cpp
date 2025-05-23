#include <stdio.h>

#define FILAS 3
#define COLUMNAS 3

void mostrar_sumas(int matriz[FILAS][COLUMNAS]) {
	int i, j;
	
	// Sumas por fila
	printf("\nSuma de cada fila:\n");
	for (i = 0; i < FILAS; i++) {
		int sumaFila = 0;
		for (j = 0; j < COLUMNAS; j++) {
			sumaFila += matriz[i][j];
		}
		printf("Fila %d: %d\n", i + 1, sumaFila);
	}
	
	// Sumas por columna
	printf("\nSuma de cada columna:\n");
	for (j = 0; j < COLUMNAS; j++) {
		int sumaColumna = 0;
		for (i = 0; i < FILAS; i++) {
			sumaColumna += matriz[i][j];
		}
		printf("Columna %d: %d\n", j + 1, sumaColumna);
	}
}

int main() {
	int matriz[FILAS][COLUMNAS];
	int i, j;
	
	printf("Ingresá los elementos de la matriz 3x3:\n");
	for (i = 0; i < FILAS; i++) {
		for (j = 0; j < COLUMNAS; j++) {
			printf("Elemento (%d,%d): ", i + 1, j + 1);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	mostrar_sumas(matriz);
	
	return 0;
}
