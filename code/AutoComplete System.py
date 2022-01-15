def AutoCompleteSys(s,qs):
    ans=[]
    for i in s:
        if i.startswith(qs):
            ans+=[i]
    return ans


print(AutoCompleteSys(['dog','deer','deal'],'de'))

products = ["mobile","mouse","moneypot","monitor","mousepad"]

print(AutoCompleteSys(products,'mouse'))