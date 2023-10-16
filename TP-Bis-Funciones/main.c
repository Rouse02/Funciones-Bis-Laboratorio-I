#include <stdio.h>
#include <stdlib.h>
/** FUNCIONES: */
//Prototipado
int Rand();
void tablaMulti(int num);
void encontrarMayor();
void encontrarMenor();
int numero(int num);
void funcionamientoCalc();
int pedirDato1(int a);
int pedirDato2(int b);
int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b);
int cambioSigno(int a);
void cambioDeValor(int a, int b);

int main()
{
    /** 1.Desarrollar una función que devuelva un valor RANDOM en el rango de 0 a 100 */
    /*
     int valorRandom;
     valorRandom = Rand();
     printf("Numero aleatorio:%i ", valorRandom);
     printf("\n");
     */
    /* 2.Diseñe una función que reciba 3 números enteros y muestre el mayor y el menor./
    /*
        encontrarMayor();
        encontrarMenor();
    */
    /** 3.Diseñe una función que reciba un número entero N y realice la suma de los números
        enteros positivos menores que N y lo retorne. N es un dato ingresado por el usuario en
        el main. */
    /*
    int n, retorno;
    printf("Ingrese un numero entero: ");
    scanf("%i", &n);
    retorno = numero(n);
    printf("La suma de los numeros menores que N es: %i", retorno);
    printf("\n");
    */
    /** 4.Desarrollar una función que muestre la tabla de multiplicar de un número entero recibido por
        parámetro. */
    /*
    int numero;

    printf("Ingrese el numero para ver la tabla de multiplicar \n");
    printf("\n");
    scanf("%i", &numero);
    printf("\n");
    tablaMulti(numero); */

    /** 5.Realice una pequeña calculadora, utilizando funciones (una función de suma, una de
        multiplicación, una de resta, una de división...) */
       /* char eleccion;
        int a, b, suma, resta, multiplicacion;
        float division;

        funcionamientoCalc();
        printf("\n");

        printf("Ingrese el tipo de operacion a realizar \n");
        fflush(stdin);
        scanf("%c", &eleccion);
        printf("\n");

        switch (eleccion) {
        case 's':
            a =  pedirDato1(a);
            b =  pedirDato2(b);

            suma = sumar(a, b);
            printf("%i + %i = %i",a, b, suma);
            printf("\n");
        break;

        case 'r':
            a =  pedirDato1(a);
            b =  pedirDato2(b);

            resta = restar(a, b);
            printf("%i - %i = %i",a, b, resta);
            printf("\n");
        break;

        case 'm':
            a =  pedirDato1(a);
            b =  pedirDato2(b);

            multiplicacion = multiplicar(a, b);
            printf("%i x %i = %i",a, b, multiplicacion);
            printf("\n");
        break;

            case 'd':
            a =  pedirDato1(a);
            b =  pedirDato2(b);

            division = dividir(a, b);
            printf("%i : %i = %.2f",a, b, division);
            printf("\n");
        break;

        } */


    /** 6.Realizar una función que reciba un número positivo entero por parámetro por referencia, y
        cambie su signo a negativo. */
    /*
        int a, valorA;

        printf("Ingrese un numero entero positivo \n ");
        scanf("%i", &a);
        printf("\n");

        valorA = cambioSigno(a);
        printf("El numero es: -%i", valorA);
        printf("\n"); */



    /** 7.Realizar una función que reciba dos números enteros por parámetro por referencia y cargue
        sus valores el usuario dentro de la función. */

        int a, b;

        printf("Ingrese un numero \n");
        scanf("%i", &a);
        printf("\n");
        printf("Ingrese otro numero \n");
        scanf("%i", &b);
        printf("\n");

        cambioDeValor(a, b);
        printf("\n");
        printf("Los primeros dos numeros ingresados son: %i y %i", a, b);
        printf("\n");
        printf("\n");
}

//Ejercicio 1. Función: Devuelve un valor random.
int Rand(){
    srand(time(NULL));
    int num;
    num = rand()%100+1;
    return num;
}
//Ejercicio 2. Función: Encontrar el mayor de 3 valores
void encontrarMayor(){
    srand(time(NULL));
    int num1,num2,num3;
    num1 = rand()%10+1;
    num2 = rand()%10+1;
    num3 = rand()%10+1;
    if(num1 > num2 && num1 > num3)
    {
        printf("El numero mayor es: %i \n", num1);
    }
    else if(num2 > num1 && num2 > num3)
    {
        printf("El numero mayor es: %i \n", num2);
    }
    else if(num3 > num1 && num3 > num2)
    {
        printf("El numero mayor es: %i \n", num3);
    }
}
//Ejercicio 2. Función: Encontrar el menor de 3 valores
void encontrarMenor(){
    srand(time(NULL));
    int num1,num2,num3;
    num1 = rand()%10+1;
    num2 = rand()%10+1;
    num3 = rand()%10+1;
    if(num1 < num2 && num1 < num3){
        printf("El numero menor es: %i \n", num1);
    }else if(num2 < num1 && num2 < num3){
        printf("El numero menor es: %i \n", num2);
    }else if(num3 < num1 && num3 < num2){
        printf("El numero menor es: %i \n", num3);
    }
}
//Ejercicio 3 Función: Sumar los valores menores a un numero ingresado por el usuario
int numero(int num){
    int i, acumulador;
    acumulador = 0;
    for(i = 1; i < num; i++){
        acumulador = acumulador + 1;
    }
    return acumulador;
}
//Ejercicio 4 Función: La tabla de multiplicar de un numero ingresado por el usuario
void tablaMulti(int num) {
    int multi, i;
    for(i = 1; i <= 10; i++){
        multi = num * i;
        printf(" %i X %i = %i \n", num, i, multi);
    }
}

//Ejercicio 5: Realizar una calculadora

//Función: Funcionamiento de la calculadora
    void funcionamientoCalc() {
    printf("Funcionamiento de la calculadora: \n");
    printf("\n");
    printf("Sumar = 's' \n");
    printf("Restar = 'r' \n");
    printf("Multiplicar = 'm' \n");
    printf("Dividir = 'd' \n");
}

//Función: Pedir Datos al usuario(x num)
int pedirDato1(int a) {
    int dato1;
    printf("Ingrese un numero: \n");
    scanf("%i", &a);
    printf("\n");
    dato1 = a;
    return dato1;
}
int pedirDato2(int b) {
    int dato2;
    printf("Ingrese otro numero \n");
    scanf("%i", &b);
    printf("\n");
    dato2 = b;
    return dato2;
}
//Función: Sumar
int sumar(int a, int b){
    int suma;
    suma = a + b;
    return suma;
}
//Funcion para restar:
int restar(int a, int b) {
    int resta;
    resta = a - b;
    return resta;
}
//Funcion para multiplicar:
int multiplicar(int a, int b) {
    int multiplicacion;
    multiplicacion = a * b;
    return multiplicacion;
}
//Funcion para dividir
float dividir(int a, int b) {
    int division;
    division = a / b;
    return division;
}
//Ejercicio 6. Función cambio de signo
int cambioSigno(int a) {
int *puntA;

puntA = &a;
puntA = a;
return puntA;
}
//Ejercicio 7. Función cambio de valores con punteros
void cambioDeValor(int a, int b) {
    int *puntA, *puntB;

    puntA = &a;
    puntB = &b;

    printf("Por cual numero quiere reemplazar el primer valor ingresado? \n");
    scanf("%i", &a);
    printf("\n");
    printf("Por cual numero quiere reemplazar el segundo valor ingresado? \n");
    scanf("%i", &b);

    puntA = a;
    puntB = b;

    printf("\n");
    printf("Los numeros reemplazados son: %i y %i \n", puntA, puntB);
    printf("\n");
}
