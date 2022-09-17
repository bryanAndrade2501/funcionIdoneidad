#ifndef FUNCIONIDONEIDAD_H_INCLUDED
#define FUNCIONIDONEIDAD_H_INCLUDED
#include <cmath>
#include <cstdlib>
#include<time.h>
#include <iostream>
using namespace std;

class Estado{
public:
     int estado[8];
     int s[8];
     int r[8];
     int n=28;
     int num;


     void generar(){
       srand(time(NULL));
       num = 1+rand()%(9-1);
       for(int i =0;i<8;i++){
        estado[i]=1+rand()%(9-1);
       }
     }

     int funcionIdoneidad(){
       for(int i =0;i<8;i++){
        for(int j=i+1;j<8;j++){
          if(estado[i]==estado[j]){
            n=n-1;
          }
        }
       }
       s[0] = estado[0]+1;
       s[1] = estado[1]+2;
       s[2] = estado[2]+3;
       s[3] = estado[3]+4;
       s[4] = estado[4]+5;
       s[5] = estado[5]+6;
       s[6] = estado[6]+7;
       s[7] = estado[7]+8;
       for(int i =0;i<8;i++){
        for(int j=i+1;j<8;j++){
          if(s[i]==s[j]){
            n=n-1;
          }
        }
     }

     r[0]= abs(estado[0]-1);
     r[1]= abs(estado[1]-2);
     r[2]= abs(estado[2]-3);
     r[3]= abs(estado[3]-4);
     r[4]= abs(estado[4]-5);
     r[5]= abs(estado[5]-6);
     r[6]= abs(estado[6]-7);
     r[7]= abs(estado[7]-8);
     for(int i =0;i<8;i++){
        for(int j=i+1;j<8;j++){
          if(r[i]==r[j]){
            n=n-1;
          }
        }
     }
     return n;
  }


     void print() {
        for(int i = 0; i<8; i++) {
            cout << estado[i] <<"\t" ;
        }
        cout << endl;
    }

    void printn() {
            cout << "La funcion de idoneidad es ";
            cout<<n;
        cout << endl;
    }

};




#endif // FUNCIONIDONEIDAD_H_INCLUDED
