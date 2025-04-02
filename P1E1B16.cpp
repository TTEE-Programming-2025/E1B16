#include<stdio.h>
#include<stdlib.h>
int main(void){
	printf("我\n");
    printf("是\n");
    printf("大\n");
    printf("同\n");
    printf("電\n");
    printf("機\n");
    printf("工\n");
    printf("程\n");
    printf("學\n");
    printf("系\n");
    printf("E\n");
    printf("1\n");
    printf("B\n");
    printf("1\n");
    printf("6\n");
    printf("學\n");
    printf("生\n");
    printf("彭\n");
    printf("宏\n");
    printf("瑜\n");
    system("pause");
	system("CLS");

	int c ; /*宣告變數c*/
	printf("請輸入四位數的密碼") ;
	scanf("%d",&c); /*讓使用者輸入密碼*/

	if(c!=2024){
		printf("輸入錯誤") ;
		return 0;
	}  /*如果輸入的變數c不等於2024，則顯示輸入錯誤並結束運行*/
	else{
		printf("歡迎\n");
	}  /*若為2024,顯示歡迎*/
	system("CLS");
	printf("A... Z : Uppercase \n");
	printf("a... z: Lowercase \n");
	printf("0... 9 : Digit \n");
	printf("Otherwise : Your name \n");

	printf("\n 請輸入一個字元 \n");
	int b ;
	char a;  /*宣告變數b和字元a*/
	scanf(" %c",&a);
	b=a; /*使b為a的ascii code*/
	if(b>64&&b<91)
	printf("Uppercase");
	else if (b>96&&b<123){
	printf("Lowercase");}
	else if(b>'0'&&b<'10'){
	printf("Digit");}
	else{
	printf("E1B16彭宏瑜");}
 	/*根據ascii code碼來分類輸入的字元*/

	system("pause");
	return 0;
	/*這個程式用到了基本的輸入輸出程式，if-else和運算子的使用以及我第一次用到的消除螢幕程式system("CLS")，總之也算是再一次複習到實驗課以及上課的內容了*/
}
