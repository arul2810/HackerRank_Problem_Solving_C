// Bubble Sort - HackerRank Nuantix Practice problems
// Code by Arul Prakash Samathuvamani

#include "iostream"
#include "vector"
using namespace std;

int main(){

    int number_of_elements;
    cin >> number_of_elements;

    vector<int> array;
    for(int i = 0 ; i<number_of_elements ; i++){
        int temp;
        cin >> temp;
        array.push_back(temp);
    }

    // Bubble Sort

    int swaps= 0;

    for(int i = 0 ; i < number_of_elements-1 ; i++){
        for(int j=i+1; j < number_of_elements ; j++){
            if(array[j] < array[i]){
                swap(array[i],array[j]);
                swaps +=1;
            }
        }
    }

    cout << "Array is sorted in " <<swaps<<" swaps."<<"\n";
    cout << "First Element:" << array[0]<<"\n";
    cout << "Last Element:" << array[number_of_elements-1]<<"\n";





}