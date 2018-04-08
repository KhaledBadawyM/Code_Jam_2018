#include<iostream>
#include<vector>
using namespace std;


int main()
{
	int T;
	int A;
	int subAreaComplet;
	static int area[1000][1000] = { 0 };
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		static int area[1000][1000] = { 0 };
		cin >> A;
		int r = 3, c = 3;
		int p = r*c;
		while (p < A)
		{
			c++;
			p = r*c;
		}
		//r += 4; c += 4;
		int n = 0;
		//int ri=3 , ci = 3;
		int rr, cr;
		subAreaComplet = 0;
		int addArea = 0;
		bool CorrectFlag = false, flag = false;
		//while (n < 1000) {}
		for (int j = 3; j < 1000; j++)
		{
			while (1) {
				cout << 3 << " " << j << endl;
				cin >> rr >> cr;
				if (rr == -1 && cr == -1)
				{
					flag = true;break;
				}
				else if (rr == 0 && cr == 0)
				{
					CorrectFlag = true;
					break;
				}
				else if (area[rr][cr] == 0)
				{
					subAreaComplet += 1;
					area[rr][cr] = 1;
				}
				if (subAreaComplet == (3 * j))
					break;

			}


			if (flag == true || CorrectFlag == true)break;
		}

		if (flag == true)break;

	}

	//cout<<"______________"<<subAreaComplet<<endl;
	///system("pause");

}

