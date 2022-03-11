// 11_Test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

/*
* 练习1.13 使用for 循环重做1.4.1节中的所有练习。
*/
int main()
{
	// 1、用for循环将50到100的整数相加
	int sum = 0;
	for (int val = 50; val <= 100; val++)
	{
		sum += val;
	}
	std::cout << "50到100的整数相加之和为：" << sum << std::endl;

	// 2、用递减运算符在循环中按递减顺序打印出10到0之间的整数
	for (int i = 10; i >= 0; --i)
		std::cout << i << " ";
	std::cout << std::endl;

	// 3、提示用户输入两个整数，打印出这两个整数所指定的范围内的所有整数
	int val1 = 0, val2 = 0;
	std::cin >> val1 >> val2;
	if (val1>val2)
	{
		for (int i = val2; i <= val1; ++i)
			std::cout << i << "  ";
		std::cout << std::endl;
	}
	else
	{
		for (int j = val1; j <= val2; ++j)
			std::cout << j << "  ";
		std::cout << std::endl;
	}
    return 0;
}

/*
* 练习 1.14  对比for循环和while循环，两种形式的优缺点各是什么？
*		在循环次数已知的情况下，for循环的形式显然更为简洁。
*		而循环次数无法预知时，用while循环实现更合适。用特定条件控制循环是否执行，循环体中执行的语句可能导致循环判定条件发生变化。
*/

