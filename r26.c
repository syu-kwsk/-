/*submit your answer to 26
整数一つを引数とし、 その数が素数だったら1、素数でなかったら 0 を返す関数 int is_prime(int n).*/

#include <stdio.h>

int is_prime(int n);

int main(void){

  printf("%d\n", is_prime(916));
}

int is_prime(int n){

  int check = 1;
  for(int i = 2; i < n; i++){
    if(n % i == 0){
      check = 0;
    }
  }

  return  check;  
}
