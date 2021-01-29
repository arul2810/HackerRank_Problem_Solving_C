//
// Created by Arul Prakash Samathuvamani on 14/11/20.
//

#include "iostream"
#include "algorithm"
#include "string"
using namespace std;

int main(){

    string time;
    cin >> time;

    long int size;
    size = sizeof(time);

    if(time[8] == 'P'){
        int temp = stoi(time);
        temp = temp +12;
        if(temp == 24){
            temp = 12;
        }
        cout<<temp;
        for(int i = 2; i<8 ; i++){
            cout << time[i];
        }
    }else{
        int temp = stoi(time);

        if(temp == 12){
            temp = 0;
        }
        if(time[0] == '1' && time[1]=='2'){
            cout <<"0";
        }
        if(time[0] == '0'){
            cout<<"0";
        }
        cout << temp;
        for(int i = 2; i<8 ; i++){
            cout << time[i];
        }
    }


}