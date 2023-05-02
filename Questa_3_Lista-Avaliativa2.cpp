#include <stdio.h>
#include <locale.h>
int main() {
    const double PI = 3.14159;  
    double raio, area, volume;
	setlocale(LC_ALL,"Portuguese");
    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    volume = (4.0/3) * PI * raio * raio * raio;
    area = 4 * PI * raio * raio;

    printf("Volume da esfera: %.2lf\n", volume);
    printf("Área da superfície da esfera: %.2lf\n", area);

    return 0;
}

