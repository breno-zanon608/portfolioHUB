
  #include <stdio.h>

int main() {
  float tc;
  float tf;
  printf("Digite um valor em Celsius: ");
  scanf("%f" , &tc);
  tf = (9*tc +160) / 5 ;
  printf("A temperatura em escala absoluta é: %f" , tf);

}

gcc temperatura.c -o resultado
./resultado
