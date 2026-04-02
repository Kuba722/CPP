#include<iostream>

using namespace std;

int suma_dzielnikow(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    return sum;
}

int suma_dzielnikow_v2(int n){ //algorytm zlicza odrazu dwa dzielniki np 16/2=8 więc zlicza 8+2
    
    int sum=0;

    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            sum+=i;
            if(i*i!=n){ //musi być warunek żeby nie zliczyć tego samego dzielnika np. 16/4=4
                sum=sum+(n/i);
            }
            
        }
    }
    return sum;
}

int main(){
    cout<<suma_dzielnikow(16)<<endl;
    cout<<suma_dzielnikow_v2(16)<<endl;
}