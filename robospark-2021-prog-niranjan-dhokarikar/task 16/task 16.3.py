import cv2
import numpy as np

cap=cv2.imread("masking.jpg")

def fun(x):
    pass

def colormask():
    cv2.namedWindow("masking")
    bh='blue high'
    bl = 'blue low'
    gh = 'green high'
    gl = 'green low'
    rh = 'red high'
    rl = 'red low'

    cv2.createTrackbar(bl,'masking',0,255,fun)
    cv2.createTrackbar(gl, 'masking', 0, 255, fun)
    cv2.createTrackbar(rl, 'masking', 0, 255, fun)
    cv2.createTrackbar(bh, 'masking', 0, 255, fun)
    cv2.createTrackbar(gh, 'masking', 0, 255, fun)
    cv2.createTrackbar(rh, 'masking', 0, 255, fun)

    while True :
        hsv=cv2.cvtColor(cap,cv2.COLOR_RGB2HSV)

        btl=cv2.getTrackbarPos(bl,'masking')
        gtl = cv2.getTrackbarPos(gl, 'masking')
        rtl = cv2.getTrackbarPos(rl, 'masking')
        bth = cv2.getTrackbarPos(bh, 'masking')
        gth = cv2.getTrackbarPos(gh, 'masking')
        rth = cv2.getTrackbarPos(rh, 'masking')

        rgbl=np.array([btl,gtl,rtl],np.uint8)
        rgbh=np.array([bth,gth,rth],np.uint8)

        mask=cv2.inRange(hsv,rgbl,rgbh)
        cv2.imshow("original",cap)
        cv2.imshow('masked',mask)

        k=cv2.waitKey(1)
        if k == 32:
             break
colormask()
cv2.destroyAllWindows()

"""
red:[110,50,50],[130,255,255]
blue:[2,120,0],[40,255,255]
green:[65, 60, 60],[80, 255, 255]
"""