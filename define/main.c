#include <stdio.h>
//define预处理指令
//define定义符号
#define MAX 1000
//用define 定义宏(符号是没有参数的 宏有参数)
//define就是后面的 用前面的名字代替 主要替换的作用
#define ADD(X,Y) (X+Y)

int main() {

	printf("%d\n", ADD(2, 3));//等于5
	printf("%d\n", 4*ADD(2, 3));//等于11 4*2+3
	return 0;
}