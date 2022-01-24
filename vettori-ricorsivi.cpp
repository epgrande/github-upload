#include<iostream>
#include<ctime>
using namespace std;

int funz(int array[], int sx, int dx){
    if(sx<=dx){          //control inserted to make the code work with even arrays 
                         //without it the counter sx increase over max and then decrease back in the array
        if(sx==dx) return array[sx];
    else return array[sx]+funz(array,sx+2,dx);
    }
    else return 0;
}

int main(){
    const int max=6;
    int i;
    int vettore[max];
    srand(time(NULL));
    for(i=0;i<max;i++)vettore[i]=(rand()%5)+1;
    for(i=0;i<max;i++)cout<<vettore[i]<<"\t";
    cout<<"-------------------------";
    int somma=funz(vettore, 0, max-1);
    cout<<somma;
    return 0;
}