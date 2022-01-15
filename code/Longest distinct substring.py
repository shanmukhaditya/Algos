def substring(s,k):
    if s is None:
        return ""
    if len(set(s))<=k:
        return s
    max,lans=0,0
    for i in range(len(s)):
        for j in range(i,len(s)):
            length=len(set(s[i:j+1]))
            lans=len(s[i:j+1])
            if length>k:
                break
            if max<lans:
                if length <=k:
                    max=lans
                    res=s[i:j+1]
    return res



print(substring('abccbba',3))

