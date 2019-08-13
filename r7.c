/*submit your answer to 7
キーボードから整数ひとつを入力し、それが偶数だったら "偶数です"、 奇数だったら "奇数です" とプリントする関数 void even_p(void).*/

#include <stdio.h>

void even_p(void);
int main(void){
  
  even_p();

  return 0;
}

void even_p(void){
  int n;
  printf("Enter num :");
  scanf("%d", &n);
  
  if(n%2){
    printf("num is odd.\n");
  }
  else{
    printf("num is even.\n");
  }
}
