#include <iostream>
using namespace std;
int findRouteLength(bool grid[][10] , int length=0){
    if
}

int main()
{
    int r,c;
    cin >> r >> c;
    while (r!=0 && c!=0){
        bool grid[r][c];
        for (int i=0;i<r;++i){
            for (int j=0;j<c;++j){
                grid[i][j]=true;
            }
        }

        int bombrows;
        cin >> bombrows;
        for (int i=0;i<bombrows;++i){
            int rownum, bomsInRow;
            cin >> rownum>>bomsInRow;
            for (int j=0;j<bomsInRow;++j){
                int col;
                cin >> col;
                grid[rownum][col]=false;
            }
        }
        int howFarFromS[r][c];

        for (int i=0;i<r;++i){
            for (int j=0;j<c;++j){
                cout<< grid[i][j];
            }
            cout << endl;
        }
        cin>>r>>c;
    }
    return 0;
}

