/*submit your answer to 20
m 以上、n 以下の 7 の倍数をプリントする関数 void sevens_between_p(int m, int n).*/

#include <stdio.h>

void sevens_between_p(int m, int n);

int main(void){

  sevens_between_p(9, 909);

  return 0;

}

void sevens_between_p(int m, int n){
  for(int i = m; i <= n; i++){
    if(i % 7 == 0){
      printf("%d ", i);
    }
  }
  printf("\n");
}

