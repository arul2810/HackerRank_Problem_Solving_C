//
// Created by Arul Prakash Samathuvamani on 13/11/20.
//


#include "iostream"
#include "string"
using namespace std;

int main(){

    int testcases;
    cin >> testcases;

    for(int test=0 ; test <testcases ; test++){

        int curly = 0; //Curly Bracket
        int square = 0; // Square Bracket
        int normal = 0; // Normal Bracket "("

        string input;

        cin >> input;

        char previous;

        int length = input.length();

        for(int i = 0 ; i < length ; i++){

            if(input[i] == '{'){
                curly = curly + 1;
            }else if (input[i] == '}' && previous != '(' && previous !='[' ){
                curly = curly - 1;
            }else if(input[i] == '('){
                normal = normal +1;
            } else if(input[i] == ')' && previous !='[' && previous != '{'){
                normal = normal - 1;
            }else if(input[i] == '['){
                square = square + 1;
            } else if (input[i] == ']'&& previous != '('  && previous != '{'){
                square = square - 1;
            }
            previous = input[i];
        }

        if(curly == 0 && square == 0 && normal == 0){
            cout << "YES"<<endl;
        }else{
            cout << "NO"<<endl;
        }


    }
}
