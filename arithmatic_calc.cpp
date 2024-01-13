/*
Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.
*/
#include<iostream>
using namespace std;

class Calc
{
    public:

    float add(float a,float b)
    {
        return a+b;
    };
    float sub(float a,float b)
    {
        return a-b;
    };
    float mul(float a,float b)
    {
        return a*b;
    };
    float div(float a,float b)
    {
        return a/b;
    };

    void accept(float& a, float& b)
    {
        cout<<"\nEnter the first number to perform operations: ";
        cin>>a;

        cout<<"\nEnter the second number to perform operations: ";
        cin>>b;
        cout<<"\n\nNumbers accepted, they are as follows, a = "<<a<<" b = "<<b;
    };
    void display(float a, float b)
    {
        cout<<"The values of two numbers are as follows, a = "<<a<<" b = "<<b;
    };
};

//main program

int main()
{
    int ch;
    float a=0,b=0;
    Calc obj;
    cout<<"\n************Welcome to Arithmetic Calculator************";
    while(true)
    {
        cout<<"\n\nEnter your choice from the following choices ranging from 1-7";
        cout<<"\n1. Enter values for two numbers to perform operations";
        cout<<"\n2. Display value of two numbers";
        cout<<"\n3. Perform Addition";
        cout<<"\n4. Perform Subtraction";
        cout<<"\n5. Perform Multiplication";
        cout<<"\n6. Perform Division";
        cout<<"\n7. Exit Calculator";
        cout<<"\n\nEnter your choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
            obj.accept(a,b);
            break;

            case 2:
            obj.display(a,b);
            break;

            case 3:
            cout<<"\n\n"<<a<<" + "<<b<<" = "<<obj.add(a,b);
            break;

            case 4:
            cout<<"\n\n"<<a<<" - "<<b<<" = "<<obj.sub(a,b);
            break;

            case 5:
            cout<<"\n\n"<<a<<" x "<<b<<" = "<<obj.mul(a,b);
            break;

            case 6:
            cout<<"\n\n"<<a<<" / "<<b<<" = "<<obj.div(a,b);
            break;

            case 7:
            cout<<"\n\nThanks For using Arithmetic Calculator !";
            exit(0);

            default:
            cout<<"Invalid Input !"<<endl<<"Please choose from given options";
        }
    }
}