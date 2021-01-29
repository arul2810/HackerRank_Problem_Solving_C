//
// Created by Arul Prakash Samathuvamani on 14/11/20.
// Verified to work on HackerRank

#include "iostream"
#include "algorithm"
#include "string"
#include "vector"
using namespace std;

int main(){

    int cor_house_x, cor_house_y;
    int apple_cor, orange_cor;
    int no_apple, no_orange;

    cin >> cor_house_x >> cor_house_y;
    cin >> apple_cor >> orange_cor ;
    cin >> no_apple >> no_orange;

    int apple_count = 0;
    int orange_count = 0;


    for(int i = 0 ; i < no_apple ; i++){
        int temp;
        cin >> temp;

        if((temp+apple_cor) >= cor_house_x && (temp+apple_cor) <= cor_house_y){
            apple_count = apple_count +1;
        }
    }
    for(int i=0;i< no_orange ;i++){
        int temp;
        cin >> temp;

        if((temp+orange_cor) >= cor_house_x && (temp+orange_cor)<=cor_house_y){
            orange_count = orange_count +1;
        }
    }

    cout << apple_count << endl << orange_count;

}