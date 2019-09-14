/*submit your answer to 24
整数一つを引数とし、その数が完全数かどうかを判定する関数 int is_perfect(int n).*/

#include <stdio.h>

int is_perfect(int n);

int main(void){

  int n = 33550336;
  if(is_perfect(n)){
    printf("%d is perfect.\n", n);
  }
  else{
    printf("%d is not perfect.\n", n);
  }
  return 0;
  
}

int is_perfect(int n){
  int sum = 0;
  for(int i = 1; i < n; i++){
    if(n % i == 0){
      sum += i;
    }
  }
  return sum == n;  
}
