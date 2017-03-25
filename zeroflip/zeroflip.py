l = map(int, raw_input().split())
m = input()
left = 0
right = 0
numberOfZeroes = 0
max_width = -1
max_left = 0
max_right = 0
while right < len(l):
    if numberOfZeroes <= m:
        if l[right] == 0:
            numberOfZeroes = numberOfZeroes + 1
        right = right + 1
    if numberOfZeroes > m:
        if l[left] == 0:
            numberOfZeroes = numberOfZeroes - 1
        left = left + 1
    width = right - left
    if numberOfZeroes <= m and width > max_width:
        max_width = width
        max_left = left
        max_right = right
for i in range(max_left, max_right):
    if l[i] == 0:
        print i,