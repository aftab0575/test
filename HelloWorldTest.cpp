#include <iostream>
using namespace std;


int Ansa(string name){
    cout<<"Your name is: "<<name;
    return 0;
}

int main(){

    string nm;
    cout<<"Enter your name plz: "<<endl;
    cin>>nm;
    Ansa(nm);

    return 0;
}