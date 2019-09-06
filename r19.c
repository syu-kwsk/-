/*submit your answer to 19
n 以下の 7 の倍数をプリントする関数 void sevens_under_p(int n).*/

#include <stdio.h>

void sevens_under_p(int n);

int main(void){

  sevens_under_p(906);
  return 0;
}

void sevens_under_p(int n){

  for(int i = 1; i < n; i++){

    if(i % 7 == 0){
      printf("%d ", i);
      }
  }
  printf("\n");

}
