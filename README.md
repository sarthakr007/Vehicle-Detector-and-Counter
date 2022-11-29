# Vehicle Detector and Counter

Vehicle detection and statistics in highway monitoring video scenes are of considerable significance to intelligent traffic management and control of the highway. With the popular installation of traffic surveillance cameras, a vast database of traffic video footage has been obtained for analysis. Generally, at a high viewing angle, a more-distant road surface can be considered. The object size of the vehicle changes greatly at this viewing angle, and the detection accuracy of a small object far away from the road is low. In the face of complex camera scenes, it is essential to effectively solve the above problems and further apply them. In this article, we focus on the above issues to propose a viable solution, and we apply the vehicle detection results to multi-object tracking and vehicle counting.

![sar_proj_4](https://user-images.githubusercontent.com/92045949/204639157-6723f326-8e75-4fc4-8904-a6ccfb15d556.jpg)

# Algorithm

The Steps for detecting and cou ting vehicles is listed below: 
  - We use k-means algorithm to cluster the vehicle scales and aspect ratios in the vehicle datasets. This process can improve 1.6% mean average precision.
  - We detect vehicles on different feature map according to different size vehicles.
  - We fuse the low-level and high-level feature map, so the low-level feature map has more semantic information.

![sar_proj_2](https://user-images.githubusercontent.com/92045949/204637629-20cf6464-b4da-4888-bdde-c6bf071983f9.png)


# Applications of The Project

The developed video based vehicle detection system was employed for advanced warning of congestion and queues at work zones and on freeways during special events. The advance warning system consists of a series of video monitoring stations equipped with video re- cording devices and our video based vehicle detection system. Vehicle queue lengths, speed and counts were monitored before work zones or special event locations and real-time information regarding congestions were transmitted using Radio Frequency (RF) modules with directional antennas to a portable variable message sign trailer few miles downstream.

The evaluations of the system were conducted at various times of the day and the vehicle speeds evaluated with and without the advance warning system in play. Most of the evaluations at work zones were performed during the night and at special events during the day. The figure shows that the advance warning system has a positive impact on the commuters. T ere was a general reduction of  5 miles/hr in speeds and less traffic congestion at work zones and special events due to the deployment of the advance warning system. The next section discusses the performance of the detection algorithm and the im- pact of the advance warning system.


# Screenshorts

![Screenshot](https://user-images.githubusercontent.com/92045949/204638478-f03c8251-e674-444f-931e-57f5ed7594ae.png)
![Screenshot_2](https://user-images.githubusercontent.com/92045949/204638883-86eb1546-e5e7-4721-aff3-5296850e0269.png)
