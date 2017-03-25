l = map(int, raw_input().split())
m = input()
max_length = 0
positions = []
temp_positions = []

for i in range(0, len(l)):
    count = 0
    temp_positions = []
    for j in range(i, len(l)):
        if l[j] == 0:
            count = count + 1
            temp_positions.append(j)
        subarray_length = j - i + 1
        if count == m and max_length < subarray_length:
            positions = temp_positions[:]
            max_length = subarray_length
print positions
