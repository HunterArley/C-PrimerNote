// 12_Test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>


int main()
{
	// 实现对用户输入的一组数求和
	//int sum = 0, val = 0;
	//while (std::cin>>val)
	//{
	//	sum += val;
	//}
	//std::cout << "和为：" << sum << std::endl;

	/*
	* 练习1.16 编写程序，从cin读取一组数，输出其和
	*/
	int sum = 0, val = 0;
	std::cout << "请输入一些数，按Ctrl+Z表示结束" << std::endl;
	for ( ;  std::cin>>val; )
	{
		sum += val;
	}
	std::cout << "读入的数之和为" << sum << std::endl;
    return 0;
}