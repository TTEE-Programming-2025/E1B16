#include<stdio.h>
#include<stdlib.h>
int main(void){
	printf("��\n");
    printf("�O\n");
    printf("�j\n");
    printf("�P\n");
    printf("�q\n");
    printf("��\n");
    printf("�u\n");
    printf("�{\n");
    printf("��\n");
    printf("�t\n");
    printf("E\n");
    printf("1\n");
    printf("B\n");
    printf("1\n");
    printf("6\n");
    printf("��\n");
    printf("��\n");
    printf("�^\n");
    printf("��\n");
    printf("��\n");
    system("pause");
	system("CLS");

	int c ; /*�ŧi�ܼ�c*/
	printf("�п�J�|��ƪ��K�X") ;
	scanf("%d",&c); /*���ϥΪ̿�J�K�X*/

	if(c!=2024){
		printf("��J���~") ;
		return 0;
	}  /*�p�G��J���ܼ�c������2024�A�h��ܿ�J���~�õ����B��*/
	else{
		printf("�w��\n");
	}  /*�Y��2024,����w��*/
	system("CLS");
	printf("A... Z : Uppercase \n");
	printf("a... z: Lowercase \n");
	printf("0... 9 : Digit \n");
	printf("Otherwise : Your name \n");

	printf("\n �п�J�@�Ӧr�� \n");
	int b ;
	char a;  /*�ŧi�ܼ�b�M�r��a*/
	scanf(" %c",&a);
	b=a; /*��b��a��ascii code*/
	if(b>64&&b<91)
	printf("Uppercase");
	else if (b>96&&b<123){
	printf("Lowercase");}
	else if(b>'0'&&b<'10'){
	printf("Digit");}
	else{
	printf("E1B16�^����");}
 	/*�ھ�ascii code�X�Ӥ�����J���r��*/

	system("pause");
	return 0;
	/*�o�ӵ{���Ψ�F�򥻪���J��X�{���Aif-else�M�B��l���ϥΥH�ΧڲĤ@���Ψ쪺�����ù��{��system("CLS")�A�`���]��O�A�@���Ʋߨ����ҥH�ΤW�Ҫ����e�F*/
}
