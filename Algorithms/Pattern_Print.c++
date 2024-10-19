Question: 
  *
  * *
  * * *
  * * * *
i have to print this pattern through recursion

solution:

#include<bits/stdc++.h>
using namespaces std;
void nForest(int n) {
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout <<"* " ;
		}
		cout << endl;
	}
}

int main()
{
int n;
cin >> n;
nForest(5);
  return 0;
}
