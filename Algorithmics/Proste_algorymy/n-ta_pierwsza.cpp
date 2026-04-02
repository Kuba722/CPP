// Zdefiniuj funkcję pierwsza(int n), której parametrem będzie liczba naturalna n, a wynikiem – n-ta liczba pierwsza

#include<iostream>

using namespace std;

int pierwsza(int n){
    
    if(n<2){
        return false;
    } 

    for(int i=2;i<n-1;i++){ // Czy tutaj nie powinno być do n???
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int ktora_pierwsza(int n){
    
    int ktora=0;
    int aktualna=2;

    while(true){
        if(pierwsza(aktualna)){
            ktora++;
            if(ktora==n){
                return aktualna;
            }
        }
        aktualna++;
    }
}

int main(){
    cout<<ktora_pierwsza(5)<<endl;
    cout<<ktora_pierwsza(2)<<endl;

}