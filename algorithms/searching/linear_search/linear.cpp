#include <iostream>
using namespace std;

int linear_search(int numbers[], int size, int target)
{

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int numbers[] = {2, 3, 4, 10, 40};
    int target = 10;
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int result = linear_search(numbers, size, target);
    if (result == -1)
    {
        cout << "Element doesn't exist!" << endl;
    }
    else
    {
        cout << "Element is present at index " << result << endl;
    }
    return 0;
}