#include<iostream>
#include<stdlib.h>
using namespace std;


template <class T>

  T Addition(T No1,T No2)
      {
        T Ans;
        Ans= No1+No2;
        return Ans;
      }

int main()
{
    cout<<Addition(11,21)<<"\n";
    cout<<Addition(11.2f,12.2f)<<"\n";
    cout<<Addition(11.21,12.21)<<"\n";

    return EXIT_SUCCESS;
}