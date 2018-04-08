#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void trouble_sort(vector<long>&v)
{
	bool swaped ; 
	do
	{
		swaped = false;
		for (int i = 0; i < v.size()-2;i++)
		{
			if (v[i] > v[i + 2]) {
				swap(v[i], v[i + 2]);
					swaped = true;
			}
		}
	}
	while (swaped);
}

int main()
{
	//vector<long> VD;
	vector<vector<long>> LV;
	long D;
	string P;
	int T;
	int N;
	cin >> T;
	for (int i = 0; i<T; i++)
	{
		cin >> N;
		int m;
		LV.push_back(*new vector<long>);
		for (int j = 0;j < N; j++)
		{
			cin >> m;
			LV[i].push_back(m);
		}		
	}

	for (int i = 0; i < T; i++)
	{
		bool flag = true;
		trouble_sort(LV[i]);
		for (int j = 0; j < LV[i].size()-1; j++)
		{
			if (LV[i][j] > LV[i][j + 1])
			{
				cout << "Case #" << i+1 << ": " << j << endl;
				flag = false;
				break; 
			}
		}
		if(flag) cout << "Case #" << i+1 << ": OK"<< endl;
	}



	system("pause");


}








