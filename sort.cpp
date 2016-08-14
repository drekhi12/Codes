#include <iostream>
#include <algorithm>

using namespace std;

const int SIZE = 7;

int main()
{
    int a[SIZE] = {5, 3, 32, -1, 1, 104, 53};

    //Now we call the sort function
    sort(a, a + SIZE);

    cout << "Sorted Array looks like this." << endl;
    for (size_t i = 0; i != SIZE; ++i)
        cout << a[i] << " ";

    return 0;
}
