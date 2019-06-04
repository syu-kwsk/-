# -


## 練習問題解いてみる


```C
#define _CRT_NO_SECURE_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(){

int num, sum = 0;

printf("enter number:");
scanf("%d", &num);

while(1){

  if(num <= 0){
    printf("try again");
    }
  else{
  
  for(int i = 0; i <= num; i++){
    if(i%2){
    sum += i;
    printf("\t%d", i);
    printf("\t%d\n",sum);
  }
  break;

 }

}

printf("%d", sum);

system("pause");
return 0:
}

```
