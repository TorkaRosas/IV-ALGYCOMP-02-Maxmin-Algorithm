#include "iostream"

#define tam1 150 /// Cantidad de número en la instancia 1
#define tam2 300 /// Cantidad de número en la instancia 2
#define tam3 600 /// Cantidad de número en la instancia 3
#define tam4 1200 /// Cantidad de número en la instancia 4
#define tam5 2400 /// Cantidad de número en la instancia 5
#define tam6 4800 /// Cantidad de número en la instancia 6
#define tam7 5600 /// Cantidad de número en la instancia 7
#define tam8 10200 /// Cantidad de número en la instancia 8

#define inst1 "Instancia1.txt"
#define inst2 "Instancia2.txt"
#define inst3 "Instancia3.txt"
#define inst4 "Instancia4.txt"
#define inst5 "Instancia5.txt"
#define inst6 "Instancia6.txt"
#define inst7 "Instancia7.txt"
#define inst8 "Instancia8.txt"

int n1[tam1]; //Vector donde copiaremos los números de la instancia 1
int n2[tam2]; //Vector donde copiaremos los números de la instancia 2
int n3[tam3]; //Vector donde copiaremos los números de la instancia 3
int n4[tam4]; //Vector donde copiaremos los números de la instancia 4
int n5[tam5]; //Vector donde copiaremos los números de la instancia 5
int n6[tam6]; //Vector donde copiaremos los números de la instancia 6
int n7[tam7]; //Vector donde copiaremos los números de la instancia 7
int n8[tam8]; //Vector donde copiaremos los números de la instancia 8

FILE *tx1;
FILE *tx2;
FILE *tx3;
FILE *tx4;
FILE *tx5;
FILE *tx6;
FILE *tx7;
FILE *tx8;

void continuar()
{
	std::cout << "Presione cualquier tecla para volver. ";
	getch();
}

void copiar(int n[], int tam, char* inst, FILE *tx)
{
    char x[10];
    if ((tx = fopen(inst, "r")) != NULL) /// Para probar otra instancia, cambie el título del archivo
    {
        for (int i = 0; i < tam; i++)
        {
            fgets(x, 10, tx);
            n[i] = atoi(x);
        }
        fclose(tx);
    }
    else
    {
        std::cout << "No se pudo abrir el archivo." << std::endl;
        continuar();
        return;
    }
}
