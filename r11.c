/*整数 x, y を引数にとり、それらの和、差、積、整数商をプリントする関数 void wa_sa_seki_sho_p(int x, int y).*/

#include <stdio.h>

void wa_sa_seki_sho_p(int x, int y);

int main(void){
  wa_sa_seki_sho_p(8, 14);
  return 0;
}

void wa_sa_seki_sho_p(int x, int y){
  
  printf("wa = %d\n", x + y);
  printf("sa = %d\n", x - y);
  printf("seki = %d\n", x * y);
  
  if(y){
    printf("sho = %d\n", x / y);
  }
  else{
    printf("sho cannot define\n");
  }
  

}


