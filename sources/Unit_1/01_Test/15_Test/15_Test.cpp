﻿// 15_Test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	// 首先检查item1和item2是否表示相同的书
	if (item1.isbn() == item2.isbn()){
		std::cout << item1 + item2 << std::endl;
		return 0;
	}else{
		std::cerr << "Data must refer to same ISBN" << std::endl;
		return -1;
	}
	return 0;
}