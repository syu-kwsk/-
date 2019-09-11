/*submit your answer to 21
m 以上、n 以下の k の倍数をプリントする関数 void between_p(int m, int n, int k).*/

#include <stdio.h>

void between_p(int m, int n, int k);

int main(void){

  between_p(9, 2019, 11);
  return 0;
  
}

void between_p(int m, int n, int k){

  for(int i = m; i <= n; i++){
    if(i % k == 0){
      printf("%d ", i);
    }
  }
  printf("\n");
  
}
