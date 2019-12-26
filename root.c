#include <stdio.h>
#include <stdlib.h>

/* iphoneの小数限界を超えたい
 * iphoneの標準電卓では四捨五入して小数第15位までしかでない
 * それ以上の精度で第一引数の平方根を返します
 * また、第二引数で桁数を指定
 * 小数16位からはhttp://ankokudan.org/d/e.htmlを参照
 * */

long double calc_keta(int n){
  
  long double keta = 1;
  for (int i = 1; i <= n; i++) {
    keta /= 10;
  }
  return keta;
}


long double root(int n, int keta){

  long double ans = 0;
  long double genkai_keta = calc_keta(keta);

  for (long double bairitu = 1; bairitu > genkai_keta; bairitu= bairitu*0.1) {

    for (int i = 0; ans*ans < n; i++) {
      ans += bairitu;
    }
    ans -= bairitu;
  }

  return ans;
}

int main(void){
  int n, keta;
  scanf("%i", &n);
  scanf("%i", &keta);
  printf("%.18Lf", root(n, keta));


  return 0;
}
