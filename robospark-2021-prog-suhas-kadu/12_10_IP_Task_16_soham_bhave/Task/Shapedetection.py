import cv2
import numpy as np
font = cv2.FONT_HERSHEY_COMPLEX

img = cv2.imread(r"D:\TRF_2021\TRF codes\IP\vllCR.png", cv2.IMREAD_GRAYSCALE)
ret, thresh = cv2.threshold(img, 240, 255, cv2.THRESH_BINARY)
contours, hierarchy = cv2.findContours(thresh, mode=cv2.RETR_LIST, method=cv2.CHAIN_APPROX_SIMPLE)

for cnt in contours:
    approx = cv2.approxPolyDP(cnt, 0.01*cv2.arcLength(cnt, True), True)
    cv2.drawContours(img, contours, -1, color=(0, 255, 0), thickness=2)
    x = approx.ravel()[0]
    y = approx.ravel()[1]


    if len(approx) == 3:
        cv2.putText(img, "Triangle", (x, y), cv2.FONT_HERSHEY_SIMPLEX, 1, (0))
    elif len(approx) == 4:
        cv2.putText(img, "Rectangle", (x, y), cv2.FONT_HERSHEY_SIMPLEX, 1, (0))
    elif len(approx) == 5:
        cv2.putText(img, "Pentagon", (x, y), cv2.FONT_HERSHEY_SIMPLEX, 1, (0))
    elif 6 < len(approx) < 15:
        cv2.putText(img, "Ellipse", (x, y), cv2.FONT_HERSHEY_SIMPLEX, 1, (0))
    else:
        cv2.putText(img, "Circle", (x, y), cv2.FONT_HERSHEY_SIMPLEX, 1, (0))
cv2.imshow("shapes", img)
cv2.imshow("Threshold", thresh)
cv2.imwrite("D:\TRF_2021\TRF codes\IP\Task\Task2\shapedetection.png",img)
cv2.waitKey(0)
cv2.destroyAllWindows()
