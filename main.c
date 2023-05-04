#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fila=99;
int col=99;

int camax (int m[fila][col]);
void miramax(int m[fila][col]);
void radomatrix(int m [fila][col]);
int sumatrix(int m[fila][col]);
float promix (float m[fila][col]);
float sumatrixx(float m[fila][col]);
float camatrix (float m[fila][col]);
void miratrix(float m[fila][col]);
void cargaspren(char m[fila]);
void muestraspren(char m[fila][col],int val);
int alfaspren(char m[fila][col], int val, char a[fila][col]);
void cordenainador(char arr[fila][col], int val);
void insertainador(char arr[fila][col],int val, char dato[]);

int main()
{
    char yes;
    int option;
    int mati[fila][col];
    int mario =0;
    float luigi;
    float mari[fila][col];
    int yoshi;
    char syl[fila][col];
    char patron[fila][fila];


    do
    {
        printf("Bienvenido al TP N4.1: Matrices, por favor, seleccione un ejercicio: ");
        fflush(stdin);
        scanf("%i", &option);
        switch(option)
        {
        case 1:
            printf("Elija la cantidad de filas: ");
            fflush(stdin);
            scanf("%i", &fila);

            printf("\nElija la cantidad de columnas: ");
            fflush(stdin);
            scanf("%i", &col);

            camax(mati);
            break;

        case 2:
            printf("Elija la cantidad de filas: ");
            fflush(stdin);
            scanf("%i", &fila);

            printf("\nElija la cantidad de columnas: ");
            fflush(stdin);
            scanf("%i", &col);

            camax(mati);
            miramax(mati);
            break;
        case 3:
            radomatrix(mati);
            miramax(mati);
            break;

        case 4:
            printf("Elija la cantidad de filas: ");
            fflush(stdin);
            scanf("%i", &fila);

            printf("\nElija la cantidad de columnas: ");
            fflush(stdin);
            scanf("%i", &col);

            camax(mati);

            mario=sumatrix(mati);
            miramax(mati);
            printf("La suma de los elementos dentro de la Matris es: %i\n", mario);
            break;

        case 5:
            printf("Elija la cantidad de filas: ");
            fflush(stdin);
            scanf("%i", &fila);

            printf("\nElija la cantidad de columnas: ");
            fflush(stdin);
            scanf("%i", &col);

            camatrix(mari);

            luigi=promix(mari);
            miratrix(mari);
            printf("El Promedio de los elementos sumados dentro de la matrix es: %f\n", luigi);
            break;

        case 6:
            printf("Elija la cantidad de filas: ");
            fflush(stdin);
            scanf("%i", &fila);

            printf("\nElija la cantidad de columnas: ");
            fflush(stdin);
            scanf("%i", &col);

            printf("\nEscriba el dato a buscar :)");
            fflush(stdin);
            scanf("%i", &yoshi);


            camax(mati);

            mario=buscatrix(mati,yoshi);

            if(mario==1)
            {
                printf("El Dato se encuentra en la matrix \n");
            }
            else
            {
                printf("El Dato NOOO se encuentra en la matrix\n");
            }
            break;

        case 7:
            mario=cargasprens(syl);

            printf("Se cargaron %i palabras\n", mario);
            break;
        case 8:
            mario=cargasprens(syl);
            muestraspren(syl,mario);
            break;

        case 9:
            mario=cargasprens(syl);
            cargaspren(patron);
            yoshi = buscaspren(syl, mario, patron);
            if(yoshi ==1)
            {
                printf("La palabra se enceuntra en el string");
            }
            else{
                printf("La palabra NO se enceuntra en el string");
            }
            break;
        case 10:
            mario=cargasprens(syl);
            cargaspren(patron);
            yoshi = alfaspren(syl, mario, patron);
            if(yoshi ==1)
            {
                printf("La palabra se enceuntra en el string");
            }
            else{
                printf("La palabra NO se enceuntra en el string");
            }
            break;
        case 11:
            mario=cargasprens(syl);
           muestraspren(syl, mario);
            cordenainador(syl, mario);
            muestraspren(syl, mario);


            break;



        default:
            printf("\nPONE UN NUMERO VALIDO BOBOOOOOOOOOOOO\n");
            break;

        }
        printf("Desea realizar otro ejercicio precione 's' para si: ");
        fflush(stdin);
        scanf("%c", &yes);
    }
    while(yes == 's'|| yes == 'S');



    return 0;
}

int camax (int m[fila][col])
{
    int i;
    int j;
    for(i = 0; i<fila; i++)
    {
        printf("Fila %i:\n",i);
        for(j=0; j< col; j++)
        {
            printf("carga el numero que quiera en la columna %i: ",j);
            fflush(stdin);
            scanf("%i", &m[i][j]);
        }
    }
}

void miramax(int m[fila][col])
{
    int i, j;
    printf("La matriz es:\n\n");

    for(i=0; i<fila; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("|%i|", m[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}

void miratrix(float m[fila][col])
{
    int i, j;
    printf("La matriz es:\n\n");

    for(i=0; i<fila; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("|%f|", m[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}

void radomatrix(int m [fila][col])
{
    int i,j;
    srand(time(NULL));

    for(i = 0; i<fila; i++)
    {
        for(j=0; j< col; j++)
        {
            m[i][j]=rand()%100+1;
        }
    }
}

int sumatrix(int m[fila][col])
{
    int i, j;
    int totale=0;

    for(i=0; i<fila; i++)
    {
        for(j=0; j<col; j++)
        {
            totale= totale+m[i][j];
        }
        printf("\n");
    }
    return totale;
}

float camatrix (float m[fila][col])
{
    int i;
    int j;
    for(i = 0; i<fila; i++)
    {
        printf("Fila %i:\n",i);
        for(j=0; j< col; j++)
        {
            printf("carga el numero que quiera en la columna %i: ",j);
            fflush(stdin);
            scanf("%f", &m[i][j]);
        }
    }
}

float sumatrixx(float m[fila][col])
{
    int i, j;
    float totale=0;

    for(i=0; i<fila; i++)
    {
        for(j=0; j<col; j++)
        {
            totale= totale+m[i][j];
        }
        printf("\n");
    }
    return totale;
}

float promix (float m[fila][col])
{
    float num=(float)fila*(float)col;
    float totale=0;
    printf("%f",num);
    totale=sumatrixx(m);
    totale = totale/num;
    return totale;
}

int buscatrix(int m [fila][col],int dato)
{
    int i;
    int j;
    int flag=0;
    for(i = 0; i<fila; i++)
    {
        for(j=0; j< col; j++)
        {
            if(dato==m[i][j])
            {
                flag=1;
            }
        }
    }
    return flag;
}

void cargaspren(char m[fila])
{
    printf("ingrese la palabra que desea cargar: ");
    fflush(stdin);
    gets(m);
}

void muestraspren(char m[fila][col],int val)
{
    for(int i=0 ; i < val ; i++)
    {
        printf("%s", m[i]);
         printf("\n");
    }

}

int cargasprens(char m[fila][col])
{
    char yes= 's';
    int i=0;

    while(i<fila && yes =='s')
    {
        printf("\nIngrese una palabra: ");
        fflush(stdin);
        gets(m[i]);


        printf("Desea agregar otra palabra? ");
        fflush(stdin);
        scanf("%c", &yes);
        i++;

    }

    return i;
}

int buscaspren(char m[fila][col], int val, char a[fila][col])
{
    int flag=0;
    int i=0;
    int keke=0;

    while(i<=val)
    {
        flag=strcmp(m[0],a[i]);
        if(flag==0)
        {
            keke=1;
            i++;
        }else{
        i++;
        }
    }
return keke;
}

int alfaspren(char m[fila][col], int val, char a[fila][col]) //si son iguales
{
    int flag=0;
    int i=0;
    int keke=0;

    while(i<=val)
    {
        flag=strcmp(m[0],a[i]);
        if(flag==0)
        {
            keke=1;
            i++;
        }else{
        i++;
        }
    }
    if(keke==0)
    {
        i=-1;
    }
    else{
        i=keke;
    }
   return i;
}

void insertainador(char arr[fila][col],int val, char dato[])
{
    int i = val;
    printf("\nDATOOOOOOOOOOOOOOOOOOO %s\n", dato);

    while(strcmp(dato,arr[i])==-1 && i>=0)
    {
        printf("%i", strcmp(dato,arr[i]));

        strcpy(arr[i+1],arr[i]);
        i--;
    }
    printf("\nDATOOOOOOOOOOOOOOOOOOO2 %s\n", dato);
    strcpy(arr[i+1],dato);
}
//guardar en una variable la pos del arreglo y dsp pasar a srtcpy asi porque no se pueden pasar a funciones arr[+1] o cosas asi

void cordenainador(char arr[fila][col], int val)
{
    int i=0;
    while(i<val-1)
    {
        insertainador(arr, i, arr[i+1]);
        muestraspren(arr, val);
        i++;
    }
}

















