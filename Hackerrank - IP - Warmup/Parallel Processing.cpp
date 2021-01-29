// Hackerrank - Parallel Processing
// Code by Arul Prakash Samathuvamani

#include "iostream"
#include "algorithm"
#include "vector"
using namespace std;

int main(){

    long int number_of_files;
    vector<long> array;
    long int no_of_cores;
    long int no_of_files;

    cin >> number_of_files;
    for(long int i = 0 ; i < number_of_files ; i ++){
        long int temp;
        cin >> temp;
        array.push_back(temp);
    }

    cin >> no_of_cores;
    cin >> no_of_files;

    long int min_time=0;

    long int n;


    sort(array.begin(),array.end(),greater<long>());

    for(long int i = 0 ; i < number_of_files ; i++){

        if(array[i]%no_of_cores == 0 ){
            if(no_of_files != 0){
                min_time = min_time + (array[i]/no_of_cores);
                no_of_files = no_of_files - 1;
            }else{
                min_time = min_time + array[i];
            }
        }else{
            min_time = min_time + array[i];
        }

    }

    cout << min_time;

}