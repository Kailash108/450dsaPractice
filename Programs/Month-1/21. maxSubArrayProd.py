# Link: https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1
size = int(input("Enter the size of the array: "))
print("Enter the elements into the array")
arr = []
for i in range(0, size):
    ele = int(input())
    arr.append(ele)
output = arr[0]
for i in range(0, size):
    m = arr[i]
    for j in range(i+1, size):
        output = max(m, output)
        m = m * arr[j]
print(max(m, output))
