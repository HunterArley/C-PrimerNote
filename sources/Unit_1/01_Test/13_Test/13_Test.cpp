// 13_Test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

/*
* 统计在输入中每个值连续出现了多少次
*/
int main()
{
	// currVal是我们正在统计的数；我们将读入的新值存入val
	int currVal = 0, val = 0;
	// 读取第一个数，并确保确实有数据可以处理
	if (std::cin >> currVal)
	{
		int cnt = 1; //保存我们正在处理的当前值的个数
		while (std::cin >> val) // 读取剩余的数
		{
			if (val == currVal) // 如果值相等
			{
				++cnt; //将cnt加1
			}
			else // 否则，打印前一个数的个数
			{
				std::cout << currVal << "的个数为：" << cnt << std::endl;
				currVal = val; //记住新值
				cnt = 1; // 重置计数器
			}
		} //while循环在这里结束
		// 记住打印文件中最后一个值的个数
		std::cout << currVal << "的个数为：" << cnt << std::endl;
	} // 最外层的if语句在这里结束
    return 0;
}

/*
* 练习1.17 如果输入的所有值都是相等的，本节程序会输出什么？如果没有重复值，输出又会是怎样的？
*  如果输入的所有值都相等，则while循环中的else分支永远不会执行，直到输入结束，
*while循环退出，循环后的输出语句打印唯一的一个值和它出现的次数。
*	若没有重复值，则while循环中的if语句的真值分支永远不会执行，每读入一个值，都会进入else分支，
*打印它的值和出现次数1.输入结束后，while循环退出，循环后的输出语句打印最后一个值和出现次数1。
*/