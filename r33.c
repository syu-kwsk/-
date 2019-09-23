/*submit your answer to 33
時刻 h1:m1:s1 と 時刻 h2:m2:s2 の間の時間をプリントする関数 void times_between_p(int h1, int m1, int s1, int h2, int m2, int s3). */

#include <stdio.h>

void times_between_p(int h1, int m1, int s1, int h2, int m2, int s2);

int main(void){
  
  times_between_p(7, 40, 30, 23, 14, 49);
  return 0;
  
}

int sec_between(int h1, int m1, int s1, int h2, int m2, int s2){
  int first = 3600 * h1 + 60 * m1 + s1;
  int second = 3600 * h2 + 60 * m2 + s2;

  return first > second ? first - second : second - first;
}

void times_between_p(int h1, int m1, int s1, int h2, int m2, int s2){

  int between = sec_between(h1, m1, s1, h2, m2, s2);
  int hour = between / 3600;
  int min = (between % 3600) / 60;
  int sec = (between % 60);
  
  printf("%d:%d:%d\n", hour, min, sec);
}
