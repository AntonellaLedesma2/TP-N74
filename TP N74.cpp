#include <bits/stdc++.h>
using namespace std;

vector<int> BuscarPrimos(int n);
void MostrarVector(const vector<int>& A);
bool NumeroPrimos(int N);

int main()
{
    int n;
    cout << "Ingrese un numero entero: ";
    cin >> n;

    vector<int> primos = BuscarPrimos(n);
    MostrarVector(primos);

    return 0;
}

bool NumeroPrimos(int N){
    bool flag = true;
    if (N < 2 || (!(N & 1) && N != 2))
        flag = false;
    for (int i = 3; i * i <= N; i += 2){
        if (!(N % i)){
            flag = false;
            break;
        }
    }
    return flag;
}

vector<int> BuscarPrimos(int n){
    vector<int> primos;
    for (int i = 2; i <= n; i++){
        if (NumeroPrimos(i)){
            primos.push_back(i);
        }
    }
    return primos;
}

void MostrarVector(const vector<int>& A){
    for (size_t i = 0; i < A.size(); i++){
        cout << A[i] << " ";
    }
    cout << endl;
}