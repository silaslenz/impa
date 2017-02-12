#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main()
{
    while (true){
        int tasks, orders;
        cin >> tasks >> orders;
        if (tasks==0 && orders==0)
            break;
        vector<int> order;
        unordered_set<int> added;
        for (int k=0;k<orders;++k){
            int i,j;
            cin >>i>>j;
            if (added.count(i)>0 && added.count(j)>0){
//                cout << "all in"<< endl;
                continue;
            }
            else if (added.count(i)>0){
//                cout << "adding "<< j<< " after " <<i<< endl;
                order.insert(find(order.begin(),order.end(),i)+=1,j);
            }
            else if (added.count(j)>0){
//                cout << "adding "<<i<< " before "<< j<< endl;
                order.insert(find(order.begin(),order.end(),j)-=1,i);
            }
            else{
//                cout << "adding both"<< endl;
                order.push_back(i);
                order.push_back(j);
            }
            added.insert(i);
            added.insert(j);
        }
        for (int n=1;n<=tasks;++n){
            if (added.count(n)==0)
                order.push_back(n);
        }
        for (int m:order){
            cout << m <<" ";
        }
        cout << endl;
    }
    return 0;
}

