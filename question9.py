arr = [1, 2, 2, 3, 1, 4, 2]

# Using a dictionary
freq = {}

for num in arr:
    if num in freq:
        freq[num] += 1
    else:
        freq[num] = 1

print("Element frequencies:")
for key, value in freq.items():
    print(f"{key}: {value}")
