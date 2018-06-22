#include <iostream>
using namespace std;

/*
Para renumerar los estados, los etiquetamos con un par (current_height, number).
Cuando el algoritmo de clasificación necesita un número de estado, es decir, se realiza una división en un nli.
Se usa un nuevo nombre en el lugar de nli calculado de la siguiente manera.
Supongamos que estamos clasificando estados de nivel current_height, 
luego surgen dos casos cuando se necesita un número de estado en la clasificación de cubo: en el par (ch, num) en estado nli, 
el valor ch es diferente de la altura actual, entonces el par (ch , num) es un par viejo, 
debemos poner en su lugar el nuevo par (current-height, new_num). 
En el caso en que ch es igual a la altura actual, la parte num del par se usa directamente
*/
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
