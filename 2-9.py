for ka in range(16):
    for kb in range(16):
        for kc in range(16):
            for kd in range(16):
                for ke in range(16):
                    x = [0,1,1,0]
                    t = ka
                    if x[0] == 1: t^=kb
                    if x[1] == 1: t^=kc
                    if x[2] == 1: t^=kd
                    if x[3] == 1: t^=ke
                    if bin(t) != '0b11': continue
                    x = [0,1,0,1]
                    t = ka
                    if x[0] == 1: t^=kb
                    if x[1] == 1: t^=kc
                    if x[2] == 1: t^=kd
                    if x[3] == 1: t^=ke
                    if bin(t) != '0b1010': continue
                    x = [1,1,1,0]
                    t = ka
                    if x[0] == 1: t^=kb
                    if x[1] == 1: t^=kc
                    if x[2] == 1: t^=kd
                    if x[3] == 1: t^=ke
                    if bin(t) != '0b110': continue
                    print ka, kb, kc, kd, ke,
                    x = [1,1,0,1]
                    t = ka
                    if x[0] == 1: t^=kb
                    if x[1] == 1: t^=kc
                    if x[2] == 1: t^=kd
                    if x[3] == 1: t^=ke
                    print t
