import struct
from functools import reduce

# read the PPM image file named fname and convert it to a list of lists of pixels.
# each pixel is an RGB triple, represented as a list of size 3.
# each list of pixels represents one row in the image, ordered from top to bottom.
def readPPM(fname):
    f = open(fname, "rb")
    p6Ignore = f.readline()
    dimensions = f.readline().split()
    width = int(dimensions[0])
    height = int(dimensions[1])
    maxIgnore = f.readline()

    pixels = []
    rgbData = [x for x in f.read()]
    f.close()
    for r in range(height):
        row = []
        for c in range(width):
            i = 3 * (r * width + c)
            row.append(rgbData[i:i+3])
        pixels.append(row)
    return pixels


# pixels should be a list of list of RGB triples, in the same format as returned
# by the readPPM function above.
# this function writes those pixels to the file named fname as a PPM image.
def writePPM(pixels, fname):
    f = open(fname, "wb")
    f.write("P6\n".encode())
    width = len(pixels[0])
    height = len(pixels)
    f.write((str(width) + " " + str(height) + "\n").encode())
    f.write((str(255) + "\n").encode())
    bPixels = [[struct.pack('BBB', p[0], p[1], p[2]) for p in r] for r in pixels]
    flatPixels = reduce(lambda x,y: x+y, bPixels)
    f.writelines(flatPixels)
    f.close()


def lmap(f, l):
    return list(map(f, l))

def negate(pixels): 
    return lmap(lambda r: lmap(lambda p: [255 - p[0], 255 - p[1], 255 - p[2]], r),
                pixels)


def greyscale(pixels):
    
    def toGreyscale(p):
        newValue = int(round(.299 * p[0] + .587 * p[1] + .114 * p[2]))
        return [newValue, newValue, newValue]
    
    return lmap(lambda r: lmap(toGreyscale, r), pixels)


def reverse(l):
    return l[::-1]

def upsideDown(pixels):
    return reverse(pixels)


def mirrorImage(pixels):
    return lmap(reverse, pixels)


def everyOther(l):
    return l[::2]

def scale(pixels):
    return lmap(everyOther, everyOther(pixels))

