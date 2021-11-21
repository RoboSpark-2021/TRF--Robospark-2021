import cv2
import numpy as np
# im_color = cv2.imread("masking.jpg", cv2.IMREAD_COLOR)
# im_hsv = cv2.cvtColor(im_color, cv2.COLOR_RGB2HSV)
# # # For red
# rh=np.array([0,100,100],np.uint8)
# rl=np.array([10,255,255],np.uint8)
# # lower = np.array([155,25,0])
# # upper = np.array([179,255,255])
# maskr=cv2.inRange(im_hsv,rl,rh)
# cv2.imshow("original",im_color)
# cv2.imshow('masked',maskr)
# cv2.waitKey(0)
# cv2.destroyAllWindows()
#

# cv2.waitKey(0)
# cv2.destroyAllWindows()
#
img=cv2.imread('masking.jpg')
img_hsv=cv2.cvtColor(img, cv2.COLOR_BGR2HSV)
lower_red = np.array([0,50,50]) #example value
upper_red = np.array([10,255,255]) #example value
mask = cv2.inRange(img_hsv, lower_red, upper_red)
cv2.imshow("original",img)
cv2.imshow('masked',mask)
cv2.imwrite("C:/Users/chait/Desktop/10_10_Task16_IP_Chaitanya_landge/All Results/masking_red.jpg",mask)
cv2.waitKey(0)
cv2.destroyAllWindows()
