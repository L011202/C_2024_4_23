#define _CRT_SECURE_NO_DEPRECATE    
/*     判断100-200之间的素数       函数版*/
/*                                       */

#include <stdio.h>
#include <math.h>				//数学头文件
int Num_Dis(int x) {			//判断是否为素数
	int n = 0;					//被除变量
	for (n = 2; n <= sqrt(x); n++) {			//for循环,n的范围为x的开平方,n自加1
		if (x % n == 0) {						//若是有可以被整除的则返回0,不是素数
			return 0;
		}
	}
	return 1;									//若是没有被整除的返回1,是素数
}

int main() {
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++) {				//判断数的范围
		if (Num_Dis(i)) {						//若是素数，则进行输出
			printf("%d ", i);	
			count+=1;							//素数个数+1
		}
	}
	printf("\n判断范围里的素数个数为%d", count);		//输出素数个数
	return 0;
}