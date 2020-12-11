# Link: https://www.geeksforgeeks.org/rearrange-array-alternating-positive-negative-items-o1-extra-space/
# Single Line Input Is Not Possible In This Code
size = int(input("Enter the size of the list: "))
list = []; final = []
print("Enter the elements into the list")
n = 0 ; p = 1
for i in range(0, size):
    ele = int(input())
    list.append(ele)
for i in range(0, size):
    if(list[i] < 0):
        final.insert(n, list[i])
        n = n+2
    elif(list[i] >= 0):
        final.insert(p, list[i])
        p = p+2
print(final)
