// Leetcode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。
//
//你可以假设每种输入只会对应一个答案。但是，你不能重复利用这个数组中同样的元素。
//
//示例 :
//
//给定 nums = [2, 7, 11, 15], target = 9
//
//因为 nums[0] + nums[1] = 2 + 7 = 9
//所以返回[0, 1]



#include <iostream>
#include"Solution.h"
#include <vector>

int main()
{
	Solution temp;

	std::vector<int> s = { 2,7,11,15};
	auto result =temp.twoSum(s,9);
	
    std::cout << "Hello World!\n";
}


