#include <iostream>
#include <cstdlib>

using namespace std;

float Percentual(int total, int individual){
    float percentual;

    percentual = (individual * 100)/(float)total;

    return percentual;
}

int main(void){

    int jogador[24]={0}, n, votosValidos, maior=0, i;

    cout<<"Enquete: quem foi o melhor jogador?\n\n";

    while(1){
        cout<<"Numero do jogador (0=fim): ";
        cin>>n;

        if(n==0){
            break;
        }
        if(n<0 || n > 23){
            cout<<"Informe um valor entre 1 e 23 ou 0 para sair!\n";
            continue;
        }
        votosValidos++;
        jogador[n]++;
    }
    cout<<"\nResultado da Votacao:\n";
    cout<<"Foram Computados"<<votosValidos<<endl;
    cout<<"Jogador \tVotos \t\t%\n";

    for(i=1; i<24 ; i++){
        if(jogador[i] > 0){
            cout<<i<<" \t\t"<<jogador[i]<<"\t\t"<<Percentual(votosValidos, jogador[i])<<endl;

            if(jogador[i]>jogador[maior]){
                maior = i;
            }
        }
    }

    cout<<"\nO melhor jogador foi o numero "<<maior<<" com "<< jogador[maior] <<" votos, correspondendo a "<< Percentual(votosValidos, jogador[maior])<<"%\n";
    cout<<"do total de votos.\n";

    return  0;
}
