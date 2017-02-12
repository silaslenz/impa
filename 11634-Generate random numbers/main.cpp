#include <iostream>
#include <set>

using namespace std;
int main() {
    while (true){
        set<int> myset;
        int a0;
        cin >> a0;
        if (a0==0)
            break;
        myset.insert(a0);
        for (int i = 0; i < 10000; ++i) {
            int a1 = (a0*a0)/100;
            a1 = a1 % 10000;
//            cout << a1 << endl;
            if (myset.find(a1)!=myset.end()){
//                cout << "end heri" << endl;
                break;
            }
            myset.insert(a1);
            a0 = a1;
        }
        cout << myset.size() << endl;

    }
    return 0;
}