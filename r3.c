/*submit your answer to 3
整数ひとつをキーボードから読み、 それに 1 を足した数をプリントする関数 void add1_p(void).*/

#include <stdio.h>

void add1_p(void);

int main(void){
  
  add1_p();
  
  return 0;
}

void add1_p(void){
  int n;
  printf("Enter number:");
  scanf("%d", &n);
  printf("Add 1 = %d\r\n", n+1);
}
