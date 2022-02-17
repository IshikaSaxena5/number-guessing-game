#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int num, guess;
    bool correct = false;

    srand((int)time(0));

    //generating random number 1-100
    num = rand()%100+1;
    cout<<"Let's play a game! I'll think of a number and you can try to guess it."<<endl;
    cout<<"Let's begin! I'm thinking of a number 1-100. What's my number?"<<endl;
    char again='y';
while(again=='Y'||again=='y'){
    cin>>guess;
    while(correct==false)
    {

        if (guess<(num/2))
        {
            cout<<"Less than half of num";
              break;
        }
        if(guess<num)
        {
            cout<<"Less than num"<<endl;
            break;
        }

        if (guess>(num+num/2))
        {
            cout<<"More than half of num"<<endl;
              break;
        }
        if(guess>num)
        {
            cout<<"More than num"<<endl;
              break;
        }

        if(guess==num)
        {
          cout<<"########YOU WON!########"<<endl;
          correct=true;
        }
    }
    cout<<"Do you want to try again?????"<<endl;
    cin>>again;
}
}
