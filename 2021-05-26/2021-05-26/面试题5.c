#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>


//���üӼ��˳����ӷ�
int add(int a, int b){
	int ab = 0;

	while (b){
		//��һ������ĺ��壺�������֮�ͣ��޽�����ͣ�
		//�ڶ����Լ��ڶ����Ժ�����ĺ��壺��ԭ�����λ����ӣ��޽�λ��ӣ���
		ab = (a^b);
		//�������λ��λ�ã�Ȼ��������1λ����ʾ��ǰ��һ��
		b = (unsigned int)(a&b) << 1;
		//���޽���λ���浽a�У��Ա����´ε������㡣
		a = ab;
		
 	}
	return a;
}



//���üӼ��˳����ӷ�
int main(){

	add(1,2);

	return 0;
}