#include <iostream>
#include "math.h"
#include "vector"
using namespace std;
double emoulusSq(int x, int y){
	return (x*x+y*y);
}
int main(int argc, char const *argv[])
{
	int numberOfProblems;
	cin >> numberOfProblems;
	for (int i = 0; i<numberOfProblems; ++i){
		int ecointypes, match;
		cin >> ecointypes>> match;
		int matchSq=match*match;
		std::vector<pair<int,int> > v;
		for (int j = 0 ; j<ecointypes; ++j){
			int convalue, infovalue;
			cin >> convalue >> infovalue;
			v.push_back(make_pair(convalue,infovalue));
		}


	}

	return 0;
}