# Vehicle Detector and Counter

Vehicle detection and statistics in highway monitoring video scenes are of considerable significance to intelligent traffic management and control of the highway. With the popular installation of traffic surveillance cameras, a vast database of traffic video footage has been obtained for analysis. Generally, at a high viewing angle, a more-distant road surface can be considered. The object size of the vehicle changes greatly at this viewing angle, and the detection accuracy of a small object far away from the road is low. In the face of complex camera scenes, it is essential to effectively solve the above problems and further apply them. In this article, we focus on the above issues to propose a viable solution, and we apply the vehicle detection results to multi-object tracking and vehicle counting.

![sar_proj_1](https://user-images.githubusercontent.com/92045949/204636445-a2383262-ab75-4084-ac7c-ea705d2743f3.png)

# Algorithm

The Steps for detecting and cou ting vehicles is listed below: 
  - We use k-means algorithm to cluster the vehicle scales and aspect ratios in the vehicle datasets. This process can improve 1.6% mean average precision.
  - We detect vehicles on different feature map according to different size vehicles.
  - We fuse the low-level and high-level feature map, so the low-level feature map has more semantic information.

![sar_proj_2](https://user-images.githubusercontent.com/92045949/204637629-20cf6464-b4da-4888-bdde-c6bf071983f9.png)

# Screenshorts

![Screenshot](https://user-images.githubusercontent.com/92045949/204638478-f03c8251-e674-444f-931e-57f5ed7594ae.png)
![Screenshot_2](https://user-images.githubusercontent.com/92045949/204638883-86eb1546-e5e7-4721-aff3-5296850e0269.png)
