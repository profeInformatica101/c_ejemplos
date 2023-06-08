#include <stdio.h>

#define PI 3.14
   
//Variable Global
double radio;

void circulo(double radio) {
    // Calcular el perímetro y el área
    double perimetro = 2 * PI * radio;
    double area = PI * radio * radio;
    
    // Mostrar los resultados
    printf("El perímetro del círculo es: %lf\n", perimetro);
    printf("El área del círculo es: %lf\n", area);

}


void main(){
 
    // Pedir al usuario el radio del círculo
    printf("Introduce el radio del círculo: ");
    scanf("%lf", &radio);
    circulo(radio);
}
//comando para compilar $> gcc circulo.c -o circulo
//Comando para ejecutar $>./ciruclo
