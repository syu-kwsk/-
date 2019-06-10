### 練習
# 動作確認必須。全角が入ってたりコピーミスったら終わり


#### 入力された正の整数までの奇数の総和を求める


```C

#define _CRT_NO_SECURE_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(){

  int num;    //読み取り用の変数
  int sum = 0;//合計値　出力用の変数

  /*正の整数を入力してもらう*/
  printf("enter number:");
  scanf("%d", &num);

  /*正負によって処理を変えるループ*/
  while(1){

    /*負のときは再入力を促す*/
    if(num <= 0){
      printf("try again\n");
      printf("enter number:");
      scanf("%d", &num);
    }
      
    /*正のときは合計値を求める*/
    else{

      for(int i = 0; i <= num; i++){
      
        /*あまりが非0のとき＝奇数のとき*/
        if(i%2){
          sum += i;            //sumにiを足す
          printf("\t%d", i);   //iを表示
          printf("\t%d\n", sum);//ここまでの合計値を表示
        }
   
      }
     
      /*足し終わったらwhileを出る*/
      break;
    }
  }
  
  /*結果の出力*/
  printf("sum = %d\n", sum);//合計値の出力

  system("pause");
  return 0;
}

```
