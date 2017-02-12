    #include <iostream>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int casenum=0;
    while (str!="#"){
        casenum+=1;
        cout << "Case " << casenum << ": ";
        if (str=="HELLO")
            cout << "ENGLISH" << endl;
        else if (str=="HOLA")
            cout << "SPANISH" << endl;
        else if (str=="HALLO")
            cout << "GERMAN" << endl;
        else if (str=="BONJOUR")
            cout << "FRENCH" << endl;
        else if (str=="CIAO")
            cout << "ITALIAN" << endl;
        else if (str=="ZDRAVSTVUJTE")
            cout << "RUSSIAN" << endl;
        else
            cout << "UNKNOWN" <<endl;
        getline(cin,str);
    }
    return 0;
}

