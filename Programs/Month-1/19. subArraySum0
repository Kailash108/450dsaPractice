# Link: https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1
size = int(input("Enter the size of the list: "))
list = []; n=0; flag=0
print("Enter the elements into the list")
for i in range(0, size):
    ele = int(input())
    list.append(ele)
s = set()
for i in range(0, size):
    n = n + list[i]
    if(n==0 or n in s):
        print("Yes")
    else:
        s.add(n)
