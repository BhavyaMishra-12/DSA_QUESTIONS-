import numpy as np
import tensorflow as tf
import keras
from tensorflow.keras import layers ,  models

(X_train , Y_train) , ( X_test , Y_test) = tf.keras.datasets.mnist.load_data()

#  sample and size of sample

print(X_train.shape)
print(X_test.shape)


X_train = X_train.reshape(-1 , 28 , 28 , 1)/255
X_test = X_test.reshape( -1 , 28 , 28 , 1)/255


model = keras.Sequential()
model.add(layers.Con2D( 32 , ( 3 ,3 ), activation = "relu" , input_shape = ( 28 , 28 , 1)))
model.add(layers.MaxPooling2D( 2 , 2 ))
model.add(layers.Flatten())
model.add(Dense(20 , activation = "relu"))
model.add(Dense(20 , activation = "relu"))
model.add(Dense)