// Job Crew Cost Problem HackerRank
// Code by Arul Prakash Samathuvamani

#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

int main(){

    int job_length;
    int crew_length;

    cin >> crew_length;

    int *crew_array = new int [crew_length];

    for(int i = 0 ; i < crew_length ; i++){
        cin >> crew_array[i];
    }

    cin >> job_length;

    int *job_array = new int[job_length];

    for(int i = 0 ; i < job_length ; i++){
        cin >> job_array[i];
    }

    sort(job_array,job_array+job_length);
    sort(crew_array,crew_array+crew_length);

    long int min_id=0;

    for(int i = 0 ; i < job_length ; i++){
        if(crew_array[i] > job_array[i]){
            min_id = min_id + (crew_array[i] - job_array[i]);
        }else{
            min_id = min_id + (job_array[i] - crew_array[i]);
        }
    }

    cout << min_id;


}