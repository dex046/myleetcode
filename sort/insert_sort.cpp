#include <iostream>
#include <unistd.h>
#include <vector>
using namespace std;
void insert_sort(vector<int> &unsort)
{
	for(int i = 1; i < unsort.size(); ++i)
	{
		if(unsort[i] < unsort[i-1])
		{
			int temp = unsort[i];
			int j = i;
			while(j > 0 && unsort[j-1] > temp)
			{
				unsort[j] = unsort[j-1];
				j--;
			}
			unsort[j] = temp;
		}
	}
}
int main()
{
	vector<int> vec = {11, 2, 6, 7, 4, 3, 1, 9};
	insert_sort(vec);
	for(auto i : vec)
	{
		cout << i << " ";
	}
	cout << endl;
}