#include <iostream>

using namespace std;

int main()
{
    int brown[3], clear[3], green[3];

    while (true){
        cin >> brown[0] >> green[0] >> clear[0];//bin 1
        if (cin.eof())
            break;
        cin >> brown[1] >> green[1] >> clear[1]; //bin 2
        cin >> brown[2] >> green[2] >> clear[2]; //bin 3
        string lowestOrder = "BCG";
        int lowestmoves = clear[0] + green[0] + brown[1] + green[1] + brown[2] + clear[2];


        if ((clear[0] + green[0] + brown[1] + clear[1] + brown[2] + green[2])<lowestmoves){
            lowestmoves=clear[0] + green[0] + brown[1] + clear[1] + brown[2] + green[2];
            lowestOrder="BGC";
        }
        if ((brown[0] + green[0] + green[1] + clear[1] + brown[2] + clear[2])<lowestmoves){
            lowestOrder="CBG";
            lowestmoves=brown[0] + green[0] + green[1] + clear[1] + brown[2] + clear[2];
        }
        if ((brown[0] + green[0] + clear[1] + brown[1] + green[2] + clear[2])<lowestmoves){
            lowestOrder="CGB";
            lowestmoves=brown[0] + green[0] + clear[1] + brown[1] + green[2] + clear[2];
        }
        if ((brown[0] + clear[0] + green[1] + clear[1] + brown[2] + green[2])<lowestmoves){
            lowestOrder="GBC";
            lowestmoves=brown[0] + clear[0] + green[1] + clear[1] + brown[2] + green[2];
        }
        if ((brown[0] + clear[0] + green[1] + brown[1] + green[2] + clear[2])<lowestmoves){
            lowestOrder="GCB";
            lowestmoves=brown[0] + clear[0] + green[1] + brown[1] + green[2] + clear[2];
        }
        cout << lowestOrder<< " "<< lowestmoves<< endl;
    }
    return 0;
}

