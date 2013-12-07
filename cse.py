class prg:
    def __init__(self, key,offset=0):
        self.a = key%(65536*65536)
        self.b = key/(65536*65536)
        self.nonce = 0
        self.skip(offset)
    def getbyte(self):
        self.a *= 29
        self.a += 203
        self.a %= (65536*65536)
        self.b *= 31
        self.b += 207+self.nonce
        self.b %= (65536*65536)
        self.nonce+=1
        return (self.a^self.b)%256
    def skip(self,bytes):
        while bytes>0:
            self.getbyte()
            bytes-=1

def encrypt(key, plaintext,offset=0):
    g = prg(key,offset)
    ciphertext = ""
    for c in plaintext: ciphertext += chr(ord(c) ^ g.getbyte())
    return ciphertext

def decrypt(key, ciphertext,offset=0):
    g = prg(key,offset)
    plaintext = ""
    for c in ciphertext: plaintext += chr(ord(c) ^ g.getbyte())
    return plaintext