#include<iostream>
#include<vector>



using namespace std;

vector <vector <int> > multTable; 


int main(){ 

multTable.resize(12);

for (int x = 1; x <= multTable.size(); x++){

    for(int y = 1; y <= multTable.size(); y++){

    multTable[x].resize(12);
    
    multTable[x][y] = x * y; 

    cout<<" "<<multTable[x][y]<<" |";


    };









cout<<endl;


};




return 0;




};
