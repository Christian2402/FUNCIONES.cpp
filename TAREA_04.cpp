#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
int Max (int a, int, b);

int main()
{
    int N1, N2, N3;
    cout<<"introduzca el valor del primer numero\n\n"<<endl;
    cin>>N1;
    cout<<"\nitroduzca el valor del segundo numero:\n\n";
    cin>>N2;
    cout<<"\nitroduzca el valor del tercer numero:\n\n";
    cin>>N3;
    int Max = Max (Max (N1, N2), N3);

    cout<<"<\nEl numero mas grande es:"<<Max<<endl;

    return 0;

}
