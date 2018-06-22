#include <iostream>
using namespace std;

int Renumerar(int s[], int h, int n)
{
    if(s[0]!=h)//s->ch!=h
    {
        s[0]=h; //s->sh=h
        s[1]=n; //s->num=n
        n=n+1;
    }
    return s[1];
}

int main()
{

    int Renum;
    int s[2]={2,4};
    int h=3;
    int n=8;
    Renum=Renumerar(s,h,n);
    cout<<Renum;
    return 0;
}
