#include <iostream>
using namespace std;

int main(){
    int range;
    cin>>range;

    for (int row = 1; row <=range; row++)
    {
        for (int st = 1; st <= range-row+1; st++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    


    return 0;
}