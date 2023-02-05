// John wants to walk 10.000 steps every day, so he could be healthy. But unfortunately, today his pedometer (app for counting steps) doesn't work.John already measured that he walked X minutes and ran Y minutes, but he is sure that he still hasn't achieved his 10.000 steps mark.Write a program that will calculate how many more steps does John need to make to achieve his goal if you know that when he is walking he makes 2 steps in a second, while when he is running he is making 4 steps in a second.Given two natural numbers X and Y from input. Output the remaining steps John needs to make to achieve his goal

 int steps(int x, int y) {
    int totalsteps,remainingsteps;

    totalsteps = 120*x + 240*y;
    remainingsteps=1000-totalsteps;
    return totalsteps;

}