//Algorytm collatza

#include<iostream>


using namespace std;

int nieparzyste(int n){
    if(n%2==0){
        return false;
    }else{
        return true;
    }
}

void colatz(int x){
    int liczba=x;
    int krok=0;

    while(liczba>1){
        if(nieparzyste(liczba)){
            liczba=liczba*3+1;
        }else{
            liczba=liczba/2;
        }
        krok++;
    }
    cout<<krok<<endl;
}

int main(){
    colatz(15);
}