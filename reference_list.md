# Reference

## Machine Learning
### Reinforcement Learning
#### [Monte Carlo Methods](./references/Monte Carlo Methods.pdf)
It introduces the monte carlo methods. It explains First-visit Monte Carlo Policy Evaluation, on-policy Monte Carlo Control and off-policy Monte Carlo Control. It also provides some explaination about the blackjack example.

#### [Create custom gym environments from scratch — A stock market example](https://towardsdatascience.com/creating-a-custom-openai-gym-environment-for-stock-trading-be532be3910e)
It shows how to create an environment in gym, which is a python library.

#### [Automating Pac-man with Deep Q-learning: An Implementation in Tensorflow](https://towardsdatascience.com/automating-pac-man-with-deep-q-learning-an-implementation-in-tensorflow-ca08e9891d9c)
Examples of DQL (Pac-man)

#### [Deep Learning Models for Human Activity Recognition](https://machinelearningmastery.com/deep-learning-models-for-human-activity-recognition/)
Very useful material for my project. It explains different algorithm to tackle the problem of human activity recognition problem.

#### [Convolutional Neural Networks for human activity recognition using mobile sensors](https://ieeexplore.ieee.org/document/7026300)
This explains the algorithm of using convolution neural network to classify human activity. The current method I will go for.

#### [Deep Q-learning from Demonstrations](https://arxiv.org/abs/1704.03732)
Maybe useful for speeding the learning process for the agent.

### Keras Tutorial
#### [Keras input explanation: input_shape, units, batch_size, dim, etc ](https://stackoverflow.com/questions/44747343/keras-input-explanation-input-shape-units-batch-size-dim-etc)

#### [Understanding 1D and 3D Convolution Neural Network | Keras](https://towardsdatascience.com/understanding-1d-and-3d-convolution-neural-network-keras-9d8f76e29610)

#### [Introduction to 1D Convolutional Neural Networks in Keras for Time Sequences](https://blog.goodaudience.com/introduction-to-1d-convolutional-neural-networks-in-keras-for-time-sequences-3a7ff801a2cf)

#### [How to Use the Keras Functional API for Deep Learning](https://machinelearningmastery.com/keras-functional-api-deep-learning/)

#### [Keras Tutorial: The Ultimate Beginner's Guide to Deep Learning in Python](https://elitedatascience.com/keras-tutorial-deep-learning-in-python)

#### [C4W1L10 CNN Example](https://www.youtube.com/watch?v=bXJx7y51cl0)

#### [Divide and Conquer-Based 1D CNN Human Activity Recognition Using Test Data Sharpening](./references/sensors-18-01055-v3.pdf)

### Basic Learning
####[categorical cross-entropy equation](https://www.machinecurve.com/index.php/2019/10/22/how-to-use-binary-categorical-crossentropy-with-keras/#)

####[one hot encoder]()


## Arduino
### Coding
#### [Timer](https://randomnerdtutorials.com/interrupts-timers-esp8266-arduino-ide-nodemcu/)
It shows how to use millis() to acheive timer function.

#### [MPU6050_tockn library](https://forum.arduino.cc/index.php?topic=587830.0)
It shows how to implement the MPU6050_tockn library and read the MPU6050 accelerometer and gyroscope values.

#### [ds18b20](https://create.arduino.cc/projecthub/TheGadgetBoy/ds18b20-digital-temperature-sensor-and-arduino-9cc806)
[other ref link](https://randomnerdtutorials.com/esp32-multiple-ds18b20-temperature-sensors/)
It shows how to use the library.

#### [virtual function in C++](https://www.geeksforgeeks.org/virtual-function-cpp/)

#### [turn png into bitmap](https://javl.github.io/image2cpp/)

## Air Conditioner
### Power Consumption
#### [Ideal Air Conditioner temperature for electricity savings](https://www.bijlibachao.com/air-conditioners/ideal-air-conditioner-temperature-for-electricity-saving.html)
This website talks about the working methods of compressor, thermostat, and some basic air conditioner concepts.

## Electronics
### Sensors
#### [HTU21D](./references/HTU21D_datasheet.pdf)
- VIN max = 3.6V
- SDA, SCL max = 3.6V
- SDA, SCL min = 70% * VIn
- Current consumption
    - Measuring
        - Min 300 μA
        - TYP 450 μA
        - MAX 500 μA

#### [BH1750](./references/BH1750 datasheet.pdf)
- VIN = 3.3V
- SDA, SCL max = 5V
- Supply Current
    - TYP 120 μA
    - MAX 190 μA
- [schematics](./references/BH1750 SCH.pdf)

#### [BMP180](./references/BMP180_datasheet.pdf)
- VIN max = 3.6V
- SDA, SCL max = 3.6V
- Current consumption
    - Peak current
        - TYP 650 μA
        - MAX 1000 μA
    - Standard Mode
        - 5 μA

#### [MPU6050](./references/MPU6050_datasheet.pdf)
- VDD POWER SUPPLY
    - Operating Voltages 2.375 3.46 V
- Normal Operating Current
    - Gyroscope + Accelerometer + DMP 3.9 mA
    - Gyroscope + Accelerometer (DMP disabled) 3.8 mA
    - Gyroscope + DMP (Accelerometer disabled) 3.7 mA
    - Gyroscope only (DMP & Accelerometer disabled) 3.6 mA
    - Accelerometer only (DMP & Gyroscope disabled) 500 µA
- Accelerometer Low Power Mode Current
    - 1.25 Hz update rate 10 µA
    - 5 Hz update rate 20 µA
    - 20 Hz update rate 70 µA
    - 40 Hz update rate 140 µA
- Full-Chip Idle Mode Supply Current 5 µA
- VLOGIC REFERENCE VOLTAGE MPU-6050 only
    - Voltage Range VLOGIC must be ≤VDD at all times 1.71 VDD V
    - Normal Operating Current 100 µA
- TEMPERATURE RANGE
    - Specified Temperature Range Performance parameters are not applicable beyond Specified
    - Temperature Range -40 + 85 °C


### OTHERS
#### [MAX30102 working priniciple](https://hackaday.io/project/26103-preemiealert/log/64833-max30102-how-does-it-work)

#### [LCD1602](./references/LCD1602_datasheet.pdf)
- Supply Voltage For Logic VDD-VSS
    - Min 4.5, Max 5.5 V
- Supply Voltage For LCD VDD-V0 TYP 3.8V
- Supply Current 1.2 mA , when V = 5V

### Processors
#### [NodeMCU](./references/NodeMCU_datasheet.pdf)
- Voltage: 3.3V
- Current consumption: 10uA~170mA

#### [ArduinoMega](https://store.arduino.cc/usa/mega-2560-r3)
- Operating Voltage	5V
- Input Voltage (recommended)	7-12V
- Input Voltage (limit)	6-20V
- DC Current per I/O Pin	20 mA
- DC Current for 3.3V Pin	50 mA
- DC Current Vcc and GND Pins  200.0 mA

## Other projects
#### [Smart Sensors Enable Smart Air Conditioning Control](./sensors-14-11179.pdf)
This project aims to use the smart sensors to control the air conditioner. It is very similar to the device my project is doing. However, it does not use a machine learning program to determine the human motion. Also, it only detect the motion and sleeping rate. But my project aims to detect the activity type and classify it into different metabolic rate.

#### [Mobile User Indoor-Outdoor Detection through Physical Daily Activities](https://www.ncbi.nlm.nih.gov/pmc/articles/PMC6387420/)
This project aims to use the built-in sensors inside the mobile to detect the user activity whether it is indoor or outdoor activities.

