#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//转义字符
int main() {
	//%d - 打印整形
	//%C - 打印字符
	//%s - 打印字符串
	//%f - 打印float类型的数据
	//%lf - 打印double类型的数据
	printf("%c", '\'');//  \'就是打印出'
	printf("dadqw");//直接打出字符串
	printf("as\\0q");//打印出as\0q
	printf("%c",'\103');//103是八进制然后转换成十进制再转换成acll码的值 注意\后面三个没有数字不是八进制的不算
	printf("%c", '\x11');//x11是十六机制转换成十进制然后再转换成acll码的值

	return 0;
}
