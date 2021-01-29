
//
// Created by Arul Prakash Samathuvamani on 14/11/20.
//

#include "iostream"
#include "algorithm"
using namespace std;

int main(){

    long int temp;
    long int length;
    long int max = 0;
    long int count = 0;
    cin >> length;

    for(long int i = 0 ; i < length ; i++){
        cin >> temp;
        if(temp == max){
            count = count +1;
        }else if(temp > max){
            max = temp;
            count = 0;
            count = count +1;
        }
    }

    cout << count;
}