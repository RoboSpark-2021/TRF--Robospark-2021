import cv2
import numpy as np

image = cv2.imread(r"C:\Users\adity\Desktop\Task\masking.jpg")
def fun(x): #call function: won't pass anything just to avoid errors
    pass

def colormask():
    cv2.namedWindow("masking") #created window to hold trackbars
    bh='blue high'
    bl = 'blue low'
    gh = 'green high'
    gl = 'green low'
    rh = 'red high'
    rl = 'red low'

#creating trackbars
    cv2.createTrackbar(bl, 'masking', 0, 255, fun)
    cv2.createTrackbar(gl, 'masking', 0, 255, fun)
    cv2.createTrackbar(rl, 'masking', 0, 255, fun)
    cv2.createTrackbar(bh, 'masking', 0, 255, fun)
    cv2.createTrackbar(gh, 'masking', 0, 255, fun)
    cv2.createTrackbar(rh, 'masking', 0, 255, fun)

    while True :

        hsv=cv2.cvtColor(image,cv2.COLOR_RGB2HSV)

        btl=  cv2.getTrackbarPos(bl, 'masking')
        gtl = cv2.getTrackbarPos(gl, 'masking')
        rtl = cv2.getTrackbarPos(rl, 'masking')
        bth = cv2.getTrackbarPos(bh, 'masking')
        gth = cv2.getTrackbarPos(gh, 'masking')
        rth = cv2.getTrackbarPos(rh, 'masking')

        rgbl=np.array([btl,gtl,rtl],np.uint8)
        rgbh=np.array([bth,gth,rth],np.uint8)

        mask=cv2.inRange(hsv,rgbl,rgbh)
        cv2.imshow("original",image)
        cv2.imshow('masked',mask)

        k=cv2.waitKey(1)  #k will contain ascii value of key pressed
        if k == 32: #32 is ascii of 'spacebar' key
             break
colormask()
cv2.destroyAllWindows()

"""
red:[110,50,50],[130,255,255]..lower array, upper array
blue:[2,120,0],[40,255,255]
"""