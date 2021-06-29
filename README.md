# Nstrumenta project example for code, data and sandbox use, including active commit webhook to GitHub.

## Set up the project and link to the code repository
1. Fork this repository so you can make edits
2. Create a new project on https://nstrumenta.com
3. Add the repository you created to your project
![image](https://user-images.githubusercontent.com/41758588/123736482-0bb30200-d856-11eb-8f1c-634953fbffa4.png)


## Record Data
1. Open the Record page in your nstrumenta project
![image](https://user-images.githubusercontent.com/41758588/123739589-bb3ea300-d85b-11eb-8eac-8ed537c47ef4.png)
2. Configure inputs to record, for this example, open nstrumenta from a mobile phone and select the Device Motion input to record the inertial sensors on your device.
3. Click Start Recording, wave the device around to make an interesting log, and then click Stop Recording to finish the log

## View Data
1. Your recording will be listing in the Data page in your nstrumenta project
2. clicking on the name will open a time series plot
![image](https://user-images.githubusercontent.com/41758588/123737404-c263b200-d857-11eb-978c-5ab62d52ffbc.png)

## Edit your code in VS Code
1. clone your repository locally
2. open the root folder in VS Code
3. install the nstrumenta VS Code extension![image](https://user-images.githubusercontent.com/41758588/123737979-d22fc600-d858-11eb-876b-a7c29f867d8b.png)
4. click on the grayed out VS Code logo in nstrumenta and select Init to initialize the connection <img src="https://user-images.githubusercontent.com/41758588/123738117-10c58080-d859-11eb-9e65-0fb4d8e0b2c1.png" width="200" />
5. When successfully initialized, the logo will turn blue and you can ping to test the connection
6. use the nstrumenta.update command in VS Code to update your project with the latest from your repository
![image](https://user-images.githubusercontent.com/41758588/123738481-b973e000-d859-11eb-9102-ee79888909b7.png)

## View your output in the Sandbox
1. Open the Sandboxes page in your nstrumenta project and click on the viewer-timeseries sandbox ![image](https://user-images.githubusercontent.com/41758588/123738723-31daa100-d85a-11eb-85c2-c6e3cf401107.png)
2. Select the live-session that was created in the nstrumenta.update step
3. Check Use Dataflow, and select the recent-file dataflow and the live-session dataflow version
4. Click Run to run your latest recording through your latest algorithm
![image](https://user-images.githubusercontent.com/41758588/123739104-f42a4800-d85a-11eb-8ffa-7a44a4428b5a.png)


## Develop and Collaborate 
1. The Sandbox is now configured to live update with new changes from the algorithm or recordings. Even if they are contributed by other users of your project.
 ![image](https://user-images.githubusercontent.com/41758588/123739149-073d1800-d85b-11eb-8c2b-593fb15c822a.png)
