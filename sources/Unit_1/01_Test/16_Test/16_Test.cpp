// 16_Test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Sales_item.h"

/*
* 练习1.23
* 编写程序，读取多条销售记录，并统计每个ISBN（每本书）有几条销售记录。
*/
int main()
{
	Sales_item item1, item2;
	int num = 1;
	std::cout << "请输入若干销售记录：" << std::endl;
	if (std::cin >> item1) {
		while (std::cin >> item2) {
			if (compareIsbn(item1, item2)) {
				num++; // ISBN相同计数加1
			}
			else
			{
				std::cout << item1.isbn() << "共有" << num << "条销售记录" << std::endl;
				item1 = item2;
				num = 1;
			}
		}
		std::cout << item1.isbn() << "共有" << num << "条销售记录" << std::endl;
	}
	else
	{
		std::cout << "没有数据" << std::endl;
		return -1;
	}
	return 0;
}
