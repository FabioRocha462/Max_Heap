#include<iostream>
using namespace std;
class Max_Heap{
    public: 
    void Max_Heapify(int *a, int n, int i){
      if(i<=n){
          if(i==1){
              down(a,n,i);
          }else{
              if(a[i]>a[i/2]){
                  up(a,i);
              }else{
                  down(a,n,i);
              }
          }
      }
    }
    void swap(int *x,int *y){
        int temp = *x;
        *x=*y;
        *y=temp;
    }
    void up(int* a, int i){
        int j=i/2;
        if( j >=1 ){
            if(a[i] > a[j]){
                int aux = a[i];
                a[i]=a[j];
                a[j]=aux;
                up(a,j);
            }
        }
    }

    void down(int* a, int n, int i){
        int j = 2*i;
        if( j <= n){
            if( j < n){
                if( a[j+1] > a[j]){
                    j=j+1;
                }
            }
            if(a[i] < a[j]){
                int aux = a[i];
                a[i]=a[j];
                a[j]=aux;
                down(a,n,j);
            }
        }
    }
    void push(int *a, int i,int n,int valor){
        if(i<n){
            a[i+1]=valor;
            i=i+1;
            up(a,i);
        }else{
            cout<<"overflow \n";
        }
    }
    int pop(int* a, int n){
        int aux;
        if(n !=0){
            aux=a[1];
            a[1]=a[n];
            n=n-1;
            down(a,n,1);
        }
        return aux;
    }
    void print(int* a, int m){
        for(int i=1;i<m;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

    void arranjar(int* a, int n){
        for (int i=1; i<=n/2;i++){
            Max_Heapify(a,n,i);
        }

    }
};