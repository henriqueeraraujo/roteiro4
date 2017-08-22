#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void Imprensadinho(void){

  int x, n;

    srand(time(0));
    x= rand()%100 + 1;

    cout<<"Advinhe um numero entre 1 e 100"<< endl;

    while(1){
        cout<<"Digite um numero: ";
        cin>>n;

        if(n==x){
            cout<<"Parabens. voce advinhou o numero"<< endl;
            break;
        }
        if(n<x){
            cout<<"Muito baixo. Tente novamente"<< endl;
            continue;
        }else{
            cout<<"Muito alto. Tente novamente"<< endl;
            continue;
        }
    }
}
int main(void){

  Imprensadinho();

    return 0;
}
