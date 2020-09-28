#include <iostream>

using namespace std;

int main() {
    string Cadena;
    getline(cin,Cadena);
    if( Cadena == "int")
    {
        std::cout<<sizeof(int)<<endl;
    }
    else if (Cadena == "char")
    {
        std::cout<<sizeof(char)<<endl;
    }
    else if (Cadena == "double")
    {
        std::cout<<sizeof(double)<<endl;
    }
    else if (Cadena == "long")
    {
        std::cout<<sizeof(long)<<endl;
    }
    else if (Cadena == "short")
    {
        std::cout<<sizeof(short)<<endl;
    }
    else if (Cadena == "float")
    {
        std::cout<<sizeof(float)<<endl;
    }
    return 0;
}
