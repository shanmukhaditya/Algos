def WateringPlants(plants, cap1, cap2):
    length = len(plants)
    if length <= 1:
        return length
    refill = 2
    c1, c2 = cap1, cap2
    if length % 2 == 0:
        rng = round(length/2)
    elif length % 2 != 0:
        rng = round(length/2) + 1
    for i in range(0,length//2):

        if (c1  < plants[i]):
            refill += 1
            c1 = cap1
        c1 = c1 - plants[i]
        if c2 < plants[length-i-1]:
            refill += 1
            c2 = cap2
        c2 = c2 - plants[length - i -1]
    if length % 2 != 0 and c1 + c2 < plants[length//2 +1]:
        refill += 1
    return refill

print(WateringPlants([2,4,5,1,2],5,7))

print(WateringPlants([1,2,3,4,3,4,5],5,7))