#include <stdio.h>
int main(){
float x, y, z, add, sub;

printf("Informe 2 números para serem somados:\n");
scanf("%f%f", &x, &y);
add = x + y;
printf("A soma entre os numeros %.2f e %.2f e: %.2f\n", x, y, add);
printf("Informe mais um numero para subtrair do resultado da soma anterior:\n");
scanf("%f", &z);
sub = add - z;
printf("A subtracao do resultado da soma anterior pelo numero informado e: %.2f\n", sub);

return 0;
}
