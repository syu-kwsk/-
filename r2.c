/*submit your answer to 2
  引数 n で与えらえれた回数分、"hello, robocar!" をプリントする関数 void hellos_p(int n).*/
#include <stdio.h>

void hellos_p(int n);

int main(){

  hellos_p(10);
  
  return 0;
}

void hellos_p(int n){
  
  for(int i = 0; i < n; i++){
    printf("%d:hello, robocar!\n", i+1);
  }
  
}
