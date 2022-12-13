#include <iostream>
#include "Vector2.h"

int main (){

    Vector2 a(4.0, 2.0);
    std::cout << "vector a: " << std::endl;
    std::cout << "x = " << a.getX() << ' ' << "y = " << a.getY() << std::endl;
    std::cout << "len = " << a.getLen() << ' ' << "phi = " << a.getPhi() << std::endl;
    std::cout<<"" << std::endl;

    Vector2 b(1.0, 3.0);
    std::cout << "vector b: " << std::endl;
    std::cout << "x = " << b.getX() << ' ' << "y = " << b.getY() << std::endl;
    std::cout << "len = " << b.getLen() << ' ' << "phi = " << b.getPhi() << std::endl;
    std::cout<<"" << std::endl;


    std::cout << "a + b: " << std::endl;
    std::cout << "x = " << (a+b).getX() << ' ' << "y = " << (a+b).getY() << std::endl;
    std::cout << "len = " << (a+b).getLen() << ' ' << "phi = " << (a+b).getPhi() << std::endl;
    std::cout<<"" << std::endl;

    std::cout <<  "a * b = " << a*b << std::endl;
    std::cout<<"" << std::endl;


    std::cout << "a pol: " << std::endl;
    std::cout << "r = " << a.to_psk().first << ' ' << "phi = " << a.to_psk().second << std::endl;
    std::cout<<"" << std::endl;


    std::cout << "a * 4 = " << std::endl;
    std::cout << "x = " << (a*4).x << ' ' << "y = " << (a*4).y << std::endl;
    std::cout << "len = " << (a*4).getLen() << ' ' << "phi = " << (a*4).getPhi() << std::endl;
    std::cout<<"" << std::endl;


    std::cout << "a / 6 : " << std::endl;
    std::cout << "x = " << (a/6).getX() << ' ' << "y = " << (a/6).getY() << std::endl;
    std::cout << "len = " << (a/6).getLen() << ' ' << "phi = " << (a/6).getPhi() << std::endl;
    std::cout<<"" << std::endl;

    std::cout << "edin vector a : " << "x " << a.Norm().x << ' ' << "y "<< a.Norm().y << std::endl;
    std::cout<<"" << std::endl;

    std::cout << "a = b ? - " << (a==b) << std::endl;
    std::cout << "a not = b ? - " << (a!=b) << std::endl;
    std::cout << "a = a ? - " << (a==a) << std::endl;
    std::cout<<"" << std::endl;

    std::cout << "cos a and b = " << a.kos_scal_proizv(b) << std::endl;
    std::cout<<"" << std::endl;
    std::cout << "cos betw a and b = " << a.cosine_distance(b) << std::endl;
    std::cout<<"" << std::endl;

    std::cout << "ismenenie len a to 7' = " << std::endl;
    std::cout << "x = " << (a.change_len(7)).x << ' ' << "y = " << (a.change_len(7)).y << std::endl;
    std::cout << "len = " << (a.change_len(7)).getLen() << ' ' << "phi = " << (a.change_len(7)).getPhi() << std::endl;
    std::cout<<"" << std::endl;

    std::cout << "ismenenie phi a to 45' = " << std::endl;
    std::cout << "x = " << (a.change_phi(45)).x << ' ' << "y = " << (a.change_phi(45)).y << std::endl;
    std::cout << "len = " << (a.change_phi(45)).getLen() << ' ' << "phi = " << (a.change_phi(45)).getPhi() << std::endl;
    std::cout<<"" << std::endl;

    return 0;
}
