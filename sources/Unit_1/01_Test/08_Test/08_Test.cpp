// 08_Test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

/*
* 练习1.11 编写程序，提示用户输入两个整数，打印出这两个整数所指定的范围内的所有整数。
*/
int main()
{
	std::cout << "请输入两个整数：" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	if (v1>v2)
	{
		// 从小到大打印
		while (v2<=v1)
		{
			std::cout << v2 << "  ";
			++v2;
		}
	}
	else
		// 从小到大打印
	{
		while (v1<=v2)
		{
			std::cout << v1 << "  ";
			++v1;
		}
	}
	std::cout << std::endl;
    return 0;
}
