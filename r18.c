/*submit your answer to 18
1000 以下の 7 の倍数を全てプリントする関数 void sevens_under_1000_p(void).*/

#include <stdio.h>

void sevens_under_1000_p(void);

int main(void){
  
  sevens_under_1000_p();

  return 0;
}

void sevens_under_1000_p(void){

  for(int i = 1; i <= 1000; i++){
    if(i % 7 == 0){
      printf("%d\n", i);
    }
  }
}
