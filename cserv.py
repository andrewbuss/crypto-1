import cse

m = "blahblah lololol"
ciphertext = cse.encrypt(0x1234,m)
ciphertext += cse.encrypt(0xFEDC,m,len(m))
ciphertext += cse.encrypt(0x5678,m,len(m)*2)

print cse.decrypt(0x1234,ciphertext)
print "Second"
print cse.decrypt(0xFEDC,ciphertext)
print "Third"
print cse.decrypt(0x5678,ciphertext)
