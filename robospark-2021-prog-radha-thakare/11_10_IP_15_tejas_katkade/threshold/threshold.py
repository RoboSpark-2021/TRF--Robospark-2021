
import cv2
img=cv2.imread(r"C:\python\ip task image 1\thresholding.jpeg",cv2.IMREAD_GRAYSCALE)
img=cv2.resize(img,(400,400))


ret,simple_thresh= cv2.threshold(img,150,255,cv2.THRESH_BINARY)
ret,simple_thresh1= cv2.threshold(img,150,255,cv2.THRESH_BINARY_INV)
cv2.imshow("Original grayscale",img)
cv2.imshow("simple_thresh",simple_thresh)
cv2.imshow("simple_thresh_inv",simple_thresh1)
cv2.waitKey(0)

adaptive_thresh= cv2.adaptiveThreshold(img,255,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY,5,2)
adaptive_thresh0= cv2.adaptiveThreshold(img,255,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY_INV,5,2)
cv2.imshow("Original grayscale",img)
cv2.imshow("adapt_mean",adaptive_thresh)
cv2.imshow("adapt_mean_inv",adaptive_thresh0)
cv2.waitKey(0)

adaptive_thresh1= cv2.adaptiveThreshold(img,255,cv2.ADAPTIVE_THRESH_GAUSSIAN_C,cv2.THRESH_BINARY,5,2)
adaptive_thresh2= cv2.adaptiveThreshold(img,255,cv2.ADAPTIVE_THRESH_GAUSSIAN_C,cv2.THRESH_BINARY_INV,5,2)
cv2.imshow("Original grayscale",img)
cv2.imshow("adapt_guass",adaptive_thresh1)
cv2.imshow("adapt_guass_inv",adaptive_thresh2)

#saving image
'''cv2.imwrite("OriGrayscale.jpg",img)
cv2.imwrite("simple_thresh.jpg",simple_thresh)
cv2.imwrite("simple_thresh_inv.jpg",simple_thresh1)'''

cv2.imwrite("adapt_mean.jpg",adaptive_thresh)
cv2.imwrite("adapt_mean_inv.jpg",adaptive_thresh0)
cv2.imwrite("adapt_guass.jpg",adaptive_thresh1)
cv2.imwrite("adapt_guass_inv.jpg",adaptive_thresh2)
cv2.waitKey(0)
cv2.destroyAllWindows()