/*submit your answer to 50
  100 以下の整数のうち、もっとも約数の多い数を返す関数 int most_divisors100(void). 複数あるときはそのうちの一つを返せば OK とする。*/

#include <stdio.h>

int most_divisor100(void);

int main(void){
  printf("%d\n", most_divisor100());
  return 0;
}

int most_divisor100(void){
  int ans = 0;
  int max = 1;
  
  for(int i = 1; i <= 100; i++){
    int count = 0;
    
    for(int j = 1; j <= i; j++){    
      if(i % j == 0){
        count++;
      }
    }
    
    if(count > max){
      max = count;
      ans = i;
    }
    
  }
  
  return ans;
}
