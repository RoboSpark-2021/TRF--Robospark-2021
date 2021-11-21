import cv2
import numpy as np
img = cv2.imread(r"C:\Users\pavan\Desktop\ML TRF\IP IMAGES\morphology.JPG")
kernel = np.ones((5,5), np.uint8)
img_erosion= cv2.erode(img,kernel,iterations=1)
img_dilation=cv2.dilate(img_erosion,kernel,iterations=1)

result1= cv2.imshow('Erosion', img_erosion)

cv2.imwrite(r"C:\Users\pavan\Desktop\ML TRF\IP IMAGES\morpho.JPG",img_erosion)
result2=cv2.imshow('Dilation', img_dilation)
cv2.imwrite(r"C:\Users\vithi\Desktop\ML TRF\IP IMAGES\morpho1.JPG",img_dilation)


cv2.waitKey(0)
cv2.destroyAllWindows()