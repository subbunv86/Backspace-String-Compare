// Backspace String Compare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
	bool backspaceCompare(string S, string T) 
	{
		int nSlen = S.length();
		int nTlen = T.length();
		string sS = "", sT = "";
		int i, j;
		for (i = 0, j = 0; i < nSlen; i++)
		{
			if (S[i] != '#')
			{
				sS.push_back(S[i]);
			}
			else
			{
				if (!sS.empty())
					sS.pop_back();
			}
		}
		for (j = 0; j < nTlen;j++)
		{
			if (T[j] != '#')
			{
				sT.push_back(T[j]);
			}
			else
			{
				if (!sT.empty())
					sT.pop_back();
			}
		}
		return sS == sT;
	}
};

int main()
{
	Solution slnObj;
	
    std::cout << slnObj.backspaceCompare("xywrrmp","xywrrmu#p");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
