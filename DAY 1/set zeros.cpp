#include <bits/stdc++.h> 
using namespace std;
void markrow(vector<vector<int>> &matrix,int i,int n)
{
	for(int k=0;k<n;k++)
	{
		if(matrix[i][k]!=0)
		{
			matrix[i][k]=-1;
		}
	}
}

void markcol(vector<vector<int>> &matrix,int j,int m)
{
	for(int l=0;l<m;l++)
	{
		if(matrix[l][j]!=0)
		{
			matrix[l][j]=-1;
		}
	}
}

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	// Write your code here.
	for(int i=0;i<n;i++)
	{
		for(int j =0;j<m;j++)
		{
			if(matrix[i][j]==0)
			{
				markcol(matrix,j,m);
				markrow( matrix,i, n);
			}

		}
	}

	for(int i=0;i<n;i++)
	{
		for(int j =0;j<m;j++)
		{
			if(matrix[i][j]==-1)
			{
				matrix[i][j]=0;
			}

		}
	}
	return matrix;
}

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> ans = zeroMatrix(matrix, n, m);

    cout << "The Final matrix is: \n";
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "\n";
    }
    return 0;
}

