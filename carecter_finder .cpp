#include <iostream>
#include <string>
using namespace std;
int main(){
    string name="Rafid";
    int map[4][4]={{0,0,0,0},
                   {0,0,0,0},
                   {0,1,0,0},
                   {0,0,0,0}};
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        if(map[i][j]==1){
            cout<<name<<" is currently standing on tile type ["<<i<<"]["<<j<<"]"<<endl;
        }
    }
}

    return 0;
}
