// Page 132
#include <iostream>
using namespace std;
class SortAlgorithm
{
private:
    static void (*currentAlgorithm)(float[], int); // save algorithm was selected
    SortAlgorithm(){}; // method constructor hide inside class
public: // all method is static
    static void SelectionSort(float[], int);
    static void InsertionSort(float[], int);
    static void InterchangeSoft(float[], int);
    static void setAlgorithm(void (*pAlg)(float[], int));
    static void Sort(float[], int);
};

// Initialize
void (*SortAlgorithm::currentAlgorithm)(float[], int) = InsertionSort;
void SortAlgorithm::setAlgorithm(void (*pAlg)(float[], int))
{
    if (pAlg != NULL)
    {
        currentAlgorithm = pAlg;
    }
}

void SortAlgorithm::Sort(float a[], int n)
{
    if (currentAlgorithm != NULL)
    {
        currentAlgorithm(a, n);
    }
}

void SortAlgorithm::SelectionSort(float a[], int n) // static
{
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            float temp = a[min]; a[min] = a[i]; a[i] = temp;
        }
    }
}

void SortAlgorithm::InsertionSort(float a[], int n) // static
{
    int pos; float x;
    for(int i = 1; i < n; i++)
    {
        x = a[i];
        for (pos = i; (pos > 0) && (a[pos - 1] > x); pos--)
        {
            a[pos] = a[pos - 1];
        }
        a[pos] = x;
    }
}

void SortAlgorithm::InterchangeSoft(float a[], int n) // static
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                float temp = a[i]; a[i] = a[j]; a[j] = temp;
            }
        }
    }
}

int main()
{
    cout << "sortAlgorithmSingletonVersionStatic.cpp" << endl;
    float a[] = {1.4F, -5.2F, 3.3F, 0};
    int n = sizeof(a)/sizeof(a[0]);
    cout << "Array init: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
    SortAlgorithm::setAlgorithm(SortAlgorithm::SelectionSort);
    SortAlgorithm::Sort(a, n);
    cout << "Array after SelectionSort increase: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;

     SortAlgorithm::setAlgorithm(SortAlgorithm::InsertionSort);
    SortAlgorithm::Sort(a, n);
    cout << "Array after InsertionSort increase: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;

    SortAlgorithm::setAlgorithm(SortAlgorithm::InterchangeSoft);
    SortAlgorithm::Sort(a, n);
    cout << "Array after InterchangeSoft increase: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
    return 0;
}
