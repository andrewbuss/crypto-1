p = 13407807929942597099574024998205846127479365820592393377723561443721764030073546976801874298166903427690031858186486050853753882811946569946433649006084171
h = 3239475104050450443565264378728065788649097520952449527834792452971981976143292558073856937958553180532878928001494706097394108577585732452307673444020333
g = 11717829880366207009516117596335367088558084999998952205599979459063929499736583746670572176471460312928594829675428279466566527115212748467589894601965568
B = 2**20
leftfile = open("left.csv")

leftside = {}
for x1 in xrange(1,2**20):
    leftside[int(leftfile.readline())] = x1
    if not x1%1000: print x1

for x0 in xrange(0,2**20):
    if not x0%1000: print x0
    if pow(g,B*x0,p) in leftside:
        print x0, leftside[pow(g,B*x0,p)], pow(g,B*x0,p)