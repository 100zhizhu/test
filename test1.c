#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//ת���ַ�
int main() {
	//%d - ��ӡ����
	//%C - ��ӡ�ַ�
	//%s - ��ӡ�ַ���
	//%f - ��ӡfloat���͵�����
	//%lf - ��ӡdouble���͵�����
	printf("%c", '\'');//  \'���Ǵ�ӡ��'
	printf("dadqw");//ֱ�Ӵ���ַ���
	printf("as\\0q");//��ӡ��as\0q
	printf("%c",'\103');//103�ǰ˽���Ȼ��ת����ʮ������ת����acll���ֵ ע��\��������û�����ֲ��ǰ˽��ƵĲ���
	printf("%c", '\x11');//x11��ʮ������ת����ʮ����Ȼ����ת����acll���ֵ

	return 0;
}
