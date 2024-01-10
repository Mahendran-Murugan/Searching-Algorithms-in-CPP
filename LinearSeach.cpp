#include <iostream>
using namespace std;
int flag = 0;
void searchEle(int arr[], int n, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            cout << n << " is found at " << i;
            flag = 1;
            break;
        }
    }
}

int main()
{
    int arr[] = {15, 35, 99, 105, 695, 1001};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n;
    cout << "Enter the Element to Search: ";
    cin >> n;
    searchEle(arr, n, size);
    if (flag == 0)
        cout << n << " is Not Found.";
    cout << endl;
    return 0;
}