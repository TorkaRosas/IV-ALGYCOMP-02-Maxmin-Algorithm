#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include "maxmin.h"

using namespace std;

void maxmin(int n[], int, int, int &, int &);

long t0, t1;
int con;
int main()
{
    double time;
    
    int max, min;

//_PARA LA INSTANCIA1_/
    con=0;
    copiar(n1, tam1, inst1, tx1);
    // copiar1();
    t0 = clock();
    maxmin(n1, 0, tam1-1, max, min);
    t1=clock();  
    time = (double(t1 - t0) / CLOCKS_PER_SEC);
    cout<<"\n___INSTANCIA 1__"<<endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min<<endl;
    cout << "El tiempo de ejecucion es: " << t1 - t0 << CLK_TCK << endl;
    cout << "El tiempo en segundo es: " << time << endl;
    cout << "Numero de operaciones: "<< con <<endl;

//_PARA LA INSTANCIA2_/
    con=0;
    copiar(n2, tam2, inst2, tx2);
    // copiar2();
    t0 = clock();
    maxmin(n2, 0, tam2-1, max, min);
    t1=clock();  
    time = (double(t1 - t0) / CLOCKS_PER_SEC);
    cout<<"\n___INSTANCIA 2__"<<endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min<<endl;
    cout << "El tiempo de ejecucion es: " << t1 - t0 << CLK_TCK << endl;
    cout << "El tiempo en segundo es: " << time << endl;
    cout << "Numero de operaciones: "<< con <<endl;

//_PARA LA INSTANCIA3_/
    con=0;
    copiar(n3, tam3, inst3, tx3);
    // copiar3();
    t0 = clock();
    maxmin(n3, 0, tam3-1, max, min);
    t1=clock();  
    time = (double(t1 - t0) / CLOCKS_PER_SEC);
    cout<<"\n___INSTANCIA 3__"<<endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min<<endl;
    cout << "El tiempo de ejecucion es: " << t1 - t0 << CLK_TCK << endl;
    cout << "El tiempo en segundo es: " << time << endl;
    cout << "Numero de operaciones: "<< con <<endl;

    //_PARA LA INSTANCIA4_/
    con=0;
    copiar(n4, tam4, inst4, tx4);
    // copiar4();
    t0 = clock();
    maxmin(n4, 0, tam4-1, max, min);
    t1=clock();  
    time = (double(t1 - t0) / CLOCKS_PER_SEC);
    cout<<"\n___INSTANCIA 4__"<<endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min<<endl;
    cout << "El tiempo de ejecucion es: " << t1 - t0 << CLK_TCK << endl;
    cout << "El tiempo en segundo es: " << time << endl;
    cout << "Numero de operaciones: "<< con <<endl;

    //_PARA LA INSTANCIA5_/
    con=0;
    copiar(n5, tam5, inst5, tx5);
    // copiar5();
    t0 = clock();
    maxmin(n5, 0, tam5-1, max, min);
    t1=clock();  
    time = (double(t1 - t0) / CLOCKS_PER_SEC);
    cout<<"\n___INSTANCIA 5__"<<endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min<<endl;
    cout << "El tiempo de ejecucion es: " << t1 - t0 << CLK_TCK << endl;
    cout << "El tiempo en segundo es: " << time << endl;
    cout << "Numero de operaciones: "<< con <<endl;

    //_PARA LA INSTANCIA6_/
    con=0;
    copiar(n6, tam6, inst6, tx6);
    // copiar6();
    t0 = clock();
    maxmin(n6, 0, tam6-1, max, min);
    t1=clock();  
    time = (double(t1 - t0) / CLOCKS_PER_SEC);
    cout<<"\n___INSTANCIA 6__"<<endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min<<endl;
    cout << "El tiempo de ejecucion es: " << t1 - t0 << CLK_TCK << endl;
    cout << "El tiempo en segundo es: " << time << endl;
    cout << "Numero de operaciones: "<< con <<endl;

    //_PARA LA INSTANCIA7_/
    con=0;
    copiar(n7, tam7, inst7, tx7);
    // copiar7();
    t0 = clock();
    maxmin(n7, 0, tam7-1, max, min);
    t1=clock();  
    time = (double(t1 - t0) / CLOCKS_PER_SEC);
    cout<<"\n___INSTANCIA 7__"<<endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min<<endl;
    cout << "El tiempo de ejecucion es: " << t1 - t0 << CLK_TCK << endl;
    cout << "El tiempo en segundo es: " << time << endl;
    cout << "Numero de operaciones: "<< con <<endl;

    //_PARA LA INSTANCIA8_/
    con=0;
    copiar(n8, tam8, inst8, tx8);
    // copiar8();
    t0 = clock();
    maxmin(n8, 0, tam8-1, max, min);
    t1=clock();  
    time = (double(t1 - t0) / CLOCKS_PER_SEC);
    cout<<"\n___INSTANCIA 8__"<<endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min<<endl;
    cout << "El tiempo de ejecucion es: " << t1 - t0 << CLK_TCK << endl;
    cout << "El tiempo en segundo es: " << time << endl;
    cout << "Numero de operaciones: "<< con <<endl;
    system("pause");
    return 0;
}

void maxmin(int n[], int li, int ls, int &max, int &min)
{con++;
  if ((ls - li) <= 1)
  {
    if (n[li] < n[ls])
    {
      max = n[ls];
      min = n[li];
	}
    
    else
    {
      max = n[li];
      min = n[ls];
    }
    
  }
  else
  {
    int medio = (li + ls) / 2;
    int max1, max2, min1, min2;
    maxmin(n, li, medio, max1, min1);
    maxmin(n, medio + 1, ls, max2, min2);
    if (max1 > max2)
    {
      max = max1;
    }
    else
    {
      max = max2;
    }
    if (min1 < min2)
    {
      min = min1;
    }
    else
    {
      min = min2;
    }
  }
}
