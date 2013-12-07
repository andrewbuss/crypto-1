from Crypto.Cipher import AES

key = [chr(0x00)]*16
pt = key
mode = AES.MODE_CBC
encryptor = AES.new(''.join(key), mode)
keys = {}
for i in xrange(0xFFFFFF):
    j = i
    k = 15
    while j:
        pt[k] = chr(j%256)
        j >>= 8
        k-=1
    ct = encryptor.encrypt(''.join(pt))

    if pt[13] == '\x00' and pt[14] == '\x00':
        for c in pt:  print '\b{0:02X}'.format(ord(c)),
        print ': ',
        for c in ct:  print '\b{0:02X}'.format(ord(c)),
        print
    if ct in keys: print "collision"
    else: keys[ct] = pt
