#include<bits/stdc++.h>
using namespace std;

int main(){
    double a,b;
    char operation;

    cout <<"  ****** SIMPLE CALCULATOR ******"<<endl;
    cout << endl;
    cout << " Enter first number : ";
    cin >> a;
    cout << " Enter second number :";
    cin >> b;
    cout << " Select an operation [+ , - , * , /]:";
    cin >> operation;

    switch(operation){
        case '+':cout << "Result of addition is :"<< a+b; break;
        case '-':cout << "Result of substraction is :"<< a-b; break;
        case '*':cout << "Result of multiplication is :"<< a*b; break;
        case '/':
                 if(b==0){
                    cout << " Error !"<<endl;
                 }else{
                    cout<< "Result of divison is :"<<a/b; break;
                 }
        default:cout<<"INVALID OPERATION !!"<<endl;
         }

    
 return 0;
}