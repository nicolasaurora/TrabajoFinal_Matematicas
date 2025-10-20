#include <stdio.h>
#include <stdlib.h>
#define MAX 10


int main() {
    
    int opcion, numeroEntero, tipoDeNumero, tipoDeNumeroMatriz, potenciaMatriz, filasMatriz1, columnasMatriz1, filasMatriz2, columnasMatriz2;
    int matriz1[MAX][MAX], matriz2[MAX][MAX], matrizResultado[MAX][MAX];
    float matriz1Decimal[MAX][MAX], matriz2Decimal[MAX][MAX], matrizResultadoDecimal[MAX][MAX], numeroDecimal;
    
    do {
        
        printf("\n");
        printf("\n========== Bienvenido a la calculadora de matrices ==========\n");
        printf("\nSeleccione la operacion que desea realizar: \n");
        printf("\n1- Suma de matrices.\n");
        printf("\n2- Resta de matrices.\n");
        printf("\n3- Multiplicacion de matrices.\n");
        printf("\n4- Potencia de matriz.\n");
        printf("\n5- Multiplicar matriz por un escalar.\n");
        printf("\n6- Salir.\n");
        scanf("%d", &opcion);
        
        switch(opcion) {
            
            case 1:
            
            printf("\nAhora debe ingresar la dimension de ambas matrices\n");
            
            do {
            
                do {
                    
                    printf("\nIngrese la cantidad de filas de la matriz 1: \n");
                    scanf("%d", &filasMatriz1);
                    
                    if (filasMatriz1 < 1 || filasMatriz1 > 10) {
                        printf("Debe ingresar un numero entre 1 y 10");
                    }
                
                } while(filasMatriz1 < 1 || filasMatriz1 > 10); 
                
                do {
                    
                    printf("\nIngrese la cantidad de columnas de la matriz 1: \n");
                    scanf("%d", &columnasMatriz1);
                    
                    if (columnasMatriz1 < 1 || columnasMatriz1 > 10) {
                        printf("Debe ingresar un numero entre 1 y 10");
                    }
                
                } while(columnasMatriz1 < 1 || columnasMatriz1 > 10);
                
                do {
                    
                    printf("\nIngrese la cantidad de filas de la matriz 2: \n");
                    scanf("%d", &filasMatriz2);
                    
                    if (filasMatriz2 < 1 || filasMatriz2 > 10) {
                        printf("Debe ingresar un numero entre 1 y 10");
                    }
                
                } while(filasMatriz2 < 1 || filasMatriz2 > 10);
                
                do {
                    
                    printf("\nIngrese la cantidad de columnas de la matriz 2: \n");
                    scanf("%d", &columnasMatriz2);
                    
                    if (columnasMatriz2 < 1 || columnasMatriz2 > 10) {
                        printf("Debe ingresar un numero entre 1 y 10");
                    }
            
                } while(columnasMatriz2 < 1 || columnasMatriz2 > 10);
            
            
                if (filasMatriz1 != filasMatriz2 || columnasMatriz1 != columnasMatriz2) {
                    printf("\nLa dimension ingresada de las matrices no coinciden.\n");
                } else {

                    do {
                        printf("\nQue numeros desea cargar en la matriz?\n");
                        printf("\n1. Numero entero.\n");
                        printf("\n2. Numero decimal.\n");
                        scanf("%d", &tipoDeNumeroMatriz);

                        if (tipoDeNumeroMatriz < 1 || tipoDeNumeroMatriz > 2) {
                            printf("\nSeleccione una opcion valida.\n");
                        }

                    } while (tipoDeNumeroMatriz < 1 || tipoDeNumeroMatriz > 2);

                    if (tipoDeNumeroMatriz == 1) {
                        matriz1[filasMatriz1][columnasMatriz1];
                        matriz2[filasMatriz2][columnasMatriz2];
                        
                        for (int i = 0; i < filasMatriz1; i++) {
                            
                            for (int j = 0; j < columnasMatriz1; j++) {
                                printf("\nIngrese el valor de la posicion %d-%d de la matriz 1: \n", i, j);
                                scanf("%d", &matriz1[i][j]);
                            }
                        }
                        
                        for (int i = 0; i < filasMatriz2; i++) {
                            
                            for (int j = 0; j < columnasMatriz2; j++) {
                                printf("\nIngrese el valor de la posicion %d-%d de la matriz 2: \n", i, j);
                                scanf("%d", &matriz2[i][j]);
                            }
                        }
                        
                        for (int i = 0; i < filasMatriz1; i++) {
                            
                            for(int j = 0; j < columnasMatriz1; j++) {
                                matrizResultado[i][j] = matriz1[i][j] + matriz2[i][j];
                            }
                        }
                        
                        printf("\n Resultado: \n");
                        
                        for (int i = 0; i < filasMatriz1; i++) {
                            printf("\n");
                                
                            for (int j = 0; j < columnasMatriz1; j++) {
                            printf("%d  ", matrizResultado[i][j]);
                            }
                        }
                        
                    } else {
                        matriz1Decimal[filasMatriz1][columnasMatriz1];
                        matriz2Decimal[filasMatriz2][columnasMatriz2];
                        
                        for (int i = 0; i < filasMatriz1; i++) {
                            
                            for (int j = 0; j < columnasMatriz1; j++) {
                                printf("\nIngrese el valor de la posicion %d-%d de la matriz 1: \n", i, j);
                                scanf("%f", &matriz1Decimal[i][j]);
                            }
                        }
                        
                        for (int i = 0; i < filasMatriz2; i++) {
                            
                            for (int j = 0; j < columnasMatriz2; j++) {
                                printf("\nIngrese el valor de la posicion %d-%d de la matriz 2: \n", i, j);
                                scanf("%f", &matriz2Decimal[i][j]);
                            }
                        }
                        
                        for (int i = 0; i < filasMatriz1; i++) {
                            
                            for (int j = 0; j < columnasMatriz1; j++) {
                                matrizResultadoDecimal[i][j] = matriz1Decimal[i][j] + matriz2Decimal[i][j];
                            }
                        }

                        printf("\n Resultado: \n");

                        for (int i = 0; i < filasMatriz1; i++) {
                            printf("\n");
                                
                            for (int j = 0; j < columnasMatriz1; j++) {
                                printf("%.2f  ", matrizResultadoDecimal[i][j]);
                            }
                        }
                    }
                }
                        
            } while (filasMatriz1 != filasMatriz2 || columnasMatriz1 != columnasMatriz2);
            break;

            case 2:
            
            printf("\nAhora debe ingresar la dimension de ambas matrices\n");
            
            do {
            
                do {
                    
                    printf("\nIngrese la cantidad de filas de la matriz 1: \n");
                    scanf("%d", &filasMatriz1);
                    
                    if (filasMatriz1 < 1 || filasMatriz1 > 10) {
                        printf("Debe ingresar un numero entre 1 y 10");
                    }
                
                } while (filasMatriz1 < 1 || filasMatriz1 > 10); 
                
                do {
                    
                    printf("\nIngrese la cantidad de columnas de la matriz 1: \n");
                    scanf("%d", &columnasMatriz1);
                    
                    if (columnasMatriz1 < 1 || columnasMatriz1 > 10) {
                        printf("Debe ingresar un numero entre 1 y 10");
                    }
                
                } while (columnasMatriz1 < 1 || columnasMatriz1 > 10);
                
                do {
                    
                    printf("\nIngrese la cantidad de filas de la matriz 2: \n");
                    scanf("%d", &filasMatriz2);
                    
                    if (filasMatriz2 < 1 || filasMatriz2 > 10) {
                        printf("Debe ingresar un numero entre 1 y 10");
                    }
                
                } while (filasMatriz2 < 1 || filasMatriz2 > 10);
                
                do {
                    
                    printf("\nIngrese la cantidad de columnas de la matriz 2: \n");
                    scanf("%d", &columnasMatriz2);
                    
                    if (columnasMatriz2 < 1 || columnasMatriz2 > 10) {
                        printf("Debe ingresar un numero entre 1 y 10");
                    }
            
                } while (columnasMatriz2 < 1 || columnasMatriz2 > 10);
            
            
                if (filasMatriz1 != filasMatriz2 || columnasMatriz1 != columnasMatriz2) {
                    printf("\nLa dimension ingresada de las matrices no coinciden.\n");
                } else {

                    do {
                        printf("\nQue numeros desea cargar en la matriz?\n");
                        printf("\n1. Numero entero.\n");
                        printf("\n2. Numero decimal.\n");
                        scanf("%d", &tipoDeNumeroMatriz);

                        if (tipoDeNumeroMatriz < 1 || tipoDeNumeroMatriz > 2) {
                            printf("\nSeleccione una opcion valida.\n");
                        }

                    } while (tipoDeNumeroMatriz < 1 || tipoDeNumeroMatriz > 2);

                    if (tipoDeNumeroMatriz == 1) {
                        matriz1[filasMatriz1][columnasMatriz1];
                        matriz2[filasMatriz2][columnasMatriz2];
                        
                        for (int i = 0; i < filasMatriz1; i++) {
                            
                            for (int j = 0; j < columnasMatriz1; j++) {
                                printf("\nIngrese el valor de la posicion %d-%d de la matriz 1: \n", i, j);
                                scanf("%d", &matriz1[i][j]);
                            }
                        }
                        
                        for (int i = 0; i < filasMatriz2; i++) {
                            
                            for (int j = 0; j < columnasMatriz2; j++) {
                                printf("\nIngrese el valor de la posicion %d-%d de la matriz 2: \n", i, j);
                                scanf("%d", &matriz2[i][j]);
                            }
                        }
                        
                        for (int i = 0; i < filasMatriz1; i++) {
                            
                            for (int j = 0; j < columnasMatriz1; j++) {
                                matrizResultado[i][j] = matriz1[i][j] - matriz2[i][j];
                            }
                        }
                        
                        printf("\n Resultado: \n");
                        
                        for (int i = 0; i < filasMatriz1; i++) {
                            printf("\n");
                                
                            for (int j = 0; j < columnasMatriz1; j++) {
                            printf("%d  ", matrizResultado[i][j]);
                            }
                        }
                        
                    } else {
                        matriz1Decimal[filasMatriz1][columnasMatriz1];
                        matriz2Decimal[filasMatriz2][columnasMatriz2];
                        
                        for (int i = 0; i < filasMatriz1; i++) {
                            
                            for (int j = 0; j < columnasMatriz1; j++) {
                                printf("\nIngrese el valor de la posicion %d-%d de la matriz 1: \n", i, j);
                                scanf("%f", &matriz1Decimal[i][j]);
                            }
                        }
                        
                        for (int i = 0; i < filasMatriz2; i++) {
                            
                            for (int j = 0; j < columnasMatriz2; j++) {
                                printf("\nIngrese el valor de la posicion %d-%d de la matriz 2: \n", i, j);
                                scanf("%f", &matriz2Decimal[i][j]);
                            }
                        }
                        
                        for (int i = 0; i < filasMatriz1; i++) {
                            
                            for (int j = 0; j < columnasMatriz1; j++) {
                                matrizResultadoDecimal[i][j] = matriz1Decimal[i][j] - matriz2Decimal[i][j];
                            }
                        }

                        printf("\n Resultado: \n");

                        for (int i = 0; i < filasMatriz1; i++) {
                            printf("\n");
                                
                            for (int j = 0; j < columnasMatriz1; j++) {
                                printf("%.2f  ", matrizResultadoDecimal[i][j]);
                            }
                        }
                    }
                }
                        
            } while (filasMatriz1 != filasMatriz2 || columnasMatriz1 != columnasMatriz2);
            break;
            
            case 3:
            
            printf("\nAhora debe ingresar la dimension de ambas matrices\n");
            
            do {
            
                do {
                    
                    printf("\nIngrese la cantidad de filas de la matriz 1: \n");
                    scanf("%d", &filasMatriz1);
                    
                    if (filasMatriz1 < 1 || filasMatriz1 > 10) {
                        printf("Debe ingresar un numero entre 1 y 10");
                    }
                
                } while (filasMatriz1 < 1 || filasMatriz1 > 10); 
                
                do {
                    
                    printf("\nIngrese la cantidad de columnas de la matriz 1: \n");
                    scanf("%d", &columnasMatriz1);
                    
                    if (columnasMatriz1 < 1 || columnasMatriz1 > 10) {
                        printf("Debe ingresar un numero entre 1 y 10");
                    }
                
                } while (columnasMatriz1 < 1 || columnasMatriz1 > 10);
                
                do {
                    
                    printf("\nIngrese la cantidad de filas de la matriz 2: \n");
                    scanf("%d", &filasMatriz2);
                    
                    if (filasMatriz2 < 1 || filasMatriz2 > 10) {
                        printf("Debe ingresar un numero entre 1 y 10");
                    }
                
                } while (filasMatriz2 < 1 || filasMatriz2 > 10);
                
                do {
                    
                    printf("\nIngrese la cantidad de columnas de la matriz 2: \n");
                    scanf("%d", &columnasMatriz2);
                    
                    if (columnasMatriz2 < 1 || columnasMatriz2 > 10) {
                        printf("Debe ingresar un numero entre 1 y 10");
                    }
            
                } while (columnasMatriz2 < 1 || columnasMatriz2 > 10);
            
            
                if (columnasMatriz1 != filasMatriz2) {
                    printf("\nLa dimension ingresada de las matrices no son validas, la cantidad de columnas de la matriz 1 debe ser igual a la cantidad de filas de la matriz 2.\n");
                } else {

                    do {
                        printf("\nQue numeros desea cargar en la matriz?\n");
                        printf("\n1. Numero entero.\n");
                        printf("\n2. Numero decimal.\n");
                        scanf("%d", &tipoDeNumeroMatriz);

                        if (tipoDeNumeroMatriz < 1 || tipoDeNumeroMatriz > 2) {
                            printf("\nSeleccione una opcion valida.\n");
                        }

                    } while (tipoDeNumeroMatriz < 1 || tipoDeNumeroMatriz > 2);

                    if (tipoDeNumeroMatriz == 1) {

                        matriz1[filasMatriz1][columnasMatriz1];
                        matriz2[filasMatriz2][columnasMatriz2];
                        
                        for (int i = 0; i < filasMatriz1; i++) {
                            
                            for (int j = 0; j < columnasMatriz1; j++) {
                                printf("\nIngrese el valor de la posicion %d-%d de la matriz 1: \n", i, j);
                                scanf("%d", &matriz1[i][j]);
                            }
                        }
                        
                        for (int i = 0; i < filasMatriz2; i++) {
                            
                            for (int j = 0; j < columnasMatriz2; j++) {
                                printf("\nIngrese el valor de la posicion %d-%d de la matriz 2: \n", i, j);
                                scanf("%d", &matriz2[i][j]);
                            }
                        }
                        
                        for (int i = 0; i < filasMatriz1; i++) {
                            
                            for (int j = 0; j < columnasMatriz2; j++) {
                                matrizResultado[i][j] = 0;
                            }
                        }
                        
                        for (int i = 0; i < filasMatriz1; i++) {
                            
                            for (int j = 0; j < columnasMatriz2; j++) {
                                
                                for (int k = 0; k < columnasMatriz1; k++) {
                                    matrizResultado[i][j] += matriz1[i][k] * matriz2[k][j];
                                }
                            }
                        }

                        printf("\nResultado: \n");

                        for (int i = 0; i < filasMatriz1; i++) {
                                printf("\n");
                                
                            for (int j = 0; j < columnasMatriz2; j++) {
                                printf("%d  ", matrizResultado[i][j]);
                            }
                        }
                    
                    } else {
                        matriz1Decimal[filasMatriz1][columnasMatriz1];
                        matriz2Decimal[filasMatriz2][columnasMatriz2];
                        
                        for (int i = 0; i < filasMatriz1; i++) {
                            
                            for (int j = 0; j < columnasMatriz1; j++) {
                                printf("\nIngrese el valor de la posicion %d-%d de la matriz 1: \n", i, j);
                                scanf("%f", &matriz1Decimal[i][j]);
                            }
                        }
                        
                        for (int i = 0; i < filasMatriz2; i++) {
                            
                            for (int j = 0; j < columnasMatriz2; j++) {
                                printf("\nIngrese el valor de la posicion %d-%d de la matriz 2: \n", i, j);
                                scanf("%f", &matriz2Decimal[i][j]);
                            }
                        }
                        
                        for (int i = 0; i < filasMatriz1; i++) {
                            
                            for (int j = 0; j < columnasMatriz2; j++) {
                                matrizResultadoDecimal[i][j] = 0;
                            }
                        }
                        
                        for (int i = 0; i < filasMatriz1; i++) {
                            
                            for (int j = 0; j < columnasMatriz2; j++) {
                                
                                for (int k = 0; k < columnasMatriz1; k++) {
                                    matrizResultadoDecimal[i][j] += matriz1Decimal[i][k] * matriz2Decimal[k][j];
                                }
                            }
                        }
                        
                        printf("\nResultado: \n");

                        for (int i = 0; i < filasMatriz1; i++) {
                            printf("\n");
                                
                            for (int j = 0; j < columnasMatriz2; j++) {
                                printf("%.2f  ", matrizResultadoDecimal[i][j]);
                            }
                        }
                    }
                }
                       
            } while (columnasMatriz1 != filasMatriz2);
            break;
            
            case 4:
            
            do {
            
                do {
                    
                    printf("\nIngrese la cantidad de filas de la matriz: \n");
                    scanf("%d", &filasMatriz1);
                        
                    if (filasMatriz1 < 1 || filasMatriz1 > 10) {
                        printf("Debe ingresar un numero entre 1 y 10");
                    }
                    
                } while (filasMatriz1 < 1 || filasMatriz1 > 10); 
                    
                do {
                    printf("\nIngrese la cantidad de columnas de la matriz: \n");
                    scanf("%d", &columnasMatriz1);
                        
                    if (columnasMatriz1 < 1 || columnasMatriz1 > 10) {
                        printf("Debe ingresar un numero entre 1 y 10");
                    }
                    
                } while (columnasMatriz1 < 1 || columnasMatriz1 > 10);

                if (filasMatriz1 == columnasMatriz1) {

                    do {
                        printf("\nQue numeros desea cargar en la matriz?\n");
                        printf("\n1. Numero entero.\n");
                        printf("\n2. Numero decimal.\n");
                        scanf("%d", &tipoDeNumeroMatriz);

                        if (tipoDeNumeroMatriz < 1 || tipoDeNumeroMatriz > 2) {
                            printf("\nSeleccione una opcion valida.\n");
                        }

                    } while (tipoDeNumeroMatriz < 1 || tipoDeNumeroMatriz > 2);

                    if (tipoDeNumeroMatriz == 1) {

                        matriz1[filasMatriz1][columnasMatriz1];
                
                        for (int i = 0; i < filasMatriz1; i++) {
                            
                            for (int j = 0; j < columnasMatriz1; j++) {
                            printf("\nIngrese el valor de la posicion %d-%d de la matriz 1: \n", i, j);
                            scanf("%d", &matriz1[i][j]);
                            }
                        }
                    
                        printf("\nIngrese a que numero desea elevar la matriz: \n");
                        scanf("%d", &potenciaMatriz);
                        
                        if (potenciaMatriz == 0) {
                            
                            for (int i = 0; i < filasMatriz1; i++) {
                                
                                for (int j = 0; j < columnasMatriz1; j++) {
                                    if ( i == j) {
                                        matrizResultado[i][j] = 1; 
                                    } else {
                                        matrizResultado[i][j] = 0;
                                    }
                                    
                                }
                            }
        
                        } else {
                            
                            for (int i = 0; i < filasMatriz1; i++) {
                            
                                for (int j = 0; j < columnasMatriz1; j++) {
                                    matrizResultado[i][j] = 0;
                                }
                            }
                            
                            for (int i = 0; i < filasMatriz1; i++) {
                            
                                for (int j = 0; j < columnasMatriz1; j++) {
                                    
                                    for (int k = 0; k < columnasMatriz1; k++) {
                                        matrizResultado[i][j] += matriz1[i][k] * matriz1[k][j];
                                    }
                                }
                            }

                        }

                        printf("\nResultado: \n");
                        
                        for (int i = 0; i < filasMatriz1; i++) {
                            printf("\n");
                                
                            for (int j = 0; j < columnasMatriz1; j++) {
                                printf("%d  ", matrizResultado[i][j]);
                            }
                        }

                    } else {

                        matriz1Decimal[filasMatriz1][columnasMatriz1];
                
                        for (int i = 0; i < filasMatriz1; i++) {
                            
                            for (int j = 0; j < columnasMatriz1; j++) {
                                printf("\nIngrese el valor de la posicion %d-%d de la matriz 1: \n", i, j);
                                scanf("%f", &matriz1Decimal[i][j]);
                            }
                        }
                    
                        printf("\nIngrese a que numero desea elevar la matriz: \n");
                        scanf("%d", &potenciaMatriz);
                        
                        if (potenciaMatriz == 0) {
                            
                            for (int i = 0; i < filasMatriz1; i++) {
                                
                                for (int j = 0; j < columnasMatriz1; j++) {
                                    if ( i == j) {
                                        matrizResultadoDecimal[i][j] = 1; 
                                    } else {
                                        matrizResultadoDecimal[i][j] = 0;
                                    }
                                    
                                }
                            }
        
                        } else {
                            
                            for (int i = 0; i < filasMatriz1; i++) {
                            
                                for (int j = 0; j < columnasMatriz1; j++) {
                                    matrizResultadoDecimal[i][j] = 0;
                                }
                            }
                            
                            for (int i = 0; i < filasMatriz1; i++) {
                            
                                for (int j = 0; j < columnasMatriz1; j++) {
                                    
                                    for (int k = 0; k < columnasMatriz1; k++) {
                                        matrizResultadoDecimal[i][j] += matriz1Decimal[i][k] * matriz1Decimal[k][j];
                                    }
                                }
                            }

                        }

                        printf("\nResultado: \n");

                        for (int i = 0; i < filasMatriz1; i++) {
                            printf("\n");
                                
                            for (int j = 0; j < columnasMatriz1; j++) {
                            printf("%.2f  ", matrizResultadoDecimal[i][j]);
                            }
                        }         
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

            do {
                printf("\nQue numeros desea cargar en la matriz?\n");
                printf("\n1. Numero entero.\n");
                printf("\n2. Numero decimal.\n");
                scanf("%d", &tipoDeNumeroMatriz);

                if (tipoDeNumeroMatriz < 1 || tipoDeNumeroMatriz > 2) {
                    printf("\nSeleccione una opcion valida.\n");
                }

            } while (tipoDeNumeroMatriz < 1 || tipoDeNumeroMatriz > 2);

            if (tipoDeNumeroMatriz == 1) {
                for (int i = 0; i < filasMatriz1; i ++) {
                for (int j  = 0; j < columnasMatriz1; j ++) {
                    printf("\nIngrese el valor de la posicion %d - %d de la matriz: \n", i + 1, j + 1);
                    scanf("%d", &matriz1[i][j]);
                    }
                }

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
                    for (int i = 0; i < filasMatriz1; i ++) {
                        for (int j = 0; j < columnasMatriz1; j ++) {
                            matrizResultado[i][j] = matriz1[i][j] * numeroEntero;
                        }
                    }
                    printf("\nResultado: \n");
                    for (int i = 0; i < filasMatriz1; i ++) {
                        printf("\n");
                        for (int j = 0; j < columnasMatriz1; j ++) {
                            printf("%d", matrizResultado[i][j]);
                            printf(" ");
                        }
                    }

                } else {
                    scanf("%f", &numeroDecimal);
                    for (int i = 0; i < filasMatriz1; i ++) {
                        for (int j = 0; j < columnasMatriz1; j ++) {
                            matrizResultadoDecimal[i][j] = matriz1[i][j] * numeroDecimal;
                        }
                    }
                    printf("\nResultado: \n");
                    for (int i = 0; i < filasMatriz1; i ++) {
                        printf("\n");
                        for (int j = 0; j < columnasMatriz1; j ++) {
                            printf("%.2f", matrizResultadoDecimal[i][j]);
                            printf(" ");
                        }
                    }
                }



            } else {

                for (int i = 0; i < filasMatriz1; i ++) {
                    for (int j  = 0; j < columnasMatriz1; j ++) {
                        printf("\nIngrese el valor de la posicion %d - %d de la matriz: \n", i + 1, j + 1);
                        scanf("%f", &matriz1Decimal[i][j]);
                        }
                    }

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
                    for (int i = 0; i < filasMatriz1; i ++) {
                        for (int j = 0; j < columnasMatriz1; j ++) {
                            matrizResultadoDecimal[i][j] = matriz1Decimal[i][j] * numeroEntero;
                        }
                    }
                    printf("\nResultado: \n");
                    for (int i = 0; i < filasMatriz1; i ++) {
                        printf("\n");
                        for (int j = 0; j < columnasMatriz1; j ++) {
                            printf("%.2f", matrizResultadoDecimal[i][j]);
                            printf(" ");
                        }
                    }

                } else {
                    scanf("%f", &numeroDecimal);
                    for (int i = 0; i < filasMatriz1; i ++) {
                        for (int j = 0; j < columnasMatriz1; j ++) {
                            matrizResultadoDecimal[i][j] = matriz1Decimal[i][j] * numeroDecimal;
                        }
                    }

                    printf("\nResultado: \n");
                    
                    for (int i = 0; i < filasMatriz1; i ++) {
                        printf("\n");
                        for (int j = 0; j < columnasMatriz1; j ++) {
                            printf("%.2f", matrizResultadoDecimal[i][j]);
                            printf(" ");
                        }
                    }
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
