/*submit your answer to 27
n 以下の素数(nは整数)は何個あるかを戻り値とする関数 int primes(int n). primes(10000) の戻り値は多分 1229。*/

#include <stdio.h>

int primes(int n);

int main(void){

  printf("%d\n", primes(10000));
  return 0;
}

int primes(int n){
  if(n <= 1){
    return 0;
  }
  if(n == 2){
    return 1;
  }

  int sum = 1;
  for(int i = 3; i <= n; i++){
    int check = 1;
    for(int j = 2; j < i; j++){
      if(i % j == 0){
        check = 0;
      }
    }
    if(check){
      sum++;
    }
  }

  return sum;
}
