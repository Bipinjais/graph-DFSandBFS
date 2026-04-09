#include<iostream>
#include<vector>
using namespace std;

vector<int> graph[5];
bool visited[20];

void dfs(int node)
{
	visited[node]=true;
	cout<< node<<" ";
	
	for(int i=0;i<graph[node].size();i++)
	{
		int next=graph[node][i];
		if(!visited[next])
		{
			dfs(next);
		}
	}
}
int main()
{
	graph[1].push_back(2);
	graph[2].push_back(1);
	graph[1].push_back(3);
	graph[3].push_back(1);
	graph[3].push_back(4);
	graph[4].push_back(3);
	graph[2].push_back(4);
	graph[4].push_back(2);
    dfs(1);
   
}

