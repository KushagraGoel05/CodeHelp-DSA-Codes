//WAP where a for a given amount say 1330 we have to find the number of 100, 50, 20 and 1 ruppee notes required to make 1330.

#include<iostream>
using namespace std;

int main(){
    int amount;
    cout<<"Enter the amount: ";
    cin>>amount;
    int Rs100, Rs50, Rs20, Rs1;

    switch(1){
        case 1: Rs100=amount/100;
                amount=amount%100;
                cout<<"Number of Rs100 notes: "<<Rs100<<endl;

        case 2: Rs50=amount/50;
                amount=amount%50;
                cout<<"Number of Rs50 notes: "<<Rs50<<endl;

        case 3: Rs20=amount/20;
                amount=amount%20;
                cout<<"Number of Rs20 notes: "<<Rs20<<endl;

        case 4: Rs1=amount/1;
                amount=amount%1;
                cout<<"Number of Rs1 notes: "<<Rs1<<endl;
    }


}