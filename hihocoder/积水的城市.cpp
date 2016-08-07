// 输入
// 第一行包含两个整数N和M。(1 <= N, M <= 500)  

// 第二行包含N-1个整数, B1, B2, B3, ... BN-1。(1 <= Bi <= 100)  

// 第三行包含M-1个整数, A1, A2, A3, ... AM-1。(1 <= Ai <= 100)  

// 第四行包含一个整数K，表示积水的交叉口的数目。 (0 <= K <= 30)  

// 以下K行每行包含2个整数，X和Y，表示第X条路和第Y条街的交叉口积水。(1 <= X <= N, 1 <= Y <= M)  

// 第K+5行包含一个整数Q，表示询问的数目。 (1 <= Q <= 10)  

// 以下Q行每行包含4个整数x, y, p, q，表示小Ho的起止点。起止点保证不在积水的交叉口处。  (1 <= x, p <= N, 1 <= y, q <= M)

// 输出
// 对于每组询问，输出最短路的长度。如果小Ho不能到达目的地，输出-1。


// 样例输入
// 4 5  
// 2 4 1  
// 3 3 3 2  
// 3  
// 1 3  
// 2 3  
// 3 2  
// 1  
// 1 2 2 4  
// 样例输出
// 24

#define min(a, b) a < b ? a : b
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
using namespace std;

int n, m, k, q;
int a[555], b[555];
int dis[555][555];
bool can[555][555];
bool vis[555][555];
int start_x, start_y, end_x, end_y;
const int inf = 0x3f3f3f3f;
int bfs()
{
	memset(dis, inf, sizeof(dis));
	memset(vis, 0, sizeof(vis));

	queue<pair<int, int>> que;
	que.push({start_x, start_y});
	dis[start_x][start_y] = 0;

	int x, y, xx, yy;
	pair<int, int> q;

	while (!que.empty())
	{
		q = que.front();
		que.pop();
		x = q.first;
		y = q.second;

		vis[x][y] = 0;/////vis=0表示现在这个节点不在queue中，=1代表在queue中

		if (y > 0)
		{
			xx = x;
			yy = y - 1;
			if (can[xx][yy] == 0 && dis[xx][yy] > dis[x][y] + a[yy])
			{
				dis[xx][yy] = dis[x][y] + a[yy];
				if (!vis[xx][yy])
				{
					vis[xx][yy] = 1;
					que.push({ xx, yy });
				}
			}
		}

		if (y < m - 1)
		{
			xx = x;
			yy = y + 1;
			if (can[xx][yy] == 0 && dis[xx][yy] > dis[x][y] + a[y])
			{
				dis[xx][yy] = dis[x][y] + a[y];
				if (!vis[xx][yy])
				{
					vis[xx][yy] = 1;
					que.push({ xx, yy });
				}
			}
		}


		if (x > 0)
		{
			xx = x - 1;
			yy = y;
			if (can[xx][yy] == 0 && dis[xx][yy] > dis[x][y] + b[xx])
			{
				dis[xx][yy] = dis[x][y] + b[xx];
				if (!vis[xx][yy])
				{
					vis[xx][yy] = 1;
					que.push({ xx, yy });
				}
			}
		}

		if (x < n - 1)
		{
			xx = x + 1;
			yy = y;
			if (can[xx][yy] == 0 && dis[xx][yy] > dis[x][y] + b[x])
			{
				dis[xx][yy] = dis[x][y] + b[x];
				if (!vis[xx][yy])
				{
					vis[xx][yy] = 1;
					que.push({ xx, yy });
				}
			}
		}

		
	}
	return dis[end_x][end_y] == inf ? - 1 : dis[end_x][end_y];
}
int main()
{
	ifstream cin("route.txt");
	while (cin >> n >> m)
	{
		memset(can, 0, sizeof(can));
		int temp;
		for (int i = 0; i < n - 1; ++i)
		{
			cin >> b[i];
		}

		for (int i = 0; i < m - 1; ++i)
		{
			cin >> a[i];
		}

		cin >> k;
		int x, y;
		for (int i = 0; i < k; ++i)
		{
			cin >> x >> y;
			can[x - 1][y - 1] = 1;
		}

		cin >> q;
		for (int i = 0; i < q; ++i)
		{
			cin >> start_x >> start_y >> end_x >> end_y;
			start_x--;
			start_y--;
			end_x--;
			end_y--;
			cout << bfs() << endl;
		}

	}
}
