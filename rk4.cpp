#include <iostream>
#include <cmath>
using namespace std;

float g =9.8;
float vx0 =10;
float vy0 =10;
float k =0.7;
float dt= 0.01;

int main(){
    
    
      return 0;
    }
float K(float py, float px, float t, float (*ecuacion ) (float, float)){
        float k1= dt* ecuacion(py,t);
        float k2 = dt*ecuacion(py+(k1/2), t+(dt/2));
        float k3 = dt*ecuacion(py+(k2/2), t+(dt/2));
        float k4= dt*ecuacion(py+k3, t+dt);
    
    return py+(1.0/6.0*(k1+2*k2+2*k3+k4));
}
        
float velx(float k, float vx, float vy){
        return -k*vx*(vx/(pow(vx,2)+pow(vy,2)));
}
float vely(float g, float vx, float vy,float k){
        return -g-k*vy*(vy/(pow(vx,2)+pow(vy,2)));
}

