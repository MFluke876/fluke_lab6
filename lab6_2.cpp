#include <iostream>
#include <cmath>

using namespace std;

double deg2rad(double deg){
    return deg * M_PI / 180;
}

double rad2deg(double rad){
    return rad * 180 / M_PI;
}

double findXComponent(double len1, double len2, double rad1, double rad2){
    double x1;
    double x2;;

    x1 = len1 * cos(rad1);
    x2 = len2 * cos(rad2);

    return x1 + x2;
}

double findYComponent(double len1, double len2, double rad1, double rad2){
    double y1;
    double y2;;

    y1 = len1 * sin(rad1);
    y2 = len2 * sin(rad2);

    return y1 + y2; 
}

double pythagoras(double xcomp, double ycomp){
    return sqrt(pow(xcomp, 2) + pow(ycomp, 2));
}

void showResult(double vecLen, double vecDir){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "Length of the resultant vector = " << vecLen << endl;
    cout << "Direction of the resultant vector (deg) = " << vecDir << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
