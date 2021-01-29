#include "iostream"
using namespace std;

int main()
{

    int x1,v1,x2,v2;
    cin >> x1 >> v1 >> x2 >> v2;

    if(x1>x2){
        if(v2 > v1){
            int flag = 0;
            while (flag == 0){
                x1 = x1 + v1;
                x2 = x2 + v2;
                if(x1 == x2){
                    cout << "YES";
                    flag = 1;
                }else if(x2 > x1){
                    cout << "NO";
                    flag = 1;
                }
            }
        }else{
            cout << "NO";
        }
    }else if(x2 > x1) {
        if (v1 > v2) {
            int flag = 0;
            while (flag == 0) {
                x1 = x1 + v1;
                x2 = x2 + v2;
                if (x1 == x2) {
                    cout << "YES";
                    flag = 1;
                } else if (x1 > x2) {
                    cout << "NO";
                    flag = 1;
                }
            }
        }else {
            cout << "NO";
        }
    }else if (x2==x1){
        if(v1 == v2 ){
            cout << "YES";
        }
    }



}