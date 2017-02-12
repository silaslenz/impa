#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    for (int i = 0; i<cases;++i){
        int instructions;
        cin >> instructions;
        vector<int> instrList;
        for (int j=0;j<instructions;++j){
            string inp;
            cin >> inp;
            if (inp=="LEFT"){
                instrList.push_back(-1);
            }
            else if (inp=="RIGHT")
                instrList.push_back(1);
            else{
                cin >> inp;
                int sameAs;
                cin >> sameAs;
                instrList.push_back(instrList.at(sameAs-1));
            }
        }
        int  sum=0;
        for (int k:instrList){
            sum+=k;
        }
        cout << sum<< endl;
    }
    return 0;
}

