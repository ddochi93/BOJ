#include <iostream>
#include <deque>
#include <stdio.h>
using namespace std;

int main(void) 
{
    deque<int> d;
    int t;
    int num;
    string command;

    cin >> t;
    //cin.get();
    while(t--)
    {
        cin >> command;
        //cout << command;
        if(command == "front") 
        {   
            if(!d.empty())
            {
                cout << d.front() << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else if(command == "push_front")
        {
            cin >> num;
            d.push_front(num);
        }
        else if(command == "push_back")
        {
            cin >> num;
            d.push_back(num);
        }
        else if(command == "pop_front")
        {
            if(d.empty())
            {
                cout << -1 << endl;
            }
            else
            {
                cout << d.front() << endl;
                d.pop_front();
            }
            
        }
        else if(command == "pop_back")
        {
            if(d.empty())
            {
                cout << -1 << endl;
            }
            else
            {
                cout << d.back() << endl;
                d.pop_back();
            }
        }
        else if(command == "size")
        {
            cout << d.size() << endl;
        }
        else if(command =="empty") 
        {
            if(d.empty())
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }   
        }  
        else if(command == "back")
        {
            if(d.empty()) {
                cout << -1 <<endl;
            }
            else
            {
                cout << d.back() << endl;
            }
            
        }
    }

    return  0;
}