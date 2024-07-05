#include<bits/stdc++.h>
using namespace std;

void step(int source, int dest){
    cout << "source: " << source << " " << "destination: " << dest << endl;
    
    if(source == dest){
        cout << " panuch gaya " << endl;
        return;
    }
    return step(source+1, dest);
}

int main(void){
    int sourse = 1;
    int dest = 10;
    step(sourse, dest);
    return 0;
}