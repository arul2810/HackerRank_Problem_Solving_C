//
// Created by Arul Prakash Samathuvamani on 14/11/20.
//

#include "iostream"
using namespace std;

int main(){

    long int length;

    cin>> length;

    for(long int j = length-1 ; j >=0 ; j--){
        for(long int i = 0 ; i < length ; i++){
            if(i < j){
                cout << " ";
            }else{
                cout << "#";
            }
        }
        cout <<endl;
    }

}