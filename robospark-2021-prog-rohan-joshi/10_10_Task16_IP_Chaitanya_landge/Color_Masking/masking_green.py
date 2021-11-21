import cv2
import numpy as np
img = cv2.imread("masking.jpg", cv2.IMREAD_COLOR)
hsv = cv2.cvtColor(img, cv2.COLOR_RGB2HSV)
# # For red
gh=np.array([40],np.uint8)
gl=np.array([70],np.uint8)
# mask=cv2.inRange(hsv,gl,gh)
mask = cv2.inRange(hsv, (36, 25, 25), (70, 255,255))
cv2.imshow("original",img)
cv2.imshow('masked',mask)
cv2.imwrite("C:/Users/chait/Desktop/10_10_Task16_IP_Chaitanya_landge/All Results/masking_green.jpg",mask)
cv2.waitKey(0)
cv2.destroyAllWindows()



