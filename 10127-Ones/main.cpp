#include <iostream>
#include <math.h>
#include <stdint.h>

using namespace std;
intmax_t gimmeOnes(unsigned long n){
    intmax_t ones=1;
    for (unsigned long i = 1; i<n;++i){
        ones=(ones*10)+1;
//        cout <<ones << endl;

    }
    return ones;
}

int main()
{
    while (true){

        int integer;
        cin >> integer;
        if (cin.eof())
            break;
//        cout << gimmeOnes(5);
//        __uint128_t integer=integer2;
        int i=1;
        int moduloSum=1;
        while (true){

            ++i;
//            cout << gimmeOnes(6);
            moduloSum=(moduloSum*10+1)%integer;
            if (moduloSum==0){
                cout << i<< endl;
//                cout << gimmeOnes(i) << endl;
                break;
            }
        }
//        long long i=integer;
//        while (true){
//            i+=integer;
//            bool allones=true;
//            for (char c:to_string(i*integer)){
//                if (c!='1'){
//                    allones=false;
//                    break;
//                }
//            }
//            //            cout << i << endl;
//            if (allones){
//                cout << to_string(i*integer).size() << " "<< i << endl;
//                break;
//            }
//        }

    }
    return 0;
}

