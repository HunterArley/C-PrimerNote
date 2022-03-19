// 17_Test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item total;// 保存下一条交易记录的变量.
	// 读入第一条交易记录，并确保有数据可以处理
	if (std::cin >> total)
	{
		Sales_item item; // 保存和的变量
		// 读入并处理剩余交易记录
		while (std::cin>>item) {
			// 如果仍在处理相同的书
			if (total.isbn() == item.isbn())
			{
				total += item;//更新总销售额
			}
			else
			{
				// 打印前一本书的结果
				std::cout << total << std::endl;
				total = item; // total表示下一本书的销售额
			}
		}
		std::cout << total << std::endl; // 打印最后一本书的结果
	}
	else
	{
		// 没有输入，警告读者
		std::cerr << "No data!" << std::endl;
		return -1; // 表示失败
	}
	return 0;
}
