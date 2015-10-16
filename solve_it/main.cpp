#include <iostream>
#include <sstream>
#include <cmath>
#include <iomanip>
float e = 2.71828182845904523536;

using namespace std;
float calc(float p, float q, float r, float s, float t, float u, float x){
    return (p * pow(e, -x) + q * sin(x) + r * cos(x) + s * tan(x) + t * pow(x,2) +u);
}

int main()
{

    int p,q,r,s,t,u;
    cout << fixed;
    cout << setprecision(4);
    string str;
    while (getline(cin,str)){
        stringstream strs;
        strs << str;
        strs >> p >> q >> r >> s>> t >> u;

//        if (abs(calc(p,q,r,s,t,u,0.9073)) < abs(calc(p,q,r,s,t,u,0.9074)))
//            cout <<endl<< abs(calc(p,q,r,s,t,u,0.9073)) <<  " less than "<<abs(calc(p,q,r,s,t,u,0.9074))<< endl;
//        else
//            cout <<endl<< abs(calc(p,q,r,s,t,u,0.9073)) <<  " more than "<<abs(calc(p,q,r,s,t,u,0.9074))<< endl;
//        float solveX=-1;
//        float lastAns=1;
//        if (p==q&& q==r &&r==0&&0==s&&s==t&&t==u)
//            cout << 0.0000 << endl;
//        else{
//            for (float x=0;x<=1.0; x+=0.0001){
//                float ans = calc(p,q,r,s,t,u,(roundf(x * 10000) / 10000));
//    //            float ans = p * pow(e, −x ) + q ∗ sin(x) + r * cos(x) + s ∗ tan(x) + t ∗ pow(x,2) + u;
//                if (abs(ans)<0.1)
//                    if (abs(ans)<=lastAns){
//    //                    cout <<"x: " <<x << "ans: "<< abs(ans)<< endl;
//                        solveX=x;
//                        lastAns=abs(ans);
//                    }
//            }
//            if (solveX!=-1)
//                cout << solveX << endl;
//            else
//                cout << "No solution" << endl;
//        }
        if (calc(p,q,r,s,t,u,1.0)*calc(p,q,r,s,t,u,0.0)>0)
            cout << "No solution" << endl;
//        else if (calc(p,q,r,s,t,u,1.000000000)==0.0)
//            cout << 0.0000 << endl;
//        else if (calc(p,q,r,s,t,u,0.000000000000)==1.0)
//            cout << 1.0000 << endl;
//        else if (p==q&& q==r &&r==0&&0==s&&s==t&&t==u)
//            cout << 0.0000 << endl;
        else{
            float lower=0;
            float upper=1;
            float lastAns=-1;
            while (true){
//            for (int jk=0; jk<100;++jk){
                float center = (lower+upper)/2;
                float fofcenter =calc(p,q,r,s,t,u,center);
                if (calc(p,q,r,s,t,u,lower)*fofcenter>0)
                    lower=center;
                else
                    upper=center;
                if (abs(lastAns-center)<0.0000001)
                    break;
                lastAns=center;
            }
            cout << lastAns<< endl;



        }
    }

    return 0;
}

