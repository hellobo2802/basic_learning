import os
import cv2
ct_folder = 'D:/1/SARBuD/train/ct'
save_folder = 'D:/1/save'

ct_files = os.listdir(ct_folder)

for ct_file in ct_files:
    ct_path = os.path.join(ct_folder, ct_file)

    ct_img = cv2.imread(ct_path)
    print("ct_img_shape: ", ct_img.shape)

    with open(save_folder + '/record.txt', 'a') as f:
        f.write('ct_path: ' + str(ct_path) + 'ct_shape: ' + str(ct_img.shape) + '\n')