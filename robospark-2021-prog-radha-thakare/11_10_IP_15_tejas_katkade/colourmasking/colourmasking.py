import cv2
import numpy as np

img = cv2.imread(r'C:\python\ip task image 1\masking.jpg')
img = cv2.resize(img, (700, 500))
hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)

lower_blue = np.array([60, 35, 140])
upper_blue = np.array([180, 255, 255])
mask1 = cv2.inRange(hsv, lower_blue, upper_blue)
cv2.imshow('bluemask', mask1)
cv2.imwrite('bluemask.jpg', mask1)

lower_red = np.array([0,50,50]) 
upper_red = np.array([10,255,255])
mask2 = cv2.inRange(hsv,lower_red,upper_red)
cv2.imshow('redmask', mask2)
cv2.imwrite('redmask.jpg', mask2)

lower_g=np.array([50, 100,100])
upper_g=np.array([70, 255, 255])
mask3 = cv2.inRange(hsv,lower_g,upper_g)
cv2.imshow('greenmask', mask3)
cv2.imwrite('greenmask.jpg', mask3)
cv2.waitKey(0)
cv2.destroyAllWindows()