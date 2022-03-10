// 05_Test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

// while 语句
// 求1到10的数之和
/*
* while(condition)
*		statement
* while语句的执行过程是交替地检测condition条件和执行关联的语句statement，直至condition为假时停止。
*/
int main()
{
	int sum = 0, val = 1;
	// 只要val的值小于等于10，while循环就会持续执行
	while (val<=10)
	{
		sum += val; // 将sum + val 赋值给 sum
		++val;		// 将val加1
	}
	std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
	return 0;
}
