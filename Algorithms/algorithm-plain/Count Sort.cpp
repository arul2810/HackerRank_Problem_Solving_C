//
// Created by Arul Prakash Samathuvamani on 28/01/21.
//


#include "iostream"
#include "vector"
using namespace std;

int main(){

    vector<int> array;

    cout <<"Enter Array Size:";

    int size;
    cin >> size;
    int greater = 0;

    for(int i=0;i<size;i++){
        int temp;
        cin >> temp;
        array.push_back(temp);
        if(temp > greater){
            greater = temp;
        }
    }

    vector<int> sorting_temp[greater];
    sorting_temp->assign(greater+1,0);



    // Sorting Process
    for(int i = 0 ; i < array.size(); i++){

        int position = array.at(i);
        int temp = sorting_temp->at(position) + 1;
        sorting_temp->at(position)= temp;

    }

    int temp_var = 0;

    for(int i = 0 ; i < sorting_temp->size(); i++){

        temp_var = temp_var + sorting_temp->at(i);
        sorting_temp->at(i) = temp_var;

    }



    vector<int> sorted_array[size];
    sorted_array->assign(size,0);

    for(int i = 0 ; i < array.size(); i++){

        //cout << "I:"<<i<<"\n";
        int temp;
        int position;
        temp = array.at(i);
        //cout << temp << "\n";
        position = sorting_temp->at(temp);
        //cout << position << "\n";
        sorted_array->at(position-1) = temp;
        //cout << sorted_array->at(position);
        position = position -1;
        sorting_temp->at(temp) = position;


    }

    cout <<"Sorted Array : ";

    for(int i = 0 ; i < array.size() ; i++){

        cout << sorted_array->at(i);
    }

}