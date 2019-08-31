/*submit your answer to 16
キーボードから整数 x,y を入力し、 x が y で割り切れたら "割り切る"、 そうでない時、"割り切れない" をプリントする関数 void divide_p(void).*/

#include <stdio.h>

void divide_p(void);

int main(void){

  divide_p();
  
  return 0;
}

void divide_p(void){
  int x = 0, y = 0;
  
  printf("enter x :");
  scanf("%d", &x);
 
  printf("enter y :");
  scanf("%d", &y);

  if(y == 0 || x % y == 0){
    printf("割り切る\n");
  }
  else{
    printf("割り切れない\n");
  }
  
}
