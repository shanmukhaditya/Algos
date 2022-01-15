import re
def unspecifiedWords(N,M,Q):
    for q in Q:
        p = re.compile(q.replace('?','.'))
        print(sum(1 for w in M if p.match(w)))

unspecifiedWords(3,['cat','map','bat','man','pen'],['?at','ma?','?a?','??n'])