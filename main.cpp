#include <iostream>

using namespace std;

// write yourself
void ShowArray(size_t* i_a, size_t i_size)
{
    for (size_t index = 0; index < i_size; index++){
        cout<< " "<< i_a[index];
    }
}

void ZeroArray(size_t* i_a, size_t i_size) {
    for (size_t index =0; index <i_size;index++){i_a[index]=0;}
}

int main()
{
    const size_t size = 18;
    size_t  a[size];
    for (size_t i = 0; i < size; i++)
    {
        a[i] = i;
    }

    ShowArray(a, size);

    cout << endl << "==============" << endl;
    ZeroArray(a, 5);

    ShowArray(a, size);
    cout << endl;

    return 0;
}
