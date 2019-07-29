### 練習
# 動作確認必須。全角が入ってたりコピーミスったら終わり


#### 期末
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int check(int n);
int check_range(int n);
void list(int *data, int *result);

int check(int n) {
	int ans = 0;

	n % 2 ? ans = 1 : ans = 0;

	return ans;
}

int check_range(int n) {
	int ans = 0;
	if (n > 5 || n <= 0) {
		ans = 1;
	}

	return ans;
}

void list(int *data, int *result) {
	for (int *i = data; i < data+5; i++) {
		*result = check(*i);
		result++;
	}
}



int main(void) {
	int n = 0;
	int data[5] = { 5, 9, 12, 18, 21};
	int result[5];
	int range_ok = 1;

	list(&data[0], &result[0]);

	while (range_ok) {
		printf("1～5の整数を入力してください\r\n");
		scanf("%d", &n);
		range_ok = check_range(n);
	}

	

	printf("%d\t\r\n",  check( data[n-1] ) );
		

	system("pause");
	return 0;
}
```

#### 入力された正の整数までの３の倍数をすべて求める

```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {

	int num;    //読み取り用の変数
	int sum = 0;//合計値　出力用の変数

	/*正の整数を入力してもらう*/
	printf("enter number:");
	scanf("%d", &num);
	
	/*正負によって処理を変えるループ*/
	while (1) {
		printf("入力された値は%dです\n", num);

		/*負のときは再入力を促す*/
		if (num <= 0) {
			printf("try again\n");
			printf("enter number:");
			scanf("%d", &num);
		}

		/*正のときは合計値を求める*/
		else {

			for (int i = 1; i <= num; i++) {

				/*あまりが非0のとき＝３の倍数のとき*/
				if (i % 3 == 0) {
					sum += 1;            //sum(３の倍数の０個数)に1を足す
					printf("%d\n", i);   //iを表示
				}

			}

			/*足し終わったらwhileを出る*/
			break;
		}
	}

	/*結果の出力*/
	printf("３の倍数は全部で%d個です\n", sum);//合計値の出力

	system("pause");
	return 0;
}
```
#### 入力された正の整数までの奇数の総和を求める


```C

#define _CRT_SECURE_NO_WARNINGS

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
