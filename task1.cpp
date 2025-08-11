#include<bits/stdc++.h>
using namespace std;
int main(){
    srand(time(0));
    int guess;
    int unknown_number = rand()%100+1;

    cout<<"***** GUESS THE NUMBER *****"<<endl;
    cout<<endl;
    cout<<"try to guess the number from 1 to 100"<<endl; 

    do{
      cout<<"guess the number :"<<endl;
      cin>>guess;
      if(guess > unknown_number+5){
        cout<<"Too High !, try again"<<endl;
      }else if(guess > unknown_number && guess <= unknown_number +5){
        cout<<"High, try again"<<endl;
      }else if(guess < unknown_number-5){
        cout<<"Too Low ! ,try again"<<endl;
      }else if(guess < unknown_number && guess >= unknown_number -5){
        cout<<"Low  , try again"<<endl;
      }else if(guess == unknown_number){
        cout<<"******* CONGRATULATIONS !!********"<<endl;
      }else {
        cout<< "Invalid"<<endl;
      }
    }while(guess != unknown_number);

    return 0;
}