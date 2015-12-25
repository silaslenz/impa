
#include <iostream>

using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    for (int i = 0;i<testcases;++i){
        int l,w,h;
        cin >> l>>w>>h;
        cout << "Case "<< i+1<<": ";
        if (h<=20 && w<=20 && l<=20)
            cout<< "good"<< endl;
        else
            cout << "bad"<<endl;
    }
    return 0;
}

