/*submit your answer to 22
整数一つを引数とし、その約数を全てプリントする関数 void divisors_p(int n).*/

#include <stdio.h>

void divisors_p(int n);

int main(void){

  divisors_p(912);
  
  return 0;
}

void divisors_p(int n){

  for(int i = 1; i <= n; i++){
    if(n % i == 0){
      printf("%d ", i);
    }
  }
  printf("\n");
}
