#include <stdio.h>
//defineԤ����ָ��
//define�������
#define MAX 1000
//��define �����(������û�в����� ���в���)
//define���Ǻ���� ��ǰ������ִ��� ��Ҫ�滻������
#define ADD(X,Y) (X+Y)

int main() {

	printf("%d\n", ADD(2, 3));//����5
	printf("%d\n", 4*ADD(2, 3));//����11 4*2+3
	return 0;
}