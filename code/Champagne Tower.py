class Solution:
    def champagneTower(self, poured: int, query_row: int, query_glass: int) -> float:
        curr = (query_row + 1)*(query_row+2)/2
        prev = (query_row)*(query_row+1)/2
        
        if poured >= curr:
            return 1
        elif prev < poured <= curr:
            div = (poured-prev)/query_row
            
            if query_glass == 0 or query_glass == query_row:
                return div/(2**query_row)
            else:
                return div*(generateNthRow(query_row, query_glass))/(2**query_row)
        else: 
            return 0
    def generateNthRow (N, k): 
  
        # nC0 = 1 
        prev = 1
        if k ==0 :
            return prev
        #print(prev, end = '') 
        for i in range(1, k): 
            # nCr = (nCr-1 * (n - r + 1))/r 
            curr = (prev * (N - i + 1)) // i 
            #print(",", curr, end = '') 
            prev = curr
        return curr
