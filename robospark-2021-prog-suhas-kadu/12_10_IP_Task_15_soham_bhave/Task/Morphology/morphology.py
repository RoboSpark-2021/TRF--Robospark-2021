import cv2
import numpy as np


# Reading the input image
image = cv2.imread(r"D:\TRF_2021\TRF codes\IP\morphology.jpg")


# Taking a matrix of size 5 as the kernel
kernel = np.ones((5,5), np.uint8)

#Erosion
image_erosion= cv2.erode(image,kernel,iterations=1)

#Dilation
image_dilation=cv2.dilate(image_erosion,kernel,iterations=1)

cv2.imshow('Input', image)
cv2.imshow('Erosion', image_erosion)
cv2.imshow('Dilation', image_dilation)

# save the image
cv2.imwrite("D:\TRF_2021\TRF codes\IP\Task\Task1\Morphology\Input.jpg", image)
cv2.imwrite("D:\TRF_2021\TRF codes\IP\Task\Task1\Morphology\image_erosion.jpg", image)
cv2.imwrite("D:\TRF_2021\TRF codes\IP\Task\Task1\Morphology\image_dilation.jpg", image)

cv2.waitKey(0)
cv2.destroyAllWindows()