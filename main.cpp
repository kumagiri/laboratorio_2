#include <iostream>
#include <math.h>
#include <conio.h>
#include <cstdlib>
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
int reser1(int x){
    int valor=0;
    switch (x) {

    case 1:valor=0;break;
    case 2:valor=1;break;
    case 3:valor=2;break;
    case 4:valor=3;break;
    case 5:valor=4;break;
    case 6:valor=5;break;
    case 7:valor=6;break;
    case 8:valor=7;break;
    case 9:valor=8;break;
    case 10:valor=9;break;
    case 11:valor=10;break;
    case 12:valor=11;break;
    case 13:valor=12;break;
    case 14:valor=13;break;
    case 15:valor=14;break;
    case 16:valor=15;break;
    case 17:valor=16;break;
    case 18:valor=17;break;
    case 19:valor=18;break;
    case 20:valor=19;break;
    }
    return valor;
}

char reser2(char x){
    int valor=0;
    switch (x) {

    case 'A':valor=0;break;
    case 'a':valor=0;break;
    case 'B':valor=1;break;
    case 'b':valor=1;break;
    case 'C':valor=2;break;
    case 'c':valor=2;break;
    case 'D':valor=3;break;
    case 'd':valor=3;break;
    case 'E':valor=4;break;
    case 'e':valor=4;break;
    case 'F':valor=5;break;
    case 'f':valor=5;break;
    case 'G':valor=6;break;
    case 'g':valor=6;break;
    case 'H':valor=7;break;
    case 'h':valor=7;break;
    case 'I':valor=8;break;
    case 'i':valor=8;break;
    case 'J':valor=9;break;
    case 'j':valor=9;break;
    case 'K':valor=10;break;
    case 'k':valor=10;break;
    case 'L':valor=11;break;
    case 'l':valor=11;break;
    case 'M':valor=12;break;
    case 'm':valor=12;break;
    case 'N':valor=13;break;
    case 'n':valor=13;break;
    case 'O':valor=14;break;
    case 'o':valor=14;break;


    }
    return valor;
}

bool comparacednas(string cad1, string cad2){
    if(cad1==cad2){
        return true;
    }else{
        return false;
    }
}

unsigned int calcularlongitud (int numero){
    unsigned int numero_digitos = 0;

    do {
         ++numero_digitos;
         numero /= 10;
    } while (numero);
    return numero_digitos;
}

char* convertiracadena(int numero, unsigned int longitud){
    char cadenaresultante[longitud];
    char *ptr;
    ptr = &cadenaresultante[0];
    for (int i=0; i<longitud;i++){
        cadenaresultante[longitud-1-i] = (numero%10)+48;
        //cout<<cadenaresultante[longitud-i]<<endl;
        numero /= 10;
    }
    cout << "cadena : " << cadenaresultante << endl;
    //cout << &cadenaresultante << endl;
    //cout << ptr << endl;
    //cout << *ptr << endl;
    //cout << &ptr << endl;

    return ptr;
}

void eliminarrepetidos (unsigned int longitud, char *original, char *sinrepetidos){

    //cout << original << endl;
    bool yaexiste = false;
    unsigned int indice = 0;
    for(int i=0;i<longitud;i++){
        for(int j=0;j<longitud;j++){
            if(original[i]==sinrepetidos[j]){
                yaexiste = true;
            };
        };
        if(yaexiste==false){
            sinrepetidos[indice]=original[i];
            indice++;
        };
        yaexiste=false;
    };

    sinrepetidos[indice+1]={' '};

    cout << "la cadena original es: " << original << endl;
    cout << "La cadena sin caracteres repetidos es: " << sinrepetidos << endl;
}

int main()
{
    /*Problema 1 fraccionador de moneda
    int R=0,M=0;
    cout <<"Bienvenido por favor ingrese el valor a deducir su cantidad minima en billetes y monedas: ";cin >>R;

    M=floor(R/50000);                            //floor nos ayuda a devolver el entero mas cercano asi si el decimal //
    R-=M*50000;                                  //es menor a cero devolvera el cero y al recolectarlo en M podemos //
    cout<<"de 50.000 serian: "<<M<<endl;         //multiplicarlo por la moneda y restarselo a lo que resta en R//
    M=floor(R/20000);
    R-=M*20000;
    cout<<"de 20.000 serian: "<<M<<endl;
    M=floor(R/10000);
    R-=M*10000;
    cout<<"de 10.000 serian: "<<M<<endl;
    M=floor(R/5000);
    R-=M*5000;
    cout<<"de 5.000 serian: "<<M<<endl;
    M=floor(R/2000);
    R-=M*2000;
    cout<<"de 2.000 serian: "<<M<<endl;
    M=floor(R/1000);
    R-=M*1000;
    cout<<"de 1000 serian: "<<M<<endl;
    M=floor(R/500);
    R-=M*500;
    cout<<"de 500 serian: "<<M<<endl;
    M=floor(R/200);
    R-=M*200;
    cout<<"de 200 serian: "<<M<<endl;
    M=floor(R/100);
    R-=M*100;
    cout<<"de 100 serian: "<<M<<endl;
    M=floor(R/50);
    R-=M*50;
    cout<<"de 50 serian: "<<M<<endl;
    cout<<"faltante: "<<R<<endl;*/

    /*problema 3 comparacion de cadenas
    int longitudmaxima,A=0;
    cout << "porfavor ingrese un entero como longitud máxima de la cadena" << endl;    //le pedimos al usuario que nos ingrese una longitud maxima//
    cin >> longitudmaxima;                                                             //para las cadenas y se hace uso del recurso string para
    cout << "porfavor ingrese la primer cadena de caracteres." << endl;                //compararlas en una funcion bool//
    char cadena1[longitudmaxima], cadena2[longitudmaxima];
    cin >> cadena1;
    //cout << cadena1.length() << endl
    cout << "porfavor ingrese la segunda cadena de caracteres." << endl;
    cin >> cadena2;
    //cout << cadena2.length() << endl;
    A=comparacednas(cadena1, cadena2);
    if(A==1){
        cout<<"las cadenas son iguales"<<endl;
    }
    else{
        cout<<"Las cadenas son diferentes: "<<endl;
    }*/

    /*problema 5 cadena
    int numeroaconvertir;
    cout << "porfavor ingrese un entero para convertir a cadena de caracteres" << endl;     //se calcula longitud de cadena con calcularlongitud
    cin >> numeroaconvertir;                                                                //y se convierte a cadena con el apuntador y se usa
    int longitud_cadena = calcularlongitud(numeroaconvertir);                               // convertircadena y en la funcion se imprime la cadena
    //cout << longitud_cadena;
    char *apuntador;
    apuntador = convertiracadena(numeroaconvertir, longitud_cadena);
    cout << "valor retornado retornadopor referencia: " << apuntador << endl;*/
    /*problema 7 repetidos

    unsigned int longitudmaxima;
    cout << "porfavor ingrese un entero como longitud máxima de la cadena" << endl;
    cin >> longitudmaxima;                                                              //se le pide al usuario la longitud maxima de la cadena
    cout << "porfavor ingrese la cadena de caracteres." << endl;                        //esta ayudara a crear dos areglos original con la cadena
    char original[longitudmaxima], sinrepetidos[longitudmaxima];                        //ingresada y sinrepetidos inicializada con espacios en
    cin >> original;                                                                    //la linea 220 a 221 a estas se le asigna un puntero y
    for(int i=0;i<=longitudmaxima;i++){                                                 //se les manda a la funcion sin repetidos donde con dos
        sinrepetidos[i]=' ';                                                            // for se recorrera las cadenas al encontrar una repetida
    };                                                                                  //con la variable ya existe dara un valor true y no ejecutara
    char *poriginal, *psinrepetidos;                                                    //las linas 133 a 135 y seguira comparando y ya que indice no
    poriginal = &original[0];                                                           //sube seguira en la posicion antes de encontrar repeticion
    psinrepetidos = &sinrepetidos[0];
    eliminarrepetidos (longitudmaxima, poriginal, psinrepetidos);*/

    /*problema 9 separacion de cadena

    int numero=0,separador=0,valor=0,suma=0,modulo=0,A=0,B=0;
   cout<<"Hola por favor ingrese una cadena de numeros no mayor a 10 digito: "; cin>>numero;
   cout<<"digite el numero por el que desea fraccionarlo: ";cin>>separador;
   A=numero;
   B=pow(10,separador);                                      //primero se hace un conteo de los digitos que hay con un for luego se compara
   for (int i=0;A>0;i++){                                    //con el uso de un if sabiendo que si modulo/separador tiene reciduo no es posible
       modulo+=1;                                            //separarlo en el numero requerido y se le agregara un cero a este numero,si
       A=A/10;                                               //el este resulatado es diferente de cero se imprimira el nuevo numero si no segira
                                                             //con el numero propuesto y al elevar con un pow el numero 10 con el numero al que
    }                                                        //se lo separara asi en valor tendriamos el numero%B(10^separador) y guardariamos la
    if(modulo%separador!=0){                                 //la suma en suma luego dividimos el numero por B para quitar los numero ya realizados
        modulo+=1;
        int num[modulo];
        num[0]=0;
        valor=numero;
        A=numero;
        cout<<"el numero a sumar es: ";
        for(int i=modulo-1;i>0;i--){
            A=valor%10;
            num[i]=A;
            valor=valor/10;

        }
        for (int i=0;i<modulo;i++){
            cout<<num[i];
        }
     cout<<endl;
    }
    else{
        cout<<"El numero a sumar es: "<<numero<<endl;
    }
    while(numero>0){
        valor=numero%B;
        suma+=valor;
        numero/=B;

    }
    cout<<"la suma es: "<<suma<<endl;*/
    /*problema 11 cine
    int aplicacion=0,bandera=0;
    int reserva=0;
    int sala[15][20];
    char fila=0;
    int asiento=0;
    for(int i=0;i<15;i++){
        for(int j=0;j<20;j++){
            sala[i][j]=0;

        }
    }
    while (aplicacion==0){
        cout<<"Bienvenido a tu cine de confianza vas a hacer una reserva: "<<endl<<
              "1 para hacer reserva o quitarla: "<<endl<<"2.ver sala"<<endl<<"3.para salir";
        cin>>bandera;
        if(bandera==1){
            cout<<"que deseas: "<<endl<<
                  "1 hacer reserva"<<endl<<"2.Quitar reserva";
            cin>>reserva;

               cout<<" "<<"|1|2|3|4|5|6|7|8|9|10|11|12|13|14|15|16|17|18|19|20"<<endl;
                for (int i=0;i<15;i++){
                    switch (i) {
                    case 0:cout<<"A|";break;
                    case 1:cout<<"B|";break;
                    case 2:cout<<"C|";break;
                    case 3:cout<<"D|";break;
                    case 4:cout<<"E|";break;                        //se hace uso de un while para crear un bucle en el cual se guarden
                    case 5:cout<<"F|";break;                        //las acciones realizadas, se imprime una serie de numeros y un switch
                    case 6:cout<<"G|";break;                        //para las letras de filas y se crea acompañado de otro for una matriz de
                    case 7:cout<<"H|";break;                        //tamaño ixj o fijado como una matriz 15x20 y a estos espacios se le imprime
                    case 8:cout<<"I|";break;                        //un + para reserva y - para vacio y respectivamente en la matriz se guardan
                    case 9:cout<<"J|";break;                        //con 1 o 0 respectivamente
                    case 10:cout<<"K|";break;
                    case 11:cout<<"L|";break;
                    case 12:cout<<"M|";break;
                    case 13:cout<<"N|";break;
                    case 14:cout<<"O|";break;
                    }
                    for(int j=0;j<20;j++){
                        if(sala[i][j]==0){
                            if(j>=9){
                            cout<<" -|";
                            }
                            else if(j<9){
                                cout<<"-|";
                            }
                        }
                        else if(sala[i][j]==1){
                            if(j>=9){
                            cout<<" +|";
                            }
                            else if(j<9){
                                cout<<"+|";
                            }
                        }
                    }


                    cout<<endl;
                }
             if (reserva==1){
                cout<<"Que asiento desea reservar: "<<endl;
                cout<<"fila de la A a la O: "<<endl;cin>>fila;
                cout<<"Asiento de 1 a 20: "<<endl;cin>>asiento;
                asiento=reser1(asiento);
                fila=reser2(fila);
                sala[fila][asiento]=1;
            }
            else if (reserva==2){
                 cout<<"A que asiento desea quitar la reservar: "<<endl;
                 cout<<"fila de la A a la O: "<<endl;cin>>fila;
                 cout<<"Asiento de 1 a 20: "<<endl;cin>>asiento;
                 asiento=reser1(asiento);
                 fila=reser2(fila);
                 sala[fila][asiento]=0;

             }
             else{
                 cout<<"opcion incorrecta"<<endl;
             }
        }

        else if(bandera==2){
            cout<<" "<<"|1|2|3|4|5|6|7|8|9|10|11|12|13|14|15|16|17|18|19|20"<<endl;
             for (int i=0;i<15;i++){
                 switch (i) {
                 case 0:cout<<"A|";break;
                 case 1:cout<<"B|";break;
                 case 2:cout<<"C|";break;
                 case 3:cout<<"D|";break;
                 case 4:cout<<"E|";break;
                 case 5:cout<<"F|";break;
                 case 6:cout<<"G|";break;
                 case 7:cout<<"H|";break;
                 case 8:cout<<"I|";break;
                 case 9:cout<<"J|";break;
                 case 10:cout<<"K|";break;
                 case 11:cout<<"L|";break;
                 case 12:cout<<"M|";break;
                 case 13:cout<<"N|";break;
                 case 14:cout<<"O|";break;
                 }
                 for(int j=0;j<20;j++){
                     if(sala[i][j]==0){
                         if(j>=9){
                         cout<<" -|";
                         }
                         else if(j<9){
                             cout<<"-|";
                         }
                     }
                     else if(sala[i][j]==1){
                         if(j>=9){
                         cout<<" +|";
                         }
                         else if(j<9){
                             cout<<"+|";
                         }
                     }
                 }


                 cout<<endl;
             }

        }

        else if(bandera==3){
            cout<<"gracias vuelva pronto"<<endl;
            aplicacion=1;
        }

        else {
            cout<<"opcion invalida"<<endl;
        }

    }*/

    /*problema 13 estrellas

    int foto[6][8];
    int suma=0;

    cout<<"Bienvenido al buscador de estrella"<<endl;
    for (int i=0;i<6;i++){
        for(int j=0;j<8;j++){

            foto[i][j]=rand()%20;

                                                      //Se crea una matriz 6x8 y en esta se guardan valores aleatorios con la funcion rand
        }                                             //se imprime la matriz que tenemis y acto seguido se toma dos for para recorrer las filas
                                                      //y columnas como se nos dice que ignoremos el borde externo se inicializa en 1 ambos
    }                                                 //y con la formula dada decidimos si es una estrella o no es
    for (int i=0;i<6;i++){
        for(int j=0;j<8;j++){
        cout<<foto[i][j]<<",";
        }
    cout<<endl;

    }
    for(int i=1;i<7;i++){
        for(int j=1;j<6;j++){
            suma= (((foto[i][j])+(foto[i][j-1])+(foto[i][j+1])+(foto[i-1][j])+(foto[i+1][j]))/(5));
            cout<<suma<<endl;

            if(suma>6){
                cout<<"el punto en "<<i<<","<<j<<"es una estrella"<<endl;
            }
            else{
                cout<<"el punto en "<<i<<","<<j<<"vacio"<<endl;
            }
        }
    }

    /*Problema 15 rectangulos

    int x[4]={0,0,0,0};
    int y[4]={0,0,0,0};
    int z[4]={0,0,0,0};
    cout<<"bienvenido este programa encontrara un rectangulo mas apartir de dos que ingreses "<<
          "los parametros se ingresaran con las siguientes reglas"<<
          " los dos primeros punto de origen (x,y) y los ultimos dos ancho y y altura "<<endl;
    cout<<"Por favor ingrese los parametros del primer rectangulo "<<endl;
    cout<<"ingrese X: ";cin>>x[0];
    cout<<"ingrese y: ";cin>>x[1];
    cout<<"ingrese anchos: ";cin>>x[2];
    cout<<"ingrese altura: ";cin>>x[3];
    cout<<"Por favor ingrese los parametros del segundo rectangulo "<<endl;
    cout<<"ingrese X: ";cin>>y[0];
    cout<<"ingrese y: ";cin>>y[1];                           //inicializamos 3 vectoras y utilizando operaciones entre vectores para sumar dos
    cout<<"ingrese anchos: ";cin>>y[2];                      // para crear el tercero y segun el punto donde este las dos primeras entradas sera
    cout<<"ingrese altura: ";cin>>y[3];                      //igual a las dos primeras entradas del primer vector y las otras dos seran
    cout<<"Este es tu primer rectangulo: ";                  //X1-X2 y Y1-Y2
    for(int i=0;i<4;i++){
        cout<<x[i]<<",";
    }

    cout<<endl;
    cout<<"Este es tu segundo rectangulo: ";
    for(int i=0;i<4;i++){
        cout<<y[i]<<",";
    }

    for(int i=0;i<4;i++){
        if(i==0){
            z[0]=y[0];
        }
        else if(i==1){

             z[1]=y[1];
        }
        else if(i==3){
            z[2]=x[2]-y[0];
        }
        else{
            z[3]=x[3]-y[1];
        }
    }
    cout<<endl;
    cout<<"Este es tu nuevo rectangulo: ";
    for(int i=0;i<4;i++){
         cout<<z[i]<<",";
    }
    cout<<endl;*/
    /*problema 17 numeros amigos


    int vbl1,vbl2,numero=0,suma=0 ;
    cout<<"Bienvenido por favor digite un numero: ";
    cin>>numero;
    for (int i =2;i<numero;i++){                                        //se pide un numero que sera el rango de 1 al numero para buscar los numeros
        vbl1=divisor(i);                                                //amigos entre estos y para ello se utiliza dos for dentro de los cuales se
        for(int j=i;j<numero;j++){                                      // dara inicio a unas variables las cuales aran un ciclo comparando la suma
            vbl2=divisor(j);                                            // de sus divisores y al ser iguales seran amigos
            if (i!=j){
                if((vbl1==j)and(vbl2==i)){
                    cout<<i<<"  y  "<<j<<" son numeros amigos"<<endl;
                    suma+=vbl1+vbl2;
                }
            }
        }
    }
    cout<<"la suma es: "<<suma<<endl;*/
    }
