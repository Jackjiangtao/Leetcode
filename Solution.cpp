#include "Solution.h"
#include <algorithm>

#include <iostream>
#include <iterator>
#include <list>

std::vector<int> Solution::twoSum(vector<int>& nums, int target)
{
	std::vector<int> temp;
	for (auto it = nums.begin();it!=nums.end();++it)
	{
		auto another = target - *it;
		
		auto it2 =std::find(nums.begin(), nums.end(), another);
		if (it2!=nums.end()&&it!=it2)
		{
			if (temp.end() !=std::find(temp.begin(),temp.end(), distance(nums.begin(), it)))
			{
				continue;
			}
			temp.push_back(distance(nums.begin(),it ));
			temp.push_back(distance(nums.begin(),it2));
		}
	}
	return temp;
}
