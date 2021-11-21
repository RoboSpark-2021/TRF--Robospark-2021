# Import the CV2 library
import cv2


# Reading and resizing the image
image=cv2.imread(r"D:\TRF_2021\TRF codes\IP\thresholding.jpeg",cv2.IMREAD_GRAYSCALE)
image=cv2.resize(image,(500,500))

cv2.imwrite("D:\TRF_2021\TRF codes\IP\Task\Task1\Thresholding\Images\image.png",image)


#Threshold Value = (Gaussian-weighted sum of the neighbourhood values – constant value)
adaptive_thresh1= cv2.adaptiveThreshold(image,255,cv2.ADAPTIVE_THRESH_GAUSSIAN_C,cv2.THRESH_BINARY,5,2)
adaptive_thresh2= cv2.adaptiveThreshold(image,255,cv2.ADAPTIVE_THRESH_GAUSSIAN_C,cv2.THRESH_BINARY_INV,5,2)
cv2.imshow("Original grayscale",image)
cv2.imshow("adapt_guass",adaptive_thresh1)
cv2.imshow("adapt_guass_inv",adaptive_thresh2)
cv2.imwrite("D:\TRF_2021\TRF codes\IP\Task\Task1\Thresholding\adaptive_thresh1.png",image)
cv2.imwrite("D:\TRF_2021\TRF codes\IP\Task\Task1\Thresholding\adaptive_thresh2.png",image)
cv2.waitKey(0)
cv2.destroyAllWindows()