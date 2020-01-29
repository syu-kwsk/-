#include <stdio.h>
#include <stdlib.h>
//1
void hello_p(void){
	printf("hello, robocar!\n");
}
//2
int add1(int x){
  return x + 1;
}
//3
void add1_p(void){
  int num;
  scanf("%d", &num);
  printf("%d\n", num+1);
}
//4
float en(int r){
    return r*r*3.14;
}
//5
void en_p(void){
    int r;
    scanf("%d", &r);
    printf("%f", r*r*3.14);
}
//6
int even(int x){
  return !(x%2);
}
//7
void even_p(void){
  int x;
  scanf("%d", &x);
  if (even(x)) {
    puts("偶数です");
  } else {
    puts("奇数です");
  }
}
//8
int add2(int x, int y) {
  return x + y;
}
//9
void add2_p(int x, int y) {
  printf("%d", add2(x, y));
}
//10
int cal2(int x, int y, int type) {
  switch(type){
  case 1 :
    return x + y;
  case 2 :
    return x - y;
  case 3 :
    return x * y;
  case 4 :
    return x / y;
  }
}
void wa_sa_seki_sho_p(int x, int y){
  printf("%d\n", cal2(x, y, 1));
  printf("%d\n", cal2(x, y, 2));
  printf("%d\n", cal2(x, y, 3));
  printf("%d\n", cal2(x, y, 4));
}
//11
int divide(int x, int y) {
  return x % y == 0 ? 1 : 0;
}
//12
void divide_p(void) {
  int x, y;
  scanf("%d", &x);
  scanf("%d", &y);
  
  if (divide(x, y)) {
    printf("割り切る");
  } else {
    printf("割り切れない");
  }
}
//13
int abs(int n) {
  if (n < 0) {
    return n * -1;
  } else {
    return n;
  }
}
//14
int square(int n) {
  return n*n;
}
//15
int triple(int n) {
  return n*n*n;
}
//16
int power(int n, int m) {
  int ans = 1;
  for (int i = 0; i < m; i++) {
    ans *= n;
  }

  return ans;  
}
//17
int teenager(int y){
	return y <= 19 ? y >= 13 ? 1 : 0 : 0;
}
//18
int max2(int x, int y) {
  return x > y ? x : y;
}
//19
void max_p(int x, int y) {
  printf("%d", max2(x, y));
}

/* comment from 9369,
もっとわかりやすく書いてください。
*/

//20
int max3(int x, int y, int z) {
  return max2(x, max2(y, z));
}
//21
int max4(int x, int y, int z, int w) {
  return max3(x, y, max2(z, w));
}
//22
int triangle(int x, int y, int z) {
  return x+y+z - max3(x, y, z) > max3(x, y, z) ? 1 : 0;
}
//23
int right_angle(int x, int y, int z) {
  if (triangle(x, y, z)){
    int shahen = max3(x, y, z);
    return x*x + y*y + z*z - shahen*shahen == shahen*shahen ? 1 : 0;
  }
  else {
    return 0;
  }
}
//24
int sum(int n, int m) {
  int ans = 0;
  for (int i = n; i <= m; i++){
    ans += i;
  }
  return ans;
}
//25
int product(int n, int m) {
  int ans = 1;
  for (int i = n; i <= m; i++) {
    ans *= i;
  }
  return ans;
}
//26
int sum_of_digits(int n) {
  int ans = 0;
  for (int i = 10; n > 0; n /= 10) {
    ans += (n % i);
  }
  return ans;
}
//27
int fz(int n) {
  int is_3 = (n % 3 == 0 ? 1 : 0);
  int is_5 = (n % 5 == 0 ? 1 : 0);
  if (is_3 && is_5) {
    return 3;
  } else if (is_3) {
    return 1;
  } else if (is_5) {
    return 2;
  } else {
    return 0;
  }
}
//28
void divisors_p(int n) {
  for (int i = 1; i <= n; i++) {
    if (n%i == 0) {
      printf("%d ", i);
    }
  }
}

//51
int rand_n(int n){
  return random() % n;
}
//106
int is_small(int x, int y){
  return !(x > y);
}//大なりがだめとは言われてない
//109
int stoic_times(int n, int m){
  int ans = 0;
  for(int i = 1; i <= m; i++){
    ans += n;
  }
  return ans;
}
int main(void) {
    // 定義した関数の呼び出しをここに。
  
  //printf(("%d", even(1));
  //even_p();
  //add2_p(23, 42);
  //wa_sa_seki_sho_p(60, 5)
  //divide_p();
  //printf("%d", power(20, 0));
  //max_p(3, 6);
  //printf("%d", max4(1, 2, 3, 4));
  //printf("%d", right_angle(12, 13, 5));
  //printf("%d", fz(15));
  divisors_p(60);
  return 0;
}
