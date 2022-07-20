# Hybrid_Battery_Escooter
In this repository it is presented the work related to the B.sc. thesis, where an High Performance Hybrid Battery circuit was developed for an E-scooter.

In this project is presented a strategy aimed at the development of a DC-DC converter best suited to operate in an HESS configuration using HP and HE battery types in a Dual- cell architecture for E-scooter application.
The core feature of the active parallel HESS configuration proposed was represented by the development and testing of a bidirectional DC-DC converter. Which needs to operate either as a boost and either as a buck converter. Through that a 3- phase BLDC was supplied with the energy stored in the UC bank during accelerations of the ES, while it recharged the UC bank during regenerative braking.
It was first simulated the acceleration behavior of an ES. The parameters obtained from that were used for designing the DC- DC converter. According to its requirements a control algorithm was developed in Arduino. Consequently empirical tests were performed to validate the converter and the developed control algorithm.


## System Architecture 
![HESS](https://user-images.githubusercontent.com/101090050/180007583-e6b3301b-7f2d-4e30-8a64-285f9df85332.PNG)

![HESSs](https://user-images.githubusercontent.com/101090050/180007615-46b23923-c836-48ca-bac8-a2a4d660f0a4.PNG)

## PCB Schematics 
![SCHEM](https://user-images.githubusercontent.com/101090050/180007746-7e791b12-079b-4ef7-acde-9ea6ea2b0889.PNG)


![pcb](https://user-images.githubusercontent.com/101090050/180007790-2e9798ed-9b28-4c52-8521-7af3f6a74f22.PNG)

## Experimental Results 
<img width="1274" alt="Screenshot 2022-07-20 at 19 15 36" src="https://user-images.githubusercontent.com/101090050/180031879-9c3945b0-09c3-4dc3-a4d9-581c698a17a9.png">
