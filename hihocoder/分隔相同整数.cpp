// 描述
// 给定一个包含N个整数的数组A。你的任务是将A重新排列，使得任意两个相等的整数在数组中都不相邻。  

// 如果存在多个重排后的数组满足条件，输出字典序最小的数组。  

// 这里字典序最小指：首先尽量使第一个整数最小，其次使第二个整数最小，以此类推。

// 输入
// 第一行包含一个整数N，表示数组的长度。(1 <= N <= 100000)  

// 第二行包含N个整数，依次是 A1, A2, ... AN。(1 <= Ai <= 1000000000)

// 输出
// 输出字典序最小的重排数组。如果这样的数组不存在，输出-1。
#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <map>
#include <algorithm>
#include <queue>
#include <cstdlib>
#include <vector>
#include <set>
#include <assert.h>
#include <Bits.h>
using namespace std;

const int N = 1e5;
int n;
int a[N];
map<int, int> cnt;
set< pair<int, int> > S;
vector<int> vec;

int main()
{
	ifstream cin("route.txt");
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		cnt[a[i]]++;
	}

	for (map<int, int>::iterator iter = cnt.begin(); iter != cnt.end(); ++iter)
	{
		S.insert({iter->second, iter->first});
	}

	if ((--S.end())->first * 2 - 1 > n)
	{
		cout << -1 << endl;
		return 0;
	}

	
	int pre_x = -1;
	for (int i = 1; i <= n; ++i)
	{
		int x;
		if ((--S.end())->first * 2 - 1 == n - i + 1)
		{
			x = (--S.end())->second;
		}
		else
		{
			auto iter = cnt.begin();
			if (iter->first == pre_x)
			{
				++iter;
			}
			x = iter->first;
		}
		S.erase({ cnt[x], x });
		if (--cnt[x] > 0)
		{
			S.insert({cnt[x], x});
		}
		else
		{
			cnt.erase(x);
		}
		cout << x << " ";
		pre_x = x;
	}
	cout << endl;
	getchar();
}
