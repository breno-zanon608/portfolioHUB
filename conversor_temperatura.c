
  #include <stdio.h>

int main() {
  float tc;
  float tf;
  printf("Digite um valor em Celsius: ");
  scanf("%f" , &tc);
  tf = (tc * 9/5) + 32; 
  printf("A temperatura em escala absoluta é: %f" , tf);

}

