#define _CRT_SECURE_NO_DEPRECATE    
/*	ʹ�ú������ж�һ�����Ƿ�������	*/
/*		2024��4��22�� 14��41��		*/
/*				liang				*/
/*									*/



/*             ʾ������һΪ�������                */
/*
* ����������,
#include <stdio.h>
void Dis(int x) {
	int a = 1;
	while( a< x) {
//		a++;
		if((x % a) == 0) {
			printf("%d��������\n", x);
			break;
		}
		else {
			printf("%d������\n", x);
			break;
		}
		a++;
	}
}
int main()
{
	int i = 100;
	scanf("%d", &i);
//	for (i = 100; i < 200; i++) {
		Dis(i);
//	}
	return 0;
}
*/


/*            ʾ�������     ��ȷ     */
/*	�������������˼ά�����������Ż�	*/
/*			2024��4��22�� 22��36��			*/
/*                                          */
/*                                          */
/*                ^^^^^               ^^^^^^^          */
/*                          ~~~~~~                     */
/*                author:liang              */

#include <stdio.h>
int main() 
{
	int i = 0;
	int count = 0;							//����ͳ�Ʊ���
	for (i = 100; i <= 200; i++) {			//����100-200����֮�������
		int j = 0;							
		int flag = 1;						//��־λ����־λΪ1������;��֮����
		for (j = 2; j <= i - 1; j++) {		//����2- (i-1)֮�������
			if (i % j == 0) {
				flag = 0;					//�޸ı�־λ
				break;						//�ж�Ϊ��������,����ѭ��
			}
		}	
		if (flag == 1) {					//�жϱ�־λ
			count++;						//����ͳ����+1
			printf("%d ", i);				
		}
	}
	return 0;
}