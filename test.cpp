void swap(int* arr, int a, int b)
{
    int tmp = arr[b];
    arr[b] = arr[a];
    arr[a] = tmp;
}

void quickSort(int* arr, int left, int right)
{
    if (arr == nullptr) return;
    if (left < 0 || right < 0) return;
    if (left >= right) return;
    int midIdx = (left + right) >> 1, start = left - 1, end = right + 1;
    while (start < end)
    {
        do start++; while(arr[start] < arr[midIdx]);
        do end--; while(arr[end] > arr[midIdx]);
        if (start < end) swap(arr, start, end);
    }
    quickSort(arr, left, end);
    quickSort(arr, end+1, right);
}

void testNeg()
{
    int a[] = {1};
    quickSort(a, -1, -1);
    quickSort(nullptr, 0, 1);
}

void newFunction()
{
    int a[] = {1, 2, 1};
    quickSort(a, 0, 2);
}
