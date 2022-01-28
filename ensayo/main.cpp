#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int divisor(int x){
    int suma=0;
    for (int k=1;k<=(x/2);k++){
        if((x%k==0)){
             suma+=k;
        }
    }
    return suma;
}
int main()
{
    /*int vbl1,vbl2,numero=0,suma=0 ;
    cout<<"Bienvenido por favor digite un numero: ";
    cin>>numero;

    for (int i =2;i<numero;i++){

        vbl1=divisor(i);

        for(int j=i;j<numero;j++){

            vbl2=divisor(j);

            if (i!=j){

                if((vbl1==j)and(vbl2==i)){

                    cout<<i<<"  y  "<<j<<" son numeros amigos"<<endl;
                    suma+=vbl1+vbl2;


                }
            }
        }
    }
    cout<<"la suma es: "<<suma<<endl;*/
    int a[2][2];
    srand(time(NULL));
   for (int i=0;i<2;i++){
     for(int j=0;j<2;j++){
       a[i][j]=(rand()%15);

    }
   }

   for (int i=0;i<2;i++){
     for(int j=0;j<2;j++){
      cout<<"el numero es"<<a[i][j];
     }
     cout<<endl;
    }
    suma
}
