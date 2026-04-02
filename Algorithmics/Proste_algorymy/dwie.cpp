// Zdefiniuj funkcję dwie(int liczba), której wynikiem jest suma cyfr jedności i dziesiątek danej liczby powiększona o 1, 
// gdy suma okazała się liczbą nieparzystą, lub zmniejszona o 1, gdy suma okazała się liczbą parzystą. 
// Parametr liczba przyjmuje wartości z zakresu od 10 do 1 000 000. Sprawdź działanie funkcji dla podanych poniżej parametrów.
#include<iostream>


using namespace std;

int nieparzyste(int n){
    if(n%2==0){
        return false;
    }else{
        return true;
    }
}
int dwie(int liczba){
    int sum=0;
    sum=liczba%10;
    liczba=liczba/10;
    sum=sum+liczba%10;
    if(nieparzyste(sum)){
        sum++;
        return sum;
    }else{
        sum--;
        return sum;
    }
}

int main(){

    cout<<dwie(1284339)<<endl;

}