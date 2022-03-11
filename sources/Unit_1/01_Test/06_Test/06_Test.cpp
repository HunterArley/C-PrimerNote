// 06_Test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

/*
* 练习1.9 编写程序，使用while循环将50到100的整数相加
*/
int main()
{
	int sum = 0, val = 50;
	while (val<=100)
	{
		sum += val;
		++val;
	}
	std::cout << "50到100的整数相加之和为" << sum << std::endl;
	return 0;
}
