import cv2
import numpy as np
im_color = cv2.imread("masking.jpg", cv2.IMREAD_COLOR)
im_hsv = cv2.cvtColor(im_color, cv2.COLOR_RGB2HSV)
# # For red
bh=np.array([0,50,50],np.uint8)
bl=np.array([10,255,255],np.uint8)
maskr=cv2.inRange(im_hsv,bh,bl)
cv2.imshow("original",im_color)
cv2.imshow('masked',maskr)
cv2.imwrite("C:/Users/chait/Desktop/10_10_Task16_IP_Chaitanya_landge/All Results/masking_blue.jpg",maskr)
cv2.waitKey(0)
cv2.destroyAllWindows()



