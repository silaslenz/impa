#include <iostream>
#include <set>
#include <vector>
using namespace std;
void generatePrimesToN(unsigned int n, set<unsigned int>& primes){
    for (unsigned int i = 2; i<=n;++i){
        primes.insert(i);
    }
    unsigned int lowest=2;
    unsigned int removed=10;
    while (removed!=0){
        removed=0;
//        cout <<"lowest "<< lowest<< endl;
        for (unsigned int i = lowest+lowest; i<=n;i+=lowest){
            if (primes.count(i)){
                removed++;
            }
            primes.erase(i);
        }
        lowest=*primes.lower_bound(lowest+1);
    }
//    for (int i:primes){
//        cout<< i<< endl;
//    }
}

int main()
{
    set<unsigned int> primes;
    generatePrimesToN(16384*2,primes);
    vector<int> primesV;
    for (int i:primes){
        primesV.push_back(i);
    }
    unsigned int num;
    cin >> num;
    while (num!=0){
        unsigned int pairs=0;
        for (auto i = primesV.begin();i!=primesV.end();++i){
            for (auto j=i;j!=primesV.end();++j){
                if (*i+*j==num)
                    ++pairs;
            }
        }
        cout << pairs << endl;
        cin >> num;

    }
    return 0;
}

