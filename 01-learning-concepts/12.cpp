#include <iostream>
using namespace std;

// Striver Sorting class

void selection_sort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }

        swap(arr[i], arr[mini]);
    }
}
void bubble_sort(int arr[], int n)
{
    for (int i = n - 1; i > 0; i--)
    {
        bool swaps = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swaps = true;
            }
        }
        cout << "runs" << endl;
        if (!swaps)
        {
            break;
        }
    }
}
void insertion_sort(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {

        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
            else
            {
                break;
            }
        }
    }
}

int main()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // selection_sort(arr, n);
    // bubble_sort(arr, n);
    insertion_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}