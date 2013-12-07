import Crypto.Hash.SHA256

hash = Crypto.Hash.SHA256.new()


i=0xE8C11C02



s = ''
while i:
	s+=chr(i%256)
	i-=i%256
	i/=256

hash.update(s)
print hash.hexdigest()
