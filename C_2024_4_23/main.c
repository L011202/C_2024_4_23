#define _CRT_SECURE_NO_DEPRECATE    
/*     �ж�100-200֮�������       ������*/
/*                                       */

#include <stdio.h>
#include <math.h>				//��ѧͷ�ļ�
int Num_Dis(int x) {			//�ж��Ƿ�Ϊ����
	int n = 0;					//��������
	for (n = 2; n <= sqrt(x); n++) {			//forѭ��,n�ķ�ΧΪx�Ŀ�ƽ��,n�Լ�1
		if (x % n == 0) {						//�����п��Ա��������򷵻�0,��������
			return 0;
		}
	}
	return 1;									//����û�б������ķ���1,������
}

int main() {
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++) {				//�ж����ķ�Χ
		if (Num_Dis(i)) {						//������������������
			printf("%d ", i);	
			count+=1;							//��������+1
		}
	}
	printf("\n�жϷ�Χ�����������Ϊ%d", count);		//�����������
	return 0;
}