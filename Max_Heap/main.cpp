#include<iostream>
#include<stdlib.h>
#include "Max_Heap.cpp"
using namespace std;
int main(){
    int n;
    int vetor[100];
    cout<<"Digite o tamanho do vetor \n";
    cin>>n;
   
    srand(time(NULL));
    for(int i=1;i<=n;i++){
        vetor[i]=rand()%100;
    }
    cout<<endl;
    Max_Heap* heap=new Max_Heap();
    heap->print(vetor,n);
    heap->arranjar(vetor, n);
    heap->print(vetor,n);
    
}