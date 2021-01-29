// Hash table - Ice Cream parlour HackerRank - Nuantix
// Code by Arul Prakash Samathuvamani

#include "iostream"
#include "vector"
using namespace std;

int main(){

    int testcases;
    cin >> testcases;

    int case_no = 0;
    while (case_no < testcases){

        int money;
        int ice_cream_quantity;
        vector<vector<int>> ice_cost_hash;
        vector<int> ice_cost;
        cin >> money >> ice_cream_quantity;
        ice_cost_hash.assign(ice_cream_quantity,0);
        for(int i = 0 ; i < ice_cream_quantity; i++){
            int temp;
            cin >> temp;
            ice_cost_hash[temp] = 1;
            ice_cost.push_back(temp);
        }

        for(int i = 0 ; i < ice_cream_quantity; i++){

            int temp;
            temp = money-ice_cost[i];
            if(ice_cost_hash[temp] == 1){
                cout << i+1 << " " <<
            }

        }



        case_no +=1;

    }



}