import os
import qrcode

img = qrcode.make("https://youtu.be/Ec08db2hP10?si=sTBvHI7aHSbQrV1X")
img.save("qr.png")

# Open image on Windows
os.startfile("qr.png")
