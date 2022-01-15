def SplitString(str):
    if len(str) < 2:
        return 0
    left = [0] *26
    right = [0] * 26

    right_unique = 0
    left_unique = 0
    unique = 0
    for i in str:
        if right[ord(i)-ord('a')] == 0:
            right_unique += 1
        right[ord(i)-ord('a')] +=1

    for i in str:
        if left[ord(i)-ord('a')] == 0:
            left_unique += 1
        left[ord(i)-ord('a')] += 1
        right[ord(i)-ord('a')] -=1

        if right[ord(i)-ord('a')] == 0:
            right_unique -= 1
        if left_unique == right_unique :
            unique += 1
    return unique

print(SplitString('ababa'))