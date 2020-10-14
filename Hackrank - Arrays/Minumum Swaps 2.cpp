//
// HackerRank Minimum Swaps 2 Problem
// Created by hello@arulprakash.dev on 9/30/2020.
// Program not Verified to Work on HackerRank
// Program working for some test cases on HackerRank - Needs Optimisation

#include "iostream"
#include "vector"
using namespace std;

int main(){

    int size;
    cin >> size ;
    int *array = new int[size];

    // Getting Inputs

    for (int i = 0; i < size ; i++) {
        cin >> array[i];
    }

    int swaps = 0;
    int min;
    int min_index;
    for(int i=0; i < size; i++){

        min = array[i];
        min_index = i;

        for(int j = i+1 ; j < size ; j++){

            if(min > array[j]){
                min = array[j];
                min_index = j;

            }

        }
        if(min_index != i){

            int temp;
            temp = array[i];
            array[i] = array[min_index];
            array[min_index] = temp;
            swaps = swaps + 1;

        }
    }

    cout << swaps;

}
