#ifndef TRIANGULOHEADER_H_INCLUDED
#define TRIANGULOHEADER_H_INCLUDED
#include <math.h>
#include <string>

using namespace std;

struct Triangulo
{
    int a, b, c;
    string r;

    float area()
    {
        float s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
    int perimetro()
    {
        return a + b + c;
    }
    float semiPerimetro()
    {
        //return perimetro() / 2;
        return (a + b + c) / 2;
    }
    string classificacao()
    {
        //string r;
        if(a==b && a==c)
            r = "Equilatero!";
        else
        {
            if(a==b || a==c || b==c)
                r = "Isoceles!";
            else
                r = "Escaleno!";
        }
        return r;
    }
    bool isTriangulo()
    {
        return a<b+c && b<a+c && c<a+b;
    }
};

#endif // TRIANGULOHEADER_H_INCLUDED
