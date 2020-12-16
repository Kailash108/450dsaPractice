# Link: https://practice.geeksforgeeks.org/problems/palindromic-array-1587115620/1
tc = int(input("Enter the no. of testcases: "))
arr = []; flag = []; modArr = []
while(tc):
    size = int(input("Enter the size of the array: "))
    print("Enter the elements into the array")
    for i in range(0, size):
        ele = int(input())
        arr.append(ele)
    for i in range(0, size):
        rev = 0
        modArr.append(arr[i])
        while(modArr[i] > 0):
            rev = rev*10 + modArr[i]%10
            modArr[i] = modArr[i] // 10
        if(arr[i] == rev):
            flag.append(1)
        else:
            flag.append(0)
    if(0 in flag):
        print(0)
    else:
        print(1)
    tc = tc-1
