#include <iostream>
#include "math.h"
#include "vector"
#include <limits>

using namespace std;
int emoulusSq(int x, int y){
	return (x*x+y*y);
}
int findSmallestSq(vector<pair<int,int> > v){
	int smallest=numeric_limits<int>::max();
	for (pair<int,int> coin : v){
		if (emoulusSq(coin.first,coin.second)<smallest)
			smallest=emoulusSq(coin.first,coin.second);
	}
	return smallest;
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
		int smallest=findSmallestSq(v);
		vector<vector<int> > v;
		for (int k=0; k<100000;++k){
			vector<int> innerV;
			for (int l=0; l<ecointypes; ++l){
				innerV.push_back()
			}
		}

	}

	return 0;
}stdq