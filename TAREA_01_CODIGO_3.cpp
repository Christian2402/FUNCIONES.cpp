#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
int Max (int a, int b);
int Max()
{
    int N1, N2, N3;
    cout<<"introduzca el valor del primer numero\n\n"<<endl;
    cin>>N1;
    cout<<"\nintroduzca el valor del segundo numero:\n\n";
    cin>>N2;
    cout<<"\nintroduzca el valor del tercer numero:\n\n";
    cin>>N3;
    int max1=Max(N1,N2);
    int max2=Max(max1, N3);
    cout<<"\nEl numero mas grande es:"<<max<<endl;
    return 0;
}
