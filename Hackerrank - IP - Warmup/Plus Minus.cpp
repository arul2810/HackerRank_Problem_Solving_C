
//
// Created by Arul Prakash Samathuvamani on 14/11/20.
//

#include "iostream"
using namespace std;

int main(){

    long int length;
    float zero = 0;
    float plus = 0 ;
    float minus = 0 ;

    cin >> length;

    for(int i=0; i < length ; i++){

        int temp;
        cin >> temp;
        if(temp > 0){
            plus = plus + 1;
        }else if( temp < 0){
            minus = minus + 1;
        } else if( temp  == 0){
            zero = zero + 1;
        }

    }

    cout << plus/length << endl;
    cout << minus/length << endl;
    cout << zero/length << endl;




}