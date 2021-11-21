import cv2
import numpy as np

cap=cv2.imread(r"D:\TRF_2021\TRF codes\IP\masking.jpg") #internal webcam used

def fun(x): #call function: won't pass anything just to avoid erroras
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

        rgbl_blue=np.array([2,120,0],np.uint8)
        rgbh_blue=np.array([40,255,255],np.uint8)
        rgbl_red = np.array([110,50,50], np.uint8)
        rgbh_red = np.array([130,255,255], np.uint8)
        rgbl_green = np.array([25, 52, 72], np.uint8)
        rgbh_green = np.array([102, 255, 255], np.uint8)

        mask_1=cv2.inRange(hsv,rgbl_blue,rgbh_blue)
        mask_2=cv2.inRange(hsv,rgbl_red,rgbh_red)
        mask_3=cv2.inRange(hsv, rgbl_green, rgbh_green)
        cv2.imshow("original",cap)
        cv2.imshow('masked_1',mask_1)
        cv2.imshow("masked_2",mask_2)
        cv2.imshow("masked_3",mask_3)

        result_1 = cv2.bitwise_and(cap, cap, mask=mask_1)
        result_2 = cv2.bitwise_and(cap, cap, mask=mask_2)
        result_3 = cv2.bitwise_and(cap, cap, mask=mask_3)

        cv2.imwrite(r"D:\TRF_2021\TRF codes\IP\Task\Task1\Masking\result_1.png",cap)
        cv2.imwrite(r"D:\TRF_2021\TRF codes\IP\Task\Task1\Masking\result_2.png",cap)
        cv2.imwrite(r"D:\TRF_2021\TRF codes\IP\Task\Task1\Masking\result_3.png",cap)

        k=cv2.waitKey(1)  #k will contain ascii value of key pressed
        if k == 32: #32 is ascii of 'spacebar' key
             break
colormask()
cv2.destroyAllWindows()

"""
red:[110,50,50],[130,255,255]..lower array, upper array
blue:[2,120,0],[40,255,255]
green 51, 255 ,209  155, 255, 51 
"""
