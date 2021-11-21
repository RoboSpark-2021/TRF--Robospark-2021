import cv2
import numpy as np
import os
#os.chdir('C:\python\ip task 1')
img = cv2.imread(r'C:\python\ip task image 1\morphology.JPG')
imgname=input('give erostion image name to save:')
imgname2=input("give dilation image name to save:") 
kernel = np.ones((5,5), np.uint8)

img_erosion= cv2.erode(img,kernel,iterations=2)


img_dilation=cv2.dilate(img_erosion,kernel,iterations=1)

cv2.imshow('Input', img)
cv2.imshow('Erosion', img_erosion)
cv2.imshow('Dilation', img_dilation)

cv2.imwrite(imgname, img_erosion)
cv2.imwrite(imgname2, img_dilation)
cv2.waitKey(0)
cv2.destroyAllWindows()