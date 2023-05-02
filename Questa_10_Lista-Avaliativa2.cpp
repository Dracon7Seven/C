#include <stdio.h>
#include <locale.h>
int main() {
   int num, soma = 0;
   float media;
   setlocale(LC_ALL,"Portuguese");
   for (int i = 1; i <= 10; i++) {
      printf("Digite o %dº número: ", i);
      scanf("%d", &num);
      soma += num;
   }

   media = (float) soma / 10;
   printf("\nA média dos números digitados é %.2f\n", media);
   
   return 0;
}

