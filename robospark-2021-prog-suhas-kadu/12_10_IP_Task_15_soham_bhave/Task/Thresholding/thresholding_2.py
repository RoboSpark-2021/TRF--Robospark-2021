# Import the CV2 library
import cv2


# Reading and resizing the image
image=cv2.imread(r"D:\TRF_2021\TRF codes\IP\thresholding.jpeg",cv2.IMREAD_GRAYSCALE)
image=cv2.resize(image,(500,500))

cv2.imwrite("D:\TRF_2021\TRF codes\IP\Task\Task1\Thresholding\Images\image.png",image)

#adaptive thresholding
#Threshold Value = (Mean of the neighbourhood area values – constant value)
adaptive_thresh= cv2.adaptiveThreshold(image,255,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY,5,2)
adaptive_thresh_inv= cv2.adaptiveThreshold(image,255,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY_INV,5,2)
cv2.imshow("Original grayscale",image)
cv2.imshow("adapt_mean",adaptive_thresh)
cv2.imshow("adapt_mean_inv",adaptive_thresh_inv)
cv2.imwrite("D:\TRF_2021\TRF codes\IP\Task\Task1\Thresholding\adaptive_thresh.jpeg",image)
cv2.imwrite("D:\TRF_2021\TRF codes\IP\Task\Task1\Thresholding\adaptive_thresh_inv.jpeg",image)
cv2.waitKey(0)
cv2.destroyAllWindows()

