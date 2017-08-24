#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void lancaDado(int n){

    int dado[6]={0}, i, face;

    for(i=0 ; i<n ; i++){
        srand(time(0));
        face= rand()%5;

        cout<<"Face "<<face+1<<endl;
        dado[face]++;

   }
   for(i=0 ; i<6;i++){
        if(dado[i]>0){
            cout<<"Face "<<i+1<<" apareceu "<<((dado[i]*100)/(float)n)<<"% das vezes\n";
        }
    }


}
int main(void){
    int n;

    cout<<"Quantas vezes você deseja lançar o dado?: ";
    cin>>n;

    if(n==0){
        return -1;
    }

   lancaDado(n);

    return 0;
}
