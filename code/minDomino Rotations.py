def minDominoRotations( A, B) :
    if A[0] == B[0]:
        return countDomino(A,B,A[0])
    else:
        return max(countDomino(A,B,A[0]),countDomino(A,B,B[0]))
    
    
def countDomino(A,B,target):
    ctop,cbot = 0, 0
    n = len(A)
        
    for i in range(0,n):
        if A[i] != target and B[i] != target:
            return -1
        elif A[i] != target:
            ctop +=1
        elif B[i] != target:
            cbot +=1
    return min(ctop,cbot)
