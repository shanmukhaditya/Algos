def DecodeMsg(data):
    memo = [None for i in data + '1']
    return helper(data, len(data), memo)


def helper(data, k, memo):
    if k == 0:
        return 1
    s = len(data) - k
    if data[s] == '0':
        return 0
    if memo[k] != None:
        return memo[k]

    result = helper(data, k - 1, memo)
    if k >= 2 and int(data[s:s + 2]) <= 26:
        result += helper(data, k - 2, memo)
    memo[k] = result
    return result


print(DecodeMsg('11111111111111111111111111111111'))