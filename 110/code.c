#include <stdio.h>
#include "point.h"
#include <math.h>

double perimetr (double a, double b, double c){
    double per;
    per = a+b+c;
    return per;

}

double square (double a, double b, double c){
    double sq, p, s;
    p=(a+b+c)*0.5;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    return s;
}
