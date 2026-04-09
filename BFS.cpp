#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> graph[100];
bool visited[100];

void bfs(int start)
{
	queue<int> q;
	visited[start]=true;
	q.push(start);
	while(!q.empty())
	{
		int node=q.front();
		q.pop();
		cout<<node<<" ";
	for(int i=0;i<graph[node].size();i++)
	{
		int next=graph[node][i];
		if(!visited[next])
		{
			 visited[next] = true;
        q.push(next); 
		 }
	  }
   } 
}
int main()
{
	graph[1].push_back(2);
	graph[2].push_back(1);
	graph[1].push_back(3);
	graph[3].push_back(1);
	graph[2].push_back(4);
	graph[4].push_back(2);
	graph[3].push_back(4);
	graph[4].push_back(3);
	bfs(1);
   
}

