#include <csetjmp>
#include <iostream>
#include <cmath>
#include <math.h>


int main(){

    double p = 3.14159;
    int pod_final = p / 2;
    int rot_final = 100;
    int pod_ini = 0;
    int rot_ini = 0;
    int pod = pod_ini;
    int rot = rot_ini;
    int pod_prev = pod;
    int rot_prev = rot;

    double j_track = std::pow(2, rot_final * cos(pod_final)  - rot *cos(pod));
    std::cout << j_track <<std::endl;

    int j_energy = std::pow(2, rot);
    std::cout << j_energy << std::endl;
    int j_smooth = std::pow(2,rot-rot_prev) +std::pow(2,pod-pod_prev) ;
    std::cout << j_smooth << std::endl;

    int j = j_track + j_energy + j_smooth;

    std::cout << j << std::endl;
    return 0;
}
