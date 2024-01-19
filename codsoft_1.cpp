/*
Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number.
*/
#include<iostream>
#include<cstdlib>
using namespace std;

class guess{
    public:

    void game(int &rg, int &wg)
    {
    int gcount = 0;
    cout << "\n\nYou will get 5 chances to guess the number correctly, Good Luck!";
    int rnum = rand() % 6;
    cout << "\nThe number is in the range 0-5";
    for (int i = 0; i < 5; i++)
    {
        int n;
        cout << "\n\nEnter the number which you guessed: ";
        cin >> n;
        if (n == rnum)
        {
            cout << "\nYou guessed it right !";
            gcount = 1;
            break;
        }
        else
        {
            cout << "\nUh-Oh! That's not the correct number";
        }
    }

    if (gcount == 1)
        rg++;
    else
        wg++;
    }



    void feedback(int rg,int wg)
    {
        if(rg<1||wg<1)
            cout<<"Data not sufficient, play more and try again";
        else{
            float g_ratio=rg/wg;
            if(g_ratio>=0.32)
                cout<<"\nYou are guessing it with high success rate !!";
            else
                cout<<"\nYou are guessing it with quite low success rate :(";
        }
    }
};

//main program
int main()
{
    guess g1;
    int rg=0,wg=0;
    int ch;
    while(true){

        cout<<"\n\n\n************WELCOME************";
        cout<<"\n\nEnter your choice from the following choices ranging from 1-3";
        cout<<"\n1. Start playing number guessing game";
        cout<<"\n2. Get feedback on your playing skill";
        cout<<"\n3. Exit";
        cout<<"\n\nEnter your choice";
        cin>>ch;
        switch(ch)
        {
        case 1:
        g1.game(rg,wg);
        break;

        case 2:
        g1.feedback(rg,wg);
        break;

        case 3:
        cout<<"\n\nThanks for playing the game !";
        exit(0);

        default:
        cout<<"\nInvalid Input !";
    }
    }
}
