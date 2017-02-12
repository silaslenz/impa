#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{

    int testcases;
    cin >> testcases;
    for (int i = 0; i<testcases;++i){
        int days;
        cin >> days;
        int numParties;
        cin >> numParties;
        vector<int> partHartals;
        for (int j =0;j<numParties;++j){
            int hartal;
            cin >> hartal;
            partHartals.push_back(hartal);
        }
        int hartals=0;
        set<int> uselessDays;
        for (int z = 6; z<3651;z+=7)
            uselessDays.insert(z);
        for (int x = 7; x<3651;x+=7)
            uselessDays.insert(x);
        for (int k=1; k<=days;++k){
            if (uselessDays.find(k)==uselessDays.end()){
                for (int l : partHartals){
                    if (k%l==0){
                        hartals+=1;
                        break;
                    }
                }
            }
        }
        cout << hartals << endl;

    }
    return 0;
}

