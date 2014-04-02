#include "myfunctions.h"
#include <iostream>
#include <windows.h>

using namespace std;

void menu()
{
    tdVector a, b, result;
    double scalar, dResult;
    int choice;
    do
    {
        cout<<"   1 - the sum of two vectors\n";
        cout<<"   2 - the difference of two vectors\n";
        cout<<"   3 - multiply vector by scalar\n";
        cout<<"   4 - scalar product of two vectors\n";
        cout<<"   5 - vector product of two vectors\n";
        cout<<"   6 - vector length\n";
        cout<<"   7 - exit\n";
        cout<<endl;
        cin>>choice;
        system("cls");

        switch(choice)
        {
        case 1:
            cout<<"Enter first vector\n";
            a=enterVector();
            cout<<"Enter second vector\n";
            b=enterVector();
            result=sum(a,b);
            cout<<endl;
            showVector(result);
            break;

        case 2:
            cout<<"Enter first vector\n";
            a=enterVector();
            cout<<"Enter second vector\n";
            b=enterVector();
            result=difference(a,b);
            cout<<endl;
            showVector(result);
            break;

        case 3:
            cout<<"Enter vector\n";
            a=enterVector();
            cout<<"Enter scalar\n";
            cin>>scalar;
            result=multiplyByScalar(a, scalar);
            cout<<endl;
            showVector(result);
            break;

        case 4:
            cout<<"Enter first vector\n";
            a=enterVector();
            cout<<"Enter second vector\n";
            b=enterVector();
            dResult=scalarProduct(a,b);
            cout<<endl<<"result = "<<dResult;
            break;

        case 5:
            cout<<"Enter first vector\n";
            a=enterVector();
            cout<<"Enter second vector\n";
            b=enterVector();
            result=vectorProduct(a,b);
            cout<<endl;
            showVector(result);
            break;

        case 6:
            cout<<"Enter vector\n";
            a=enterVector();
            dResult=vectorLength(a);
            cout<<endl<<"result = "<<dResult;
            break;

        case 7:
            break;

        default:
            cout<<"\nEnter number between 1 and 7!\n";
            break;
        }
        cout<<endl;
    }
    while(choice!=7);
}

int main()
{
    menu();

    return 0;
}
