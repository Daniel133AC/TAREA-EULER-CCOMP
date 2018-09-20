#include <iostream>

using namespace std;

int main(){

    cout<<"Problema 1"<<endl;
    int limit=1000;
    int i=0;
    int suma=0;
    while (i<limit){
        if(i%3==0||i%5==0){
            suma=suma+i;
        }
        i++;
    }
    cout<<"La suma de los multiplos de 3 o 5 debajo de 1000 es: "<<suma<<endl<<endl;

    cout<<"Problema 2"<<endl;
    long long f0=1;
    long long f1=2;
    long long fr;
    long long sumpar=0;
    while(f1<=4000000){
        if(f1%2==0){
            sumpar=sumpar+f1;
        }
        fr=f1;
        f1=f1+f0;
        f0=fr;
    }
    cout<<"La suma de pares en Fibonacci que no exceden los cuatro millones es: "<<sumpar<<endl<<endl;

    cout<<"Problema 3"<<endl;
    long long num=600851475143;
    long long div=2;
    long long divmax=0;
    long long pal2=2;
    long long cont4=0;

    while(div*div<num){
        if(num%div==0){
            while(pal2*pal2<div){
                if(div%pal2==0){
                    cont4++;}
                pal2++;}
            if(cont4==0){
                divmax=div;}
            cont4=0;}
        div++;
        pal2=2;}
    cout<<"El mayor divisor primo de 600851475143 es: "<<divmax<<endl<<endl;

    cout<<"Problema 4"<<endl;
    long long a2=999;
    long long b2=999;
    long long ac=400;
    long long bc=400;
    long long res;
    long long pri;
    long long seg;
    long long tri;
    long long cua;
    long long cinc;
    long long sei;
    long long numayor=0;
    while(a2>ac){
        while(b2>bc){
            res=a2*b2;
            pri=res/100000;
            seg=(res%100000)/10000;
            tri=(res%10000)/1000;
            cua=(res%1000)/100;
            cinc=(res%100)/10;
            sei=res%10;
            if(pri==sei&&seg==cinc&&tri==cua){
                if(res>numayor){
                    numayor=res;
                }
            }
            b2--;
        }
        b2=999;
        a2--;
    }
    cout<<"El palindromo mas grande es: "<< numayor<<"."<<" Y esta formado por: "<<a2<<","<<b2<<endl<<endl;

    cout<<"Problema 5"<<endl;
    int sip=false;
    int cont5=0;
    int i2=20;
    int num3;
    int i3=1;
    while(sip==false){
        for(;i3<=20;i3++){
            if(i2%i3==0){
                cont5++;}}
        if(cont5==20){
            sip=true;
            i2--;
        }
        cont5=0;
        i2++;
        i3=1;
    }
    cout<<"El menor numero que es divisible por los numeros del 1 al 20 es: "<<i2<<endl<<endl;

    cout<<"Problema 6"<<endl;
    int limit2=100;
    long long sumpro=0;
    long long prosum=0;
    long long cont=1;

    while(cont<=limit2){
        sumpro=sumpro+(cont*cont);
        prosum=prosum+cont;
        cont++;
    }
    prosum=prosum*prosum;
    cout<<"La diferencia entre la suma de los cuadrados de los primeros 100 numeros y el cuadrado de su suma es: "<<prosum-sumpro<<endl<<endl;


    cout<<"Problema 7"<<endl;
    int limit3=10001;
    int i4=2;
    int cont2=1;
    int div2=2;
    int pal=0;
    while(cont2<=limit3){
        while(div2<=i4/2){
            if(i4%div2==0){
                pal++;
            }
            div2++;
        }
        if(pal==0){
            cont2++;
            }
        i4++;
        div2=2;
        pal=0;
    }
    cout<<"El 10 001 numero primo es: "<<i4-1<<endl<<endl;

    cout<<"Problema 8"<<endl;
    int arr[]={7,3,1,6,7,1,7,6,5,3,1,3,3,0,6,2,4,9,1,9,2,2,5,1,1,9,6,7,4,4,2,6,5,7,4,7,4,2,3,5,5,3,4,9,1,9,4,9,3,4,9,6,9,8,3,5,2,0,3,1,2,7,7,4,5,0,6,3,2,6,2,3,9,5,7,8,3,1,8,0,1,6,9,8,4,8,0,1,8,6,9,4,7,8,8,5,1,8,4,3,8,5,8,6,1,5,6,0,7,8,9,1,1,2,9,4,9,4,9,5,4,5,9,5,0,1,7,3,7,9,5,8,3,3,1,9,5,2,8,5,3,2,0,8,8,0,5,5,1,1,1,2,5,4,0,6,9,8,7,4,7,1,5,8,5,2,3,8,6,3,0,5,0,7,1,5,6,9,3,2,9,0,9,6,3,2,9,5,2,2,7,4,4,3,0,4,3,5,5,7,6,6,8,9,6,6,4,8,9,5,0,4,4,5,2,4,4,5,2,3,1,6,1,7,3,1,8,5,6,4,0,3,0,9,8,7,1,1,1,2,1,7,2,2,3,8,3,1,1,3,6,2,2,2,9,8,9,3,4,2,3,3,8,0,3,0,8,1,3,5,3,3,6,2,7,6,6,1,4,2,8,2,8,0,6,4,4,4,4,8,6,6,4,5,2,3,8,7,4,9,3,0,3,5,8,9,0,7,2,9,6,2,9,0,4,9,1,5,6,0,4,4,0,7,7,2,3,9,0,7,1,3,8,1,0,5,1,5,8,5,9,3,0,7,9,6,0,8,6,6,7,0,1,7,2,4,2,7,1,2,1,8,8,3,9,9,8,7,9,7,9,0,8,7,9,2,2,7,4,9,2,1,9,0,1,6,9,9,7,2,0,8,8,8,0,9,3,7,7,6,6,5,7,2,7,3,3,3,0,0,1,0,5,3,3,6,7,8,8,1,2,2,0,2,3,5,4,2,1,8,0,9,7,5,1,2,5,4,5,4,0,5,9,4,7,5,2,2,4,3,5,2,5,8,4,9,0,7,7,1,1,6,7,0,5,5,6,0,1,3,6,0,4,8,3,9,5,8,6,4,4,6,7,0,6,3,2,4,4,1,5,7,2,2,1,5,5,3,9,7,5,3,6,9,7,8,1,7,9,7,7,8,4,6,1,7,4,0,6,4,9,5,5,1,4,9,2,9,0,8,6,2,5,6,9,3,2,1,9,7,8,4,6,8,6,2,2,4,8,2,8,3,9,7,2,2,4,1,3,7,5,6,5,7,0,5,6,0,5,7,4,9,0,2,6,1,4,0,7,9,7,2,9,6,8,6,5,2,4,1,4,5,3,5,1,0,0,4,7,4,8,2,1,6,6,3,7,0,4,8,4,4,0,3,1,9,9,8,9,0,0,0,8,8,9,5,2,4,3,4,5,0,6,5,8,5,4,1,2,2,7,5,8,8,6,6,6,8,8,1,1,6,4,2,7,1,7,1,4,7,9,9,2,4,4,4,2,9,2,8,2,3,0,8,6,3,4,6,5,6,7,4,8,1,3,9,1,9,1,2,3,1,6,2,8,2,4,5,8,6,1,7,8,6,6,4,5,8,3,5,9,1,2,4,5,6,6,5,2,9,4,7,6,5,4,5,6,8,2,8,4,8,9,1,2,8,8,3,1,4,2,6,0,7,6,9,0,0,4,2,2,4,2,1,9,0,2,2,6,7,1,0,5,5,6,2,6,3,2,1,1,1,1,1,0,9,3,7,0,5,4,4,2,1,7,5,0,6,9,4,1,6,5,8,9,6,0,4,0,8,0,7,1,9,8,4,0,3,8,5,0,9,6,2,4,5,5,4,4,4,3,6,2,9,8,1,2,3,0,9,8,7,8,7,9,9,2,7,2,4,4,2,8,4,9,0,9,1,8,8,8,4,5,8,0,1,5,6,1,6,6,0,9,7,9,1,9,1,3,3,8,7,5,4,9,9,2,0,0,5,2,4,0,6,3,6,8,9,9,1,2,5,6,0,7,1,7,6,0,6,0,5,8,8,6,1,1,6,4,6,7,1,0,9,4,0,5,0,7,7,5,4,1,0,0,2,2,5,6,9,8,3,1,5,5,2,0,0,0,5,5,9,3,5,7,2,9,7,2,5,7,1,6,3,6,2,6,9,5,6,1,8,8,2,6,7,0,4,2,8,2,5,2,4,8,3,6,0,0,8,2,3,2,5,7,5,3,0,4,2,0,7,5,2,9,6,3,4,5,0};
    long long pro=1;
    long long maxi=0;
    for(int i=0;i<=999;i++){
        for(int j=0;j<=12;j++){
            pro=pro*arr[i+j];
        }
        if(pro>maxi){
            maxi=pro;
        }
        pro=1;
    }
    cout<<maxi<<endl<<endl;

    cout<<"Problema 9"<<endl;
    for(int a=1;a<=1000;a++){
        for(int b=1;b<=1000;b++){
            for(long c=1;c<=1000;c++){
                if((a+b+c==1000)&&(a*a+b*b==c*c)){

                    cout<<a<<", "<<b<<" y "<<c<<" cumplen las condiciones y su producto es: "<<a*b*c<<endl;}}}}
    cout<<endl;

    cout<<"Problema 10"<<endl;
    long long limit4=2000000;
    long long cont3=2;
    long long i5=2;
    long long idiv=2;
    long long sumt=0;
    long long prim=0;
    while(cont3<=limit4){
        while(idiv*idiv<=i5){
            if(i5%idiv==0){
                prim++;
            }
            idiv++;
        }
        if(prim==0){
            sumt=sumt+i5;
        }
        idiv=2;
        cont3++;
        i5++;
        prim=0;
    }
    cout<<"La suma de todos los primos por debajo de dos millones es: "<<sumt<<endl;

    return 0;
    }
