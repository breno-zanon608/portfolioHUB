  #include <stdio.h>

 int main() {
  float base_maior, base_menor, altura, resultado;

  printf("Digite a base maior do trapezio: ");
   scanf("%f" , &base_maior);

  printf("Digite a base menor: ");
   scanf("%f" , &base_menor); 

  printf("Digite altura: ");
      scanf("%f" , &altura);

    resultado = (base_maior+base_menor) * altura / 2;

    printf("O valor da area e: %f" , resultado);
    return 0; 
 }
