import cv2
import numpy as np
import os
os.chdir(r"C:\Users\91772\Desktop\TRF ROBOSPARK\IP-1")

img = cv2.imread("morphology.JPG")
kernel = np.ones((5,5), np.uint8)
img_erosion= cv2.erode(img,kernel,iterations=1)
img_dilation=cv2.dilate(img_erosion,kernel,iterations=1)

cv2.imshow('Input', img)
cv2.imshow('Erosion', img_erosion)
cv2.imshow('Dilation', img_dilation)

cv2.waitKey(0)
cv2.destroyAllWindows()

cv2.imwrite('Erosion.png', img_erosion)
cv2.imwrite('Dilation.png', img_dilation)
