#Thresholding : useful in image segmentation, performed on grayscale images

import cv2
img=cv2.imread("thresholding.jpeg",cv2.IMREAD_GRAYSCALE)
img=cv2.resize(img,(400,400))


# Simple thresholding:
ret,simple_thresh= cv2.threshold(img,150,255,cv2.THRESH_BINARY)
ret,simple_thresh1= cv2.threshold(img,150,255,cv2.THRESH_BINARY_INV)
cv2.imshow("Original grayscale",img)
cv2.imshow("simple_thresh",simple_thresh)
cv2.imshow("simple_thresh_inv",simple_thresh1)
cv2.imwrite("All Results/simple_thresh.jpg",simple_thresh)
cv2.imwrite("All Results/simple_thresh1.jpg",simple_thresh1)
cv2.waitKey(0)
cv2.destroyAllWindows()

#adaptive thresholding:
adaptive_thresh= cv2.adaptiveThreshold(img,255,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY,5,2)
adaptive_thresh0= cv2.adaptiveThreshold(img,255,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY_INV,5,2)
cv2.imshow("Original grayscale",img)
cv2.imshow("adapt_mean",adaptive_thresh)
cv2.imshow("adapt_mean_inv",adaptive_thresh0)
cv2.imwrite("All Results/adaptive_thresh.jpg",adaptive_thresh)
cv2.imwrite("All Results/adaptive_thresh0.jpg",adaptive_thresh0)
cv2.waitKey(0)
cv2.destroyAllWindows()

#Adaptive Gaussion
adaptive_thresh1= cv2.adaptiveThreshold(img,255,cv2.ADAPTIVE_THRESH_GAUSSIAN_C,cv2.THRESH_BINARY,5,2)
adaptive_thresh2= cv2.adaptiveThreshold(img,255,cv2.ADAPTIVE_THRESH_GAUSSIAN_C,cv2.THRESH_BINARY_INV,5,2)
cv2.imshow("Original grayscale",img)
cv2.imshow("adapt_guass",adaptive_thresh1)
cv2.imshow("adapt_guass_inv",adaptive_thresh2)
cv2.imwrite("All Results/adaptive_thresh1.jpg",adaptive_thresh1)
cv2.imwrite("All Results/adaptive_thresh2.jpg",adaptive_thresh2)

cv2.waitKey(0)
cv2.destroyAllWindows()
