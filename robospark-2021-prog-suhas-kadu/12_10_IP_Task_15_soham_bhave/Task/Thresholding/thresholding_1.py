# Import the CV2 library
import cv2


# Reading and resizing the image
image=cv2.imread(r"D:\TRF_2021\TRF codes\IP\thresholding.jpeg",cv2.IMREAD_GRAYSCALE)
image=cv2.resize(image,(500,500))

cv2.imwrite("D:\TRF_2021\TRF codes\IP\Task\Task1\Thresholding\Images\image.png",image)

# Simple thresholding
ret,simple_thresh= cv2.threshold(image,150,255,cv2.THRESH_BINARY)
ret,simple_thresh_inv= cv2.threshold(image,150,255,cv2.THRESH_BINARY_INV)
cv2.imshow("Original grayscale",image)
cv2.imshow("simple_thresh",simple_thresh)
cv2.imshow("simple_thresh_inv",simple_thresh_inv)
cv2.imwrite("D:\TRF_2021\TRF codes\IP\Task\Task1\Thresholding\simple_thresh.png",image)
cv2.imwrite("D:\TRF_2021\TRF codes\IP\Task\Task1\Thresholding\simple_thresh_inv.png",image)
cv2.waitKey(0)
cv2.destroyAllWindows()