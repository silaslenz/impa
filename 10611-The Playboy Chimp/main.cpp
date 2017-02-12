#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    unsigned int chimpansesNum;
    cin >> chimpansesNum;
    vector<unsigned int> chimps;
    for (int i = 0; i<chimpansesNum; ++i){
        unsigned int chimp;
        cin >> chimp;
        chimps.push_back(chimp);
    }
    unsigned int cases;
    cin >> cases;
    for (int i=0;i<cases;++i){
        unsigned int playboy;
        cin >> playboy;
        auto low=lower_bound(chimps.begin(),chimps.end(),playboy);
//        cout << endl << *low << endl;
        while (low!=chimps.begin() && *low>=playboy) low-=1;


        if (low==chimps.end())
            cout << (*(chimps.end()-=1))<< " ";
        else if (*low!=playboy)
            cout << *low<< " ";
        else
            cout << "X ";
        auto high=upper_bound(chimps.begin(),chimps.end(),playboy);
        if (high==chimps.end())
            cout << "X" << endl;
        else
            cout << *high << endl;
    }
}

