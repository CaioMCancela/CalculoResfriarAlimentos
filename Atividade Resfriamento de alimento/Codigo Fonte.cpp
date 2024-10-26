#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
    double TempInicial,DifTemp,TempAmbiente,ConstResfri,Tempo;

    cout << "APLICACAO PARA CALCULO DE RESFRIAMENTO" << endl << endl;
    cout << "Digite a variacao de temperatura(em celsius): ";
    cin >> DifTemp;
    cout << "Digite a Temperatura inicial do alimento(em celsius): ";
    cin >> TempInicial;
    cout << "Digite a Temperatura ambiente(em celsius): ";
    cin >> TempAmbiente;
    cout << "Digite o valor da constante K do alimento: ";
    cin >> ConstResfri;

    if(( ConstResfri ==0||TempInicial - DifTemp) == 0 || TempAmbiente ==0){
        cout << endl << "Erro valores invalidos para calculo" << endl << endl;
    }else{
        Tempo = (-1/ConstResfri) * log((TempInicial - DifTemp)/TempAmbiente);
        Tempo= abs(Tempo);
        cout << endl << "O tempo necessario para atingir a diferenca de temperatura desejada e aproximadamente: " << round(Tempo) << " minutos" << endl << endl;
    }
    system("pause");
    return 0;
}
