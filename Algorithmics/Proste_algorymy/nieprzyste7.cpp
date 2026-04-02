// Zdefiniuj funkcję nieparzyste(int n), której wynikiem jest liczba liczb nieparzystych podzielnych przez 7 
// nie większych od parametru n. 

#include<iostream>

using namespace std;

int nieparzyste(int n){
    int licznik=0;
    for(int i=1;i<=n;i++){
        if((i%2!=0)&&(i%7==0)){
            licznik++;
        }
    }
    return licznik;
}

int main(){

    cout<<nieparzyste(100)<<endl;
}