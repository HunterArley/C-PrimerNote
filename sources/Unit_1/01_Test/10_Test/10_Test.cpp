// 10_Test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

/*
* 练习1.12 下面的for循环完成了什么功能？sum的终值是多少？
* 
* 完成了计算从-100到100的整数相加的和，sum的终值是0。
*/
int main()
{
	int sum = 0;
	for (int i = -100; i <= 100; i++)
	{
		sum += i;
	}
	std::cout << "和为：" << sum << std::endl;
    return 0;
}
