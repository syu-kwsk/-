/*submit your answer to 23
整数一つを引数とし、その約数の合計を戻り値とする関数 int sum_of_divisors(int n).*/

#include <stdio.h>

int sum_of_divisors(int n);

int main(void){

  printf("%d\n", sum_of_divisors(913));

  return 0;
}

int sum_of_divisors(int n){
  int sum = 0;
  for(int i = 1; i <= n; i++){
    if(n % i == 0){
      sum += i; 
    }
  }
  
  return sum;
}
