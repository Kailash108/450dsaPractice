# Link: https://practice.geeksforgeeks.org/problems/find-the-median0527/1
from math import floor

size = int(input("Enter the size of the array: "))
print("Enter the elements into the array")
arr = []

for i in range(0, size):

    ele = int(input())
    arr.append(ele)
for i in range(0, size):
    for j in range(i+1, size):
        if(arr[i] > arr[j]):
            temp = arr[i]
            arr[i] = arr[j]
            arr[j] = temp

if(len(arr)%2 != 0):
    oddAns = floor(len(arr)/2)
    print("Median is:", arr[oddAns]) 
else:
    middle1 = floor(len(arr)/2)-1
    middle2 = middle1+1
    evenAns = round((arr[middle1]+arr[middle2])/2)
    print("Median is:", evenAns)
