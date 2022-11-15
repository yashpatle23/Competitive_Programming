import os


try:
    import matplotlib.pyplot as plt
    from sklearn.metrics import accuracy_score
    import numpy as np
    import albumentations as A
    #from ImageDataAugmentor.image_data_augmentor import ImageDataAugmentor
    from azureml.core import Workspace, Dataset
    from azureml.core.compute import ComputeTarget, ComputeInstance


except ImportError as ie:
    print ("Trying to install required module:"+ie.name)
    print("\n")
    os.system('python -m pip install '+ie.name)


import requests