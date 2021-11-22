//Modelo de Ising en dos dimensiones con Metroplis"
#include <iostream>
#include <cmath>
#include "Random.h"
using namespace std;

const int L=8; //tamaño arreglo
const int L2=L*L; // cuadrado
//------------------------------------------------- 
class SpinSystem{
private:
  int s[L][L]; //red de espines 
  int E, M; // Energía y magnetizacion
public:
  void Inicie(void);
  void Metropolis(double T, Crandom & ran2); 
  double GetE(void){return E;};
  double GetM(void){return fabs(M);};
};
 
//------------------------------------------------
void SpinSystem::Inicie(void){
  for(int i=0;i<L;i++) //llena la matriz
    for(int j=0;j<L;j++)
      s[i][j]=-1;
  E=-2*L2; //
  M=-L2;
}

//----------------------------------------------
void SpinSystem:: Metropolis(double T, Crandom & ran2){
  int n,i,j;
  int  dE;
  //escoja un espin al azar
  n=(int)(L2*ran2.r()); i=n/L; j=n%L;
  /*Paso metropolis
    1) escoger un espin al azar
    2)Calcular el DeltaE que obtendría si lo volteo
    3) Si (DE<=0) lo volteo
    else if(ran2,r()<exp(-DeltaE/KbT) lo volteo;
  */
  //calcule DR que obtendría si voltea ese spin
  dE=2*s[i][j]*(s[(i-1+L)%L][j]+s[(i+1)%L][j]+s[i][(j-1+L)%L]+s[i][(j+1)%L]);
  //aplico la rata de aceptación de metropolis 
  if(dE<=0)
    { s[i][j]*=-1;
      E+=dE;
      M+=2*s[i][j];
    }
  else if(ran2.r()<exp(-dE/T))
    {
      s[i][j]*=-1;
      E+=dE;
      M+=2*s[i][j];
    }
  

}

const int Nruns=100;
const int Nsteps=1000;
//---------------------------------------------
int main(void){
  int i;
  SpinSystem Ising;
  Crandom ran2(0); //generador aleatorio
  int t, mcs;  
  double T;
  int Mprom[Nsteps];
  
  T=2.2;
  //iniciar el arreglo en cero
  for(t=0;t<Nsteps;t++)
    Mprom[t]=0;
  for(int cruns=0;cruns<Nruns;cruns++){
    Ising.Inicie();
    for(t=0;t<Nsteps;t++){
      Mprom[t]+=Ising.GetM();
	for(mcs=0;mcs<L2;mcs++)
	  Ising.Metropolis(T,ran2);
  }
  }
  //hago los promedios
  for(t=0;t<Nsteps;t++)
    Mprom[t]/=Nruns;
  //imprimo
  for(t=0;t<Nsteps;t++)
    cout<<t<<" "<<Mprom[t]<<endl;
  return 0;
}
