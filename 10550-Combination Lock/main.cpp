#include <iostream>

using namespace std;
int clockDist(int start, int stop){
    if (start==stop)
        return 0;
    if (stop>start){
        return start+(40-stop);
    }
    else
        return start-stop;
}

int countDist(int start, int stop){

    if (start==stop)
        return 0;
    if (start>stop){
        return stop+(40-start);
    }
    else
        return stop-start;
}

int main()
{

    while (true){
        int start,num1,num2,num3;
        cin >> start;
        cin >> num1;
        cin >> num2;
        cin >> num3;
        if (start==0 && num1==0 && num2==0 && num3==0)
            break;
        int turn=720;
        turn+=((clockDist(start,num1))*9);
        turn+=360;
        turn+=((countDist(num1,num2))*9);
        turn+=((clockDist(num2,num3))*9);
        cout << turn << endl;
    }
    return 0;
}

