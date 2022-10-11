// Understanding while loop



#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int i = 0;
    while(i < 6)
    {
        cout << arr[i] << endl;
        i++;
    }

    cout << "--------" << endl;
    int j = 0;
    do
    {
        cout << arr[j] << endl;
        j++;
    }while(j < 5);
    
}