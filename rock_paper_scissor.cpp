#include<iostream>
#include<time.h>
#include<bits/stdc++.h>


using namespace std;

int RockPaperScissor(char userchoice , char computerchoice){
    if (computerchoice == userchoice)
    {
        return 0;
    }
    else if (userchoice == 'p' && computerchoice == 'r' || userchoice == 'r' && computerchoice =='s' || userchoice == 's' && computerchoice == 'p')
    {
       return 1;
    }
    else{
        return -1;
    }
    
}


int main()
{
    char userchoice , computerchoice;
    srand(time(0));
    int number = 0;
    number = rand() % 100 + 1;

    if (number < 33)
    {
       computerchoice = 's';
    }
    else if (number < 66)
    {
        computerchoice = 'p';
    }
    else{
        computerchoice = 'r';
    }
    
    cout<<"Enter 's' for scissor 'r' for rock 'p' for paper :"<<endl;
    cin>>userchoice;

    int result;
    result = RockPaperScissor(userchoice , computerchoice);
    
    if (result == 0)
    {
      cout<<"Match Drawn!! Try Again"<<endl;
    }
    else if (result == 1)
    {
      cout<<"Wow!! You have won the match"<<endl;
    }
    else{
        cout<<"Oops!! you have lost the match"<<endl;
    }

    cout<<"You chose "<<userchoice<< " and computer chose "<<computerchoice<<endl;

    return 0;

}