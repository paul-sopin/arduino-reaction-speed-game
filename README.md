What is it?:
- This project is a game, that tests your reaction speed.
- Once the green, yellow, and red lights count down, the blue one is activated after a random interval, and two players (on the left and the right) compete to press their corresponding buttons once the blue one activates.
- Once a player wins, a few seconds pass and a new round starts, and each round the interval to blue is a new random number to prevent guessing the interval.



https://github.com/user-attachments/assets/1fff7fe5-8f91-4625-974c-6c997805a620




As my first complete Arduino project, I had to learn everything about the device from scratch.

This began with watching a few YouTube tutorials to learn basics of electronics like when to use resistors, which limit current to prevent breaking components. To follow a more organized path, I worked through the free course offered at https://www.skool.com/robonyx (amazing resource), and was able to learn about components
used alongside the Arduino, like buttons and LEDs. After learning the basics to create a reaction speed based game, I decided to build it myself instead of following the step by step tutorial offered in the course. At first, I built my demo in a virtual simulator but switched later
to using a physical Arduino once it arrived. An important mistake I noticed while remaking the digital simulator version I made, physically, was that I had missed two resistors for the LEDs on the left and right side. If I had not implemented those in time, my two LEDs would've
burned out due to too high of a current. In person, the game worked perfectly and fulfilled everything I expected of it. 

To-do:
- Complete a mechanism to prevent early pressing.
- Use an active or passive buzzer alongside the early pressing mechanism and during gameplay.
- Get the game working alongside a battery for portability.
