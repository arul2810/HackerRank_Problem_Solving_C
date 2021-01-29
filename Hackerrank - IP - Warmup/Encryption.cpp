// Encryption HackerRank Medium
// Code by Arul Prakash Samathuvamani

#include "iostream"
#include "vector"
#include "algorithm"
#include "string"
#include "cmath"
using namespace std;

int main(){

    string input_text;
    cin >> input_text;

    int input_length = input_text.length();
    int row = sqrt(input_length);
    int col;
    if((row*row) == input_length){ col = row; }else{
        col = row + 1 ;
    }
    if((row*col < input_length)){
        row = row + 1;
    }
    int index;


    for(int i = 0; i < col ; i++){
        index = i ;
        for(int j = 0 ; j < row ; j++){
            if((input_text[index]) != NULL){
                cout << input_text[index];
                index = index + col;}
        }
        cout << " " ;
    }


}