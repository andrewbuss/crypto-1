l = [319, 680, 180, 690, 129, 620, 762, 689, 762, 318, 368, 710, 720, 710, 629, 168, 160, 689, 716, 731, 736, 729, 316,
     729, 729, 710, 769, 290, 719, 680, 318, 389, 162, 289, 162, 718, 729, 319, 790, 680, 890, 362, 319, 760, 316, 729,
     380, 319, 728, 716]
l = [[int(c) for c in str(_) ] for _ in l]

p = [set() for _ in range(10)]
i = 0

for c in l:
    p[c[0]].add(c[1])
    p[c[0]].add(c[2])
    p[c[1]].add(c[2])

for i in range(10):
    if not p[i]: continue
    print i, "comes before", p[i]
