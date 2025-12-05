// guess the numper game program
#include<iostream>
#include<cstdlib>//ذي مكتبه عشان تولد لنا ارقام عشوائيه

using namespace std;

int main(){
    

int num;
    int guess;
    bool isGessed = false;//متغير التحكم في التكرار

    srand (time(0));
    num = rand()%10;   //يولد رقم من 0-10

    while (!isGessed){
        cout<<"enter an integer: ";
        cin>>guess;

        if(guess==num){
            cout<<"correct number"<<endl;
            isGessed=true;//نوقف التكرار لو المستخدم خمن صح

        }
        else if (guess<num){
            cout<<"your gusess is lower than num try again!"<<endl;

        }else
        cout<<"your gusess is higer than num try again!";
        
    }
    
    return 0;
}