// 09_Test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

// for语句 写从1加到10的程序
int main()
{
    int sum = 0;
	for (int val = 1; val <= 10; ++val)
	{
		sum += val;
	}
	std::cout << "1到10的和为：" << sum << std::endl;
	return 0;
}

