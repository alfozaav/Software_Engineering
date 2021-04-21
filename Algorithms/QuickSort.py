# QuickSort in Python

def quicksort(arr):
    if len(arr) < 2:
        return arr #Base case arrays with 0 or 1 elements are already sorted
    else:
        pivot = arr[0]
        less = [ i for i in arr[1:] if i <= pivot ]  #Sub-array of all elementes less than pivot

        greater = [ i for i in arr[1:] if i > pivot ] #Sub-array of all elements greater than pivot

        return quicksort(less) + [pivot] + quicksort(greater)
    
print quicksort([10, 5, 2, 3])