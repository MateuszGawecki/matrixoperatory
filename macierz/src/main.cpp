//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;

#include "../include/macierz/Matrix.hpp"

int main()
{
    Matrix m1(4,4);
    Matrix m2(4,4);

    for(int i=0; i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            try
            {
                m1.set(i,j,j);
                m2.set(i,j,j);
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }   
        }
    }

    cout<<"Operatory wyjscia.\n";
    cout<<m1<<endl;
    cout<<m2<<endl;

 cout<<"Operatory == oraz != (po == zmieniam jeden z elementow m2)\n";
    if(m1==m2)
    {
        cout<<"Sa takie same\n";
    }

    m2.set(2,2,0);

    if(m1!=m2)
    {
        cout<<"Nie sa takie same\n";
    }

    cout<<"Operatory + - *\n";
    (m1+m2).print();
    (m1-m2).print();
    (m1*m2).print();

    cout<<"Operatory += -=\n";
    m1+=m2;
    cout<<m1;
    m1-=m2;
    cout<<m1;
    cout<<"Najpierw dodałem m2 do m1 z przypisaniem, a potem odjalem elektem powinien byc powot macierzy m1 do poprzedniego stanu -- tak tez sie stalo\n";

    cout<<"Operator [] dla m1[2][2] powinno wypisac 2\n";

    cout<<m1[2][2]<<endl;

cout<<"Teraz dla m1[1]..\n";
    for(int i=0;i<4;i++)
     cout<<m1[1][i]<<" ";

    cout<<endl;

    return 0;
}