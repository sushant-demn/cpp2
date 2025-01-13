def rec(lst, i = 0):
    if i >= len(lst):
        return
    if lst[i] % 2 == 0:
        lst[i] //=2
    else:
        lst[i] = lst[i] * 3 + 1

    rec(lst, (i + 1))
    if i < len(lst):
        lst[i] =+ lst[(i + 1)]
    
numbers = [5, 8, 3, 7, 10]
print(numbers)
rec(numbers , 0)
