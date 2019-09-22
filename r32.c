/*submit your answer to 32
時刻 h1:m1:s1 と 時刻 h2:m2:s2 の間の秒数を整数で返す関数 int sec_between(int h1, int m1, int s1, int h2, int m2, int s3).*/

#include <stdio.h>

int sec_between(int h1, int m1, int s1, int h2, int m2, int s2);

int main(void){
  printf("%d\n", sec_between(8, 20, 0, 23, 30, 0));
  return 0;
}

int sec_between(int h1, int m1, int s1, int h2, int m2, int s2){
  int first = 3600 * h1 + 60 * m1 + s1;
  int second = 3600 * h2 + 60 * m2 + s2;

  return first > second ? first - second : second - first;
}
