#include <iostream>

using namespace std;

int main(void){

    int n, maior = 0;

    while(1){

        cout<<"Digite um numero: ";
        cin >> n;

        if(n> maior){
            maior = n;
        }
        if(n == 0){
            break;
        }
    }

    cout<<"\nO maior valor inserido foi "<<maior<< endl;
    return 0;
}
