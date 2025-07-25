arr = [1, 2, 3, 4, 5]

def is_sorted(arr):
    for i in range(1, len(arr)):
        if arr[i] < arr[i - 1]:
            return False
    return True

if is_sorted(arr):
    print("The array is sorted in non-decreasing order.")
else:
    print("The array is NOT sorted.")
