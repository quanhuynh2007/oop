// Page 128
#include <iostream>
using namespace std;
class SortAlgorithm
{
private:
    static SortAlgorithm* _algorithm; // save object only one
    void (*currentAlgorithm)(float[], int); // save algorithm was selected
    SortAlgorithm();
public:
    static SortAlgorithm* getObject(void (*pAlg)(float[], int) = NULL);
    static void SelectionSort(float[], int);
    static void InsertionSort(float[], int);
    static void InterchangeSoft(float[], int);
    void Sort(float[], int);
};

SortAlgorithm* SortAlgorithm::_algorithm = NULL;

SortAlgorithm::SortAlgorithm()
{
    currentAlgorithm = SelectionSort; // select algorithm default
}

SortAlgorithm* SortAlgorithm::getObject(void (*pAlg)(float[], int)) // static
{
    if (_algorithm == NULL)
    {
        _algorithm = new SortAlgorithm();
    }
    if (pAlg != NULL)
    {
        _algorithm->currentAlgorithm = pAlg;
    }
    return _algorithm;
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
    cout << "sortAlgorithmSingleton.cpp" << endl;
    //SortAlgorithm* object = SortAlgorithm::getInstance();
    float a[] = {1.4F, -5.2F, 3.3F, 0};
    int n = sizeof(a)/sizeof(a[0]);
    cout << "Array init: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
    SortAlgorithm* alg = SortAlgorithm::getObject(SortAlgorithm::SelectionSort);
    alg->Sort(a, n);
    cout << "Array after SelectionSort increase: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;

    alg = SortAlgorithm::getObject(SortAlgorithm::InsertionSort);
    alg->Sort(a, n);
    cout << "Array after InsertionSort increase: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;

    alg = SortAlgorithm::getObject(SortAlgorithm::InterchangeSoft);
    alg->Sort(a, n);
    cout << "Array after InterchangeSoft increase: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
    return 0;
}
