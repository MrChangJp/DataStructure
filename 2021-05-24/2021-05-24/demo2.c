//#define _CRT_SECURE_NO_WARNINGS 10
//#include<stdio.h>
////����ֵΪ���ƺ�����1��λ�á�
//size_t deffBitIndex(int num){
//	int i = 1;
//	int index = 0;
//	for (; i <= 32; i++){
//		
//		if (num & 1){
//			return index;
//		}
//		index++;
//		num >>= 1;
//		
//	}
//	return index;
//}
//
//int FindIndex(int num,int time){
//	int bl = 0;
//	for (int i = 1; i <= time; i++){
//		num >>= 1;
//
//	}
//	return num & 1;
//}
//
////������ֻ�������εľ���������
////list: �������顣
////num : ���������ݵĸ�����
//void FindTwoNum(const int* list, int num, int* x, int* y){
//	//����Ԫ���������ó��Ľ�������Ϊ����ֻ����һ�ε������������
//	int xorResult = 0;
//	for (int i = 0; i < num; i++){
//		xorResult ^= list[i];
//	}
//	//�÷�����Ҫ�����Ǽ���xorResult�Ĳ���λ��
//	size_t defBitIndexNum = deffBitIndex(xorResult);
//
//	for (int j = 0; j < num; j++){
//		//���ݲ���λ�������е�Ԫ�ظ��ݲ���λ������Ԫ�ض����Ʊ�ʾ�¸�λ����λ�롱�Ľ���Ƿ�����з��飬
//		//��ֱ�Ӹ�����������
//		if (FindIndex(list[j], defBitIndexNum)){
//			*x ^= list[j];
//			
//		}
//		else{
//			*y ^= list[j];
//		}
//	}
//}
//
////��Ŀ���ҳ�������ֻ�������ε���
//int main(){
//	//ֻ����һ�ε���Ϊ��3��9
//	int arr[] = { 9, 4, 2, 4, 8, 7, 2, 8, 7, 3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int x = 0, y = 0;
//	//��ΪC�����޷�������������������ֱ�Ӵ�ַ��ȥ��
//	FindTwoNum(arr, sz, &x, &y);
//	printf("����һ��%d\n���ֶ���%d\n",x,y);
//	return 0;
//}