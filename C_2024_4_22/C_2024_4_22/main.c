#define _CRT_SECURE_NO_DEPRECATE    
/*	使用函数来判断一个数是否是素数	*/
/*		2024年4月22日 14点41分		*/
/*				liang				*/
/*									*/



/*             示例代码一为错误代码                */
/*
* 代码有问题,
#include <stdio.h>
void Dis(int x) {
	int a = 1;
	while( a< x) {
//		a++;
		if((x % a) == 0) {
			printf("%d不是素数\n", x);
			break;
		}
		else {
			printf("%d是素数\n", x);
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


/*            示例代码二     正确     */
/*	多理解这个代码的思维，方便代码的优化	*/
/*			2024年4月22日 22点36分			*/
/*                                          */
/*                                          */
/*                ^^^^^               ^^^^^^^          */
/*                          ~~~~~~                     */
/*                author:liang              */

#include <stdio.h>
int main() 
{
	int i = 0;
	int count = 0;							//个数统计变量
	for (i = 100; i <= 200; i++) {			//生成100-200及其之间的数字
		int j = 0;							
		int flag = 1;						//标志位，标志位为1是素数;反之不是
		for (j = 2; j <= i - 1; j++) {		//生成2- (i-1)之间的数字
			if (i % j == 0) {
				flag = 0;					//修改标志位
				break;						//判断为不是素数,跳出循环
			}
		}	
		if (flag == 1) {					//判断标志位
			count++;						//素数统计量+1
			printf("%d ", i);				
		}
	}
	return 0;
}