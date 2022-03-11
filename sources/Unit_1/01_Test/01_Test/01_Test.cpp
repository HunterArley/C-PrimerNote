// 01_Test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include <iostream>

/*
* 简单主函数：
* 读取两个数，求它们的和
*/
int main()
{
	// cin   标准输入
	// cout  标准输出
	// cerr  标准错误
	// clog  用来输出程序运行时的一般性信息
	// <<    输出运算符
	// ::    作用运算符
	// >>    输入运算符

	// 单行注释
	/*
	*  多行注释,注释界定符
	*/

	// 界定符对形式的注释是以/*开始，以*/结束的。一个界定符对注释不能嵌套在另一个界定符对注释之内。

	// 提示用户输入两个数
	std::cout << "Enter two numbers：" << std::endl;
	int v1 = 0, v2 = 0;   // 保存我们读入的输入数据的变量
	std::cin >> v1 >> v2; // 读取输入数据
	std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
	return 0;
}
