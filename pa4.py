ifile = open("proj4-log.parsed", 'rb')

iv = ifile.readline()[0:16]

for line in ifile:
    if line[-4:-1] == '404' and line[0] != ' ':
        for j in range(17):
            pad = [0 for _ in range(16)]

            for i in range(16):
                if i>(15-j):
                    pad[i] = j
            for i in range(16):
                print '\b'+chr(pad[i]^ord(iv[i])^ord(line[i])),
            print

        iv = line[16:32]


for i in range(16):
    print '\b{0:02x}'.format(ord(iv[i])),