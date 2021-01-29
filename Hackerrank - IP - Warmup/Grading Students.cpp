//
// Created by Arul Prakash Samathuvamani on 14/11/20.
// Verified to work on HackerRank

#include "iostream"
#include "algorithm"
#include "string"
#include "vector"
using namespace std;

int main(){

    int input_size;
    cin >> input_size;
    for(int i =0 ; i < input_size ; i++){
        int temp;
        cin >> temp;

        if(temp >= 38){
            if(temp % 5 > 2){
                cout << ((temp/5)*5+5) << endl;
            }else{
                cout << temp<<endl;
            }
        }else{
            cout << temp << endl;
        }
    }

}