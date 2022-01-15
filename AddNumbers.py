def AddNumbers1(list,k):
    for i in range(len(list)):
        for j in range(len(list)) :
            if list[i]+list[j]==k and i!=j:
                return [list[i],list[j]]

    return False
def AddNumbers2(list,k):
    d=set()
    for i in d:
        if i-k in d:
            return True
        d.add(i)
    return False
