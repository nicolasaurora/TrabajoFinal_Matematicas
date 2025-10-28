#include <stdio.h>
#include <stdlib.h>
#define MAX 10


void mostrarMenu();
int ingresarDimension(char* texto);
int ingresarTipoNumero();
void cargarMatrizEntera(int matriz[MAX][MAX], int filas, int columnas, int numeroMatriz);
void cargarMatrizDecimal(float matriz[MAX][MAX], int filas, int columnas, int numeroMatriz);
void mostrarMatrizEntera(int matriz[MAX][MAX], int filas, int columnas);
void mostrarMatrizDecimal(float matriz[MAX][MAX], int filas, int columnas);
void sumarMatricesEnteras(int matriz1[MAX][MAX], int matriz2[MAX][MAX], int resultado[MAX][MAX], int filas, int columnas);
void sumarMatricesDecimales(float matriz1[MAX][MAX], float matriz2[MAX][MAX], float resultado[MAX][MAX], int filas, int columnas);
void restarMatricesEnteras(int matriz1[MAX][MAX], int matriz2[MAX][MAX], int resultado[MAX][MAX], int filas, int columnas);
void restarMatricesDecimales(float matriz1[MAX][MAX], float matriz2[MAX][MAX], float resultado[MAX][MAX], int filas, int columnas);
void multiplicarMatricesEnteras(int matriz1[MAX][MAX], int matriz2[MAX][MAX], int resultado[MAX][MAX], int filas1, int columnas1, int columnas2);
void multiplicarMatricesDecimales(float matriz1[MAX][MAX], float matriz2[MAX][MAX], float resultado[MAX][MAX], int filas1, int columnas1, int columnas2);
void inicializarMatrizEntera(int matriz[MAX][MAX], int filas, int columnas, int valor);
void inicializarMatrizDecimal(float matriz[MAX][MAX], int filas, int columnas, float valor);
void matrizIdentidadEntera(int matriz[MAX][MAX], int dimension);
void matrizIdentidadDecimal(float matriz[MAX][MAX], int dimension);
void multiplicarPorEscalarEnteroInt(int matriz[MAX][MAX], int resultado[MAX][MAX], int filas, int columnas, int escalar);
void multiplicarPorEscalarEnteroFloat(int matriz[MAX][MAX], float resultado[MAX][MAX], int filas, int columnas, float escalar);
void multiplicarPorEscalarDecimalInt(float matriz[MAX][MAX], float resultado[MAX][MAX], int filas, int columnas, int escalar);
void multiplicarPorEscalarDecimalFloat(float matriz[MAX][MAX], float resultado[MAX][MAX], int filas, int columnas, float escalar);

int main() {
    
    int opcion, tipoDeNumero, tipoDeNumeroMatriz, potenciaMatriz;
    int filasMatriz1, columnasMatriz1, filasMatriz2, columnasMatriz2;
    int matriz1[MAX][MAX], matriz2[MAX][MAX], matrizResultado[MAX][MAX];
    float matriz1Decimal[MAX][MAX], matriz2Decimal[MAX][MAX], matrizResultadoDecimal[MAX][MAX];
    int numeroEntero;
    float numeroDecimal;
    
        do {
        mostrarMenu();
        scanf("%d", &opcion);
        
        switch(opcion) {
            
            case 1: 
            printf("\nAhora debe ingresar la dimension de ambas matrices\n");
            
            do {
                filasMatriz1 = ingresarDimension("\nIngrese la cantidad de filas de la matriz 1: \n");
                columnasMatriz1 = ingresarDimension("\nIngrese la cantidad de columnas de la matriz 1: \n");
                filasMatriz2 = ingresarDimension("\nIngrese la cantidad de filas de la matriz 2: \n");
                columnasMatriz2 = ingresarDimension("\nIngrese la cantidad de columnas de la matriz 2: \n");
            
                if (filasMatriz1 != filasMatriz2 || columnasMatriz1 != columnasMatriz2) {
                    printf("\nLa dimension ingresada de las matrices no coinciden.\n");
                } else {
                    tipoDeNumeroMatriz = ingresarTipoNumero();

                    if (tipoDeNumeroMatriz == 1) {
                        cargarMatrizEntera(matriz1, filasMatriz1, columnasMatriz1, 1);
                        cargarMatrizEntera(matriz2, filasMatriz2, columnasMatriz2, 2);
                        sumarMatricesEnteras(matriz1, matriz2, matrizResultado, filasMatriz1, columnasMatriz1);
                        printf("\nResultado: \n");
                        mostrarMatrizEntera(matrizResultado, filasMatriz1, columnasMatriz1);
                    } else {
                        cargarMatrizDecimal(matriz1Decimal, filasMatriz1, columnasMatriz1, 1);
                        cargarMatrizDecimal(matriz2Decimal, filasMatriz2, columnasMatriz2, 2);
                        sumarMatricesDecimales(matriz1Decimal, matriz2Decimal, matrizResultadoDecimal, filasMatriz1, columnasMatriz1);
                        printf("\nResultado: \n");
                        mostrarMatrizDecimal(matrizResultadoDecimal, filasMatriz1, columnasMatriz1);
                    }
                }
            } while (filasMatriz1 != filasMatriz2 || columnasMatriz1 != columnasMatriz2);
            break;

            case 2: 
            printf("\nAhora debe ingresar la dimension de ambas matrices\n");
            
            do {
                filasMatriz1 = ingresarDimension("\nIngrese la cantidad de filas de la matriz 1: \n");
                columnasMatriz1 = ingresarDimension("\nIngrese la cantidad de columnas de la matriz 1: \n");
                filasMatriz2 = ingresarDimension("\nIngrese la cantidad de filas de la matriz 2: \n");
                columnasMatriz2 = ingresarDimension("\nIngrese la cantidad de columnas de la matriz 2: \n");
            
                if (filasMatriz1 != filasMatriz2 || columnasMatriz1 != columnasMatriz2) {
                    printf("\nLa dimension ingresada de las matrices no coinciden.\n");
                } else {
                    tipoDeNumeroMatriz = ingresarTipoNumero();

                    if (tipoDeNumeroMatriz == 1) {
                        cargarMatrizEntera(matriz1, filasMatriz1, columnasMatriz1, 1);
                        cargarMatrizEntera(matriz2, filasMatriz2, columnasMatriz2, 2);
                        restarMatricesEnteras(matriz1, matriz2, matrizResultado, filasMatriz1, columnasMatriz1);
                        printf("\nResultado: \n");
                        mostrarMatrizEntera(matrizResultado, filasMatriz1, columnasMatriz1);
                    } else {
                        cargarMatrizDecimal(matriz1Decimal, filasMatriz1, columnasMatriz1, 1);
                        cargarMatrizDecimal(matriz2Decimal, filasMatriz2, columnasMatriz2, 2);
                        restarMatricesDecimales(matriz1Decimal, matriz2Decimal, matrizResultadoDecimal, filasMatriz1, columnasMatriz1);
                        printf("\nResultado: \n");
                        mostrarMatrizDecimal(matrizResultadoDecimal, filasMatriz1, columnasMatriz1);
                    }
                }
            } while (filasMatriz1 != filasMatriz2 || columnasMatriz1 != columnasMatriz2);
            break;
            
            case 3: 
            printf("\nAhora debe ingresar la dimension de ambas matrices\n");
            
            do {
                filasMatriz1 = ingresarDimension("\nIngrese la cantidad de filas de la matriz 1: \n");
                columnasMatriz1 = ingresarDimension("\nIngrese la cantidad de columnas de la matriz 1: \n");
                filasMatriz2 = ingresarDimension("\nIngrese la cantidad de filas de la matriz 2: \n");
                columnasMatriz2 = ingresarDimension("\nIngrese la cantidad de columnas de la matriz 2: \n");
            
                if (columnasMatriz1 != filasMatriz2) {
                    printf("\nLa dimension ingresada de las matrices no son validas, la cantidad de columnas de la matriz 1 debe ser igual a la cantidad de filas de la matriz 2.\n");
                } else {
                    tipoDeNumeroMatriz = ingresarTipoNumero();

                    if (tipoDeNumeroMatriz == 1) {
                        cargarMatrizEntera(matriz1, filasMatriz1, columnasMatriz1, 1);
                        cargarMatrizEntera(matriz2, filasMatriz2, columnasMatriz2, 2);
                        inicializarMatrizEntera(matrizResultado, filasMatriz1, columnasMatriz2, 0);
                        multiplicarMatricesEnteras(matriz1, matriz2, matrizResultado, filasMatriz1, columnasMatriz1, columnasMatriz2);
                        printf("\nResultado: \n");
                        mostrarMatrizEntera(matrizResultado, filasMatriz1, columnasMatriz2);
                    } else {
                        cargarMatrizDecimal(matriz1Decimal, filasMatriz1, columnasMatriz1, 1);
                        cargarMatrizDecimal(matriz2Decimal, filasMatriz2, columnasMatriz2, 2);
                        inicializarMatrizDecimal(matrizResultadoDecimal, filasMatriz1, columnasMatriz2, 0);
                        multiplicarMatricesDecimales(matriz1Decimal, matriz2Decimal, matrizResultadoDecimal, filasMatriz1, columnasMatriz1, columnasMatriz2);
                        printf("\nResultado: \n");
                        mostrarMatrizDecimal(matrizResultadoDecimal, filasMatriz1, columnasMatriz2);
                    }
                }
            } while (columnasMatriz1 != filasMatriz2);
            break;
            
            case 4: 
            do {
                filasMatriz1 = ingresarDimension("\nIngrese la cantidad de filas de la matriz: \n");
                columnasMatriz1 = ingresarDimension("\nIngrese la cantidad de columnas de la matriz: \n");

                if (filasMatriz1 == columnasMatriz1) {
                    tipoDeNumeroMatriz = ingresarTipoNumero();

                    if (tipoDeNumeroMatriz == 1) {
                        cargarMatrizEntera(matriz1, filasMatriz1, columnasMatriz1, 1);
                        
                        printf("\nIngrese a que numero desea elevar la matriz: \n");
                        scanf("%d", &potenciaMatriz);
                        
                        if (potenciaMatriz == 0) {
                            matrizIdentidadEntera(matrizResultado, filasMatriz1);
                        } else {
                            inicializarMatrizEntera(matrizResultado, filasMatriz1, columnasMatriz1, 0);
                            multiplicarMatricesEnteras(matriz1, matriz1, matrizResultado, filasMatriz1, columnasMatriz1, columnasMatriz1);
                        }

                        printf("\nResultado: \n");
                        mostrarMatrizEntera(matrizResultado, filasMatriz1, columnasMatriz1);

                    } else {
                        cargarMatrizDecimal(matriz1Decimal, filasMatriz1, columnasMatriz1, 1);
                        
                        printf("\nIngrese a que numero desea elevar la matriz: \n");
                        scanf("%d", &potenciaMatriz);
                        
                        if (potenciaMatriz == 0) {
                            matrizIdentidadDecimal(matrizResultadoDecimal, filasMatriz1);
                        } else {
                            inicializarMatrizDecimal(matrizResultadoDecimal, filasMatriz1, columnasMatriz1, 0);
                            multiplicarMatricesDecimales(matriz1Decimal, matriz1Decimal, matrizResultadoDecimal, filasMatriz1, columnasMatriz1, columnasMatriz1);
                        }

                        printf("\nResultado: \n");
                        mostrarMatrizDecimal(matrizResultadoDecimal, filasMatriz1, columnasMatriz1);
                    }
                    
                } else {
                    printf("\nLa matriz ingresada debe ser cuadrada.\n");
                }
                
            } while (filasMatriz1 != columnasMatriz1);
            break;
            
            case 5: 
            do {
                printf("\nIngrese la cantidad de filas de la matriz: \n");
                scanf("%d", &filasMatriz1);
                printf("\nIngrese la cantidad de columnas: \n");
                scanf("%d", &columnasMatriz1);
                if (filasMatriz1 <= 0 || columnasMatriz1 <= 0) {
                    printf("\nLa cantidad de filas y columnas debe ser mayor a 0.\n");
                }
            } while (filasMatriz1 <= 0 || columnasMatriz1 <= 0);

            tipoDeNumeroMatriz = ingresarTipoNumero();

            if (tipoDeNumeroMatriz == 1) {
                cargarMatrizEntera(matriz1, filasMatriz1, columnasMatriz1, 0);

                do {    
                    printf("\nQue valor de escalar desea elegir?\n");
                    printf("\n1. Numero entero.\n");
                    printf("\n2. Numero decimal.\n");
                    scanf("%d", &tipoDeNumero);

                    if (tipoDeNumero < 1 || tipoDeNumero > 2) {
                        printf("\nSeleccione una opcion valida.\n");
                    }
                } while (tipoDeNumero < 1 || tipoDeNumero > 2);

                printf("\nIngrese el valor del escalar: \n");

                if (tipoDeNumero == 1) {
                    scanf("%d", &numeroEntero);
                    multiplicarPorEscalarEnteroInt(matriz1, matrizResultado, filasMatriz1, columnasMatriz1, numeroEntero);
                    printf("\nResultado: \n");
                    mostrarMatrizEntera(matrizResultado, filasMatriz1, columnasMatriz1);
                } else {
                    scanf("%f", &numeroDecimal);
                    multiplicarPorEscalarEnteroFloat(matriz1, matrizResultadoDecimal, filasMatriz1, columnasMatriz1, numeroDecimal);
                    printf("\nResultado: \n");
                    mostrarMatrizDecimal(matrizResultadoDecimal, filasMatriz1, columnasMatriz1);
                }

            } else {
                cargarMatrizDecimal(matriz1Decimal, filasMatriz1, columnasMatriz1, 0);

                do {    
                    printf("\nQue valor de escalar desea elegir?\n");
                    printf("\n1. Numero entero.\n");
                    printf("\n2. Numero decimal.\n");
                    scanf("%d", &tipoDeNumero);

                    if (tipoDeNumero < 1 || tipoDeNumero > 2) {
                        printf("\nSeleccione una opcion valida.\n");
                    }
                } while (tipoDeNumero < 1 || tipoDeNumero > 2);

                printf("\nIngrese el valor del escalar: \n");

                if (tipoDeNumero == 1) {
                    scanf("%d", &numeroEntero);
                    multiplicarPorEscalarDecimalInt(matriz1Decimal, matrizResultadoDecimal, filasMatriz1, columnasMatriz1, numeroEntero);
                    printf("\nResultado: \n");
                    mostrarMatrizDecimal(matrizResultadoDecimal, filasMatriz1, columnasMatriz1);
                } else {
                    scanf("%f", &numeroDecimal);
                    multiplicarPorEscalarDecimalFloat(matriz1Decimal, matrizResultadoDecimal, filasMatriz1, columnasMatriz1, numeroDecimal);
                    printf("\nResultado: \n");
                    mostrarMatrizDecimal(matrizResultadoDecimal, filasMatriz1, columnasMatriz1);
                }
            }
            break;

            case 6:
            printf("\nSaliendo...\n");
            break;

            default:
            printf("\nIngrese una opcion valida.\n");
            break;
        }
    
    } while (opcion != 6);  
    
    return 0;
}



void mostrarMenu() {
    printf("\n");
    printf("\n========== Bienvenido a la calculadora de matrices ==========\n");
    printf("\nSeleccione la operacion que desea realizar: \n");
    printf("\n1- Suma de matrices.\n");
    printf("\n2- Resta de matrices.\n");
    printf("\n3- Multiplicacion de matrices.\n");
    printf("\n4- Potencia de matriz.\n");
    printf("\n5- Multiplicar matriz por un escalar.\n");
    printf("\n6- Salir.\n");
}

int ingresarDimension(char* texto) {
    int dimension;
    do {
        printf("%s", texto);
        scanf("%d", &dimension);
        
        if (dimension < 1 || dimension > 10) {
            printf("Debe ingresar un numero entre 1 y 10\n");
        }
    } while (dimension < 1 || dimension > 10);
    
    return dimension;
}

int ingresarTipoNumero() {
    int tipo;
    do {
        printf("\nQue numeros desea cargar en la matriz?\n");
        printf("\n1. Numero entero.\n");
        printf("\n2. Numero decimal.\n");
        scanf("%d", &tipo);

        if (tipo < 1 || tipo > 2) {
            printf("\nSeleccione una opcion valida.\n");
        }
    } while (tipo < 1 || tipo > 2);
    
    return tipo;
}

void cargarMatrizEntera(int matriz[MAX][MAX], int filas, int columnas, int numeroMatriz) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (numeroMatriz > 0) {
                printf("\nIngrese el valor de la posicion %d-%d de la matriz %d: \n", i, j, numeroMatriz);
            } else {
                printf("\nIngrese el valor de la posicion %d - %d de la matriz: \n", i + 1, j + 1);
            }
            scanf("%d", &matriz[i][j]);
        }
    }
}

void cargarMatrizDecimal(float matriz[MAX][MAX], int filas, int columnas, int numeroMatriz) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (numeroMatriz > 0) {
                printf("\nIngrese el valor de la posicion %d-%d de la matriz %d: \n", i, j, numeroMatriz);
            } else {
                printf("\nIngrese el valor de la posicion %d - %d de la matriz: \n", i + 1, j + 1);
            }
            scanf("%f", &matriz[i][j]);
        }
    }
}

void mostrarMatrizEntera(int matriz[MAX][MAX], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        printf("\n");
        for (int j = 0; j < columnas; j++) {
            printf("%d  ", matriz[i][j]);
        }
    }
    printf("\n");
}

void mostrarMatrizDecimal(float matriz[MAX][MAX], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        printf("\n");
        for (int j = 0; j < columnas; j++) {
            printf("%.2f  ", matriz[i][j]);
        }
    }
    printf("\n");
}

void sumarMatricesEnteras(int matriz1[MAX][MAX], int matriz2[MAX][MAX], int resultado[MAX][MAX], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void sumarMatricesDecimales(float matriz1[MAX][MAX], float matriz2[MAX][MAX], float resultado[MAX][MAX], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void restarMatricesEnteras(int matriz1[MAX][MAX], int matriz2[MAX][MAX], int resultado[MAX][MAX], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}

void restarMatricesDecimales(float matriz1[MAX][MAX], float matriz2[MAX][MAX], float resultado[MAX][MAX], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}

void multiplicarMatricesEnteras(int matriz1[MAX][MAX], int matriz2[MAX][MAX], int resultado[MAX][MAX], int filas1, int columnas1, int columnas2) {
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            for (int k = 0; k < columnas1; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

void multiplicarMatricesDecimales(float matriz1[MAX][MAX], float matriz2[MAX][MAX], float resultado[MAX][MAX], int filas1, int columnas1, int columnas2) {
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            for (int k = 0; k < columnas1; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

void inicializarMatrizEntera(int matriz[MAX][MAX], int filas, int columnas, int valor) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = valor;
        }
    }
}

void inicializarMatrizDecimal(float matriz[MAX][MAX], int filas, int columnas, float valor) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = valor;
        }
    }
}

void matrizIdentidadEntera(int matriz[MAX][MAX], int dimension) {
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            if (i == j) {
                matriz[i][j] = 1; 
            } else {
                matriz[i][j] = 0;
            }
        }
    }
}

void matrizIdentidadDecimal(float matriz[MAX][MAX], int dimension) {
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            if (i == j) {
                matriz[i][j] = 1; 
            } else {
                matriz[i][j] = 0;
            }
        }
    }
}

void multiplicarPorEscalarEnteroInt(int matriz[MAX][MAX], int resultado[MAX][MAX], int filas, int columnas, int escalar) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            resultado[i][j] = matriz[i][j] * escalar;
        }
    }
}

void multiplicarPorEscalarEnteroFloat(int matriz[MAX][MAX], float resultado[MAX][MAX], int filas, int columnas, float escalar) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            resultado[i][j] = matriz[i][j] * escalar;
        }
    }
}

void multiplicarPorEscalarDecimalInt(float matriz[MAX][MAX], float resultado[MAX][MAX], int filas, int columnas, int escalar) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            resultado[i][j] = matriz[i][j] * escalar;
        }
    }
}

void multiplicarPorEscalarDecimalFloat(float matriz[MAX][MAX], float resultado[MAX][MAX], int filas, int columnas, float escalar) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            resultado[i][j] = matriz[i][j] * escalar;
        }
    }
}