#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,21,34,56,78};
    int even=0;
    int odd=0;

    int length = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<length;i++)
    {
        if(arr[i]/2 == 0 )
        {
            even++ ;
        }
        else
        {
            odd++ ;

        }
    }
    cout<<"Even number(s) are : "<<even<<endl;
    cout<<"Odd number(s) are : "<<odd;

    return 0;
}
