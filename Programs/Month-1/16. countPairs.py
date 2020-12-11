# Link: https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1
# Single Line Input Is Not Possible In This Code
cnt = 0
n = int(input("Enter the size of the array: "))
arr = []
print("Enter the elements into the array")
for i in range(0,n):
    ele = int(input())
    arr.append(ele)
k = int(input("Enter the sum: "))
for i in range(0, n):
    for j in range(i+1, n):
        if(arr[i] + arr[j] == k):
            cnt = cnt+1
print(cnt)
