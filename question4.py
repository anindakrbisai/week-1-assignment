arr = [0, 1, 0, 3, 12]

# Two-pointer approach
count = 0  # Count of non-zero elements

for i in range(len(arr)):
    if arr[i] != 0:
        arr[count] = arr[i]
        count += 1

# Fill the rest with zeros
while count < len(arr):
    arr[count] = 0
    count += 1

print("Array after moving zeros to end:", arr)
