import numpy as np
import os
def getData(X,Y):
    x = np.load(X)
    y = np.load(Y)
    print(x.shape)

getData('tb_data/x_test.npy','tb_data/y_test.npy')