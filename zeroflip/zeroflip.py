l = map(int, raw_input().split())
m = input()
max_length = 0
positions = []
temp_positions = []
def find_positions_zero(array):
    position_of_zeroes = []
    count = 0
    for i in range(0, len(array)):
        if array[i] == 0:
            position_of_zeroes.append(i)
            count = count + 1
    return count, position_of_zeroes


for i in range(0, len(l)):
    count = 0
    temp_positions = []
    for j in range(i, len(l)):
        if l[j] == 0:
            count = count + 1
            temp_positions.append(j)
        subarray_length = j - i + 1
        if count == m and max_length < subarray_length:
            positions = temp_positions
            max_length = subarray_length
print positions
