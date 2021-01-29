// Climbing the LeaderBoard HackerRank Medium
// Code by Arul Prakash Samathuvamani

#include "iostream"
#include "vector"
#include "algorithm"
#include "string"
#include "cmath"
using namespace std;

int main(){


    // declaring variables

    long players;
    vector <long> scores;
    long games;
    vector<long> score;

    // getting values

    cin >> players;

    for(long i = 0 ;i < players ; i++){
        long temp;
        cin >> temp;
        scores.push_back(temp);
    }

    cin >> games;

    for(long i = 0 ; i < games ; i++){
        long temp;
        cin >> temp;
        score.push_back(temp);
    }

    vector<long> leaderboard;
    long boardscore = 1;
    long previous;

    for(long i =0 ; i < players ; i++){
        if(i == 0){
            previous = scores[i];
            leaderboard.push_back(boardscore);
        }else if(scores[i] < previous){
            boardscore = boardscore + 1;
            previous = scores[i];
            leaderboard.push_back(boardscore);
        }else if(scores[i] == previous){
            previous = scores[i];
            leaderboard.push_back(boardscore);
        }
    }
    long score_index = players-1;


    for(long i = 0 ; i < games ; i++){
        while (score[i] > scores[score_index] && score_index !=0){
            score_index = score_index - 1;
        }if(score[i] == scores[score_index]){
            cout << leaderboard[score_index]  << "\n";
        }else if(score_index == 0 && score[i] > scores[score_index]) {
            cout << "1"<<"\n";
        }else if(score_index == 0){
            cout << "2" << "\n";
        }else if(score_index == (players -1)){
            cout << leaderboard[score_index] + 1<<"\n";
        }
        else{

            cout << leaderboard[score_index] + 1 << "\n";
        }
    }
}






