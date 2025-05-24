import cv2
import numpy as np

face_classifier = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_frontalface_default.xml') # haarcascades is the trained face detector

def facial_recog(img):

    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)  # converts the image in a img with a gray scale (becouse face detection works better on gray scales)
    faces = face_classifier.detectMultiScale(gray, 1.3, 5) # this performs the real face detection 

    if len(faces) == 0:
        return img

    for (x, y, w, h) in faces:
        cv2.rectangle(img,(x, y), (x + w, y + h), (255, 0, 0), 2)

    return img

cap = cv2.VideoCapture(1)   # starts the camera

while True:
    ret, frame = cap.read()

    if not ret:
        print("Failed to capture the camerea.")
        break

    frame = facial_recog(frame) # processes the frame to detect faces

    cv2.imshow('Ricognizione facciale', frame)

    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()
