// 14_Test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Sales_item.h"

int main()
{
	/*Page18的代码
	Sales_item book;
	// 读入ISBN号、售出的册数以及销售价格
	std::cin >> book;
	// 写入ISBN、售出的册数、总销售额和平均价格
	std::cout << book << std::endl;
	*/

	/*Page19的代码
	Sales_item item1, item2;
	std::cin >> item1 >> item2; // 读取一对交易记录
	std::cout << item1 + item2 << std::endl; //打印它们的和
	*/

	/*
	* 练习1.21
	* 编写程序，读取两个ISBN相同的Sales_item对象，输出它们的和。
	*/
	/*Sales_item item1, item2;
	std::cout << "请输入两条ISBN相同的销售记录：" << std::endl;
	std::cin >> item1 >> item2;
	if (compareIsbn(item1, item2))
	{
		std::cout << "汇总信息：ISBN、售出本数、销售额和平均售价为" << item1 + item2 << std::endl;
	}
	else
	{
		std::cout << "输入的两条ISBN不相同" << std::endl;
	}*/

	/*
	* 练习 1.22 
	* 编写程序，读取多个具有相同ISBN的销售记录，输出所有记录的和。
	*/
	Sales_item total, item;
	std::cout << "请输入几条ISBN相同的销售记录：" << std::endl;
	if (std::cin >> total)
	{
		while (std::cin >> item)
		{
			if (compareIsbn(total, item))
			{
				total = total + item;
			}
			else
			{
				std::cout << "ISBN不同" << std::endl;
				return -1;
			}
		}
		std::cout << "汇总信息：ISBN、售出本数、销售额和平均售价为：" << total << std::endl;
	}
	else
	{
		std::cout << "没有数据" << std::endl;
		return -1;
	}
    return 0;
}

