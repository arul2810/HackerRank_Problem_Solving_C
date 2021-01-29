//
// Created by Arul Prakash Samathuvamani on 22/12/20.
// Verified to Work on Hacker Rank


#include "iostream"
#include "algorithm"
#include "string"
using namespace std;

int main(){

    int diagonal_1 = 0;
    int diagonal_2 = 0;
    int size;
    cin >> size;
    int temp;
    int diag_1_init = 0;
    int diag_2_init = size-1;
    for(int i=0;i<size*size;i++){
        cin >> temp;

        if(diag_1_init == i){
            diagonal_1 = diagonal_1 + temp;
            diag_1_init = size + 1 + diag_1_init;
        }
        if(diag_2_init == i && diag_2_init != size*size-1){
            diagonal_2 = diagonal_2 + temp;
            diag_2_init = size - 1 + diag_2_init;
        }


    }

    if(diagonal_2 > diagonal_1){
        cout << (diagonal_2 - diagonal_1);
    }else{
        cout<<(diagonal_1-diagonal_2);
    }


}