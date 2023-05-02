#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, distancia;
	setlocale(LC_ALL,"Portuguese");
    printf("Digite as coordenadas x e y do ponto 1: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Digite as coordenadas x e y do ponto 2: ");
    scanf("%lf %lf", &x2, &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Distância = %.4lf\n", distancia);

    return 0;
}

