void swap(int* arr, int a, int b)
{
    int tmp = arr[b];
    arr[b] = arr[a];
    arr[a] = tmp;
}

void quickSort(int* arr, int left, int right)
{
    if (left < 0 || right < 0) return;
    if (left >= right) return;
    int midIdx = (left + right) >> 1, start = left, end = right - 1;
    while (start < end)
    {
        while(arr[start] <= arr[midIdx]) start++;
        while(arr[end] <= arr[midIdx]) end--;
        if (start < end) swap(arr, start, end);
    }
    quickSort(arr, left, start);
    quickSort(arr, start, right);
}