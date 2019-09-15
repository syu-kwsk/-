/*submit your answer to 25
整数一つを引数とし、 その数が素数だったら "素数です" とプリントする関数 void is_prime_p(int). 104729 は素数です。*/

#include <stdio.h>

void is_prime_p(int n);

int main(void){

  is_prime_p(4);
  return 0;
  
}


void is_prime_p(int n){

  int check = 1;
  
  for(int i = 2; i < n; i++){
    if(n % i == 0){
      check = 0;
    }
  }

  if(check){
    printf("%d は素数です。\n", n);
  }
 

}
