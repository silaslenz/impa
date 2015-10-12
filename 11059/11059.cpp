#include <iostream>
#include <vector>
using namespace std;
long  int prodFromTo(int from, int to, std::vector<int> v){
	long  int prod=v[from];
	for (int l=from+1;l<to;++l){
		prod*=v[l];
	}
	return prod;
}
int main(int argc, char const *argv[])
{
	int casenum=1;
	while (true){
		int numOfNums;
		cin >> numOfNums;
		if (cin.eof())
			break;
		cout << "Case #"<< casenum << ": The maximum product is ";

		std::vector<int> v;
		for (int i = 0; i<numOfNums;++i ){
			int num;
			cin >> num;
			v.push_back(num);
		}
		long  int maxProd=0;
		for (int j = 0; j<numOfNums; ++j){
			for (int k = numOfNums; k>=j; --k){
				long  int prod = prodFromTo(j,k,v);
				if (prod>maxProd)
					maxProd=prod;

			}
		}
		cout  << maxProd<< "."<< endl << endl;
		casenum+=1;
	}
	return 0;
}