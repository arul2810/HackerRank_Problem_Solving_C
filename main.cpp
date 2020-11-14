//
// Created by Arul Prakash Samathuvamani on 14/11/20.
//

#include "iostream"
#include "algorithm"
using namespace std;

int main(){

   long int array[5];
   for(int i = 0 ; i < 5 ; i++){
       cin >>array[i];
   }
   sort(array,array+5);
   long int minsum = 0;
   long int maxsum=0 ;
   for(int i = 4; i >=1 ; i--){
       maxsum = array[i]+maxsum;

   }
    for(int i=0;i<4;i++){
        minsum = array[i] + minsum;
    }
   cout << minsum << " ";

   cout << maxsum;

}