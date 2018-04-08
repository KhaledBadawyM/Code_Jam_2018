#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	vector<long> VD;
	vector<string> VP;
	long D;
	string P;
	int T;
	cin >> T;
	for (int i = 0; i<T; i++)
	{
		cin >> D >> P;
		VD.push_back(D);
		VP.push_back(P);
	}

	long shouts = 0;
	long wight = 1;
	
	for (int i = 0;i<T;i++)
	{
		D = VD[i];
		P = VP[i];
		int swaped = 0;
		bool DFlag = false;
		int countFlag=0;
		wight = 1; 
		shouts = 0; 
		for (int j = 0; j<P.size() ; j++)
		{
			if (P[j] == 'C')
				wight *= 2;
			else
				shouts += wight;
		}

		if (shouts <= D)
			cout << "Case #" << i + 1 << ": 0" << endl;
		else
		{
			while (countFlag <= P.size())
			{
				shouts = 0; wight = 1; countFlag++;
				for (int j = P.size() - 1;j>0;j--)
				{
					if (P[j] == 'S'&&P[j - 1] == 'C')
					{
						swap(P[j], P[j - 1]);
						swaped++;
						break;
					}
				}

				//if (swaped == 0) {
				//	//ImFlag = false;
				//	break; 
				//}
				
				for (int j = 0; j<P.size() ; j++)
				{
					if (P[j] == 'C')
						wight *= 2;
					else
						shouts += wight;
				}
				if (shouts <= D)
				{
					DFlag = true;break;
				}

			}
			
			if(DFlag)
				cout << "Case #" << i + 1 << ": " << swaped << endl;
			else cout << "Case #" << i + 1 << ": IMPOSSIBLE" << endl;
		}
		
	}






	system("pause");


	
}








