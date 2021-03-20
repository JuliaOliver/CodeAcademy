# <p align="center"> CodeAcademy Personal Task <p>
# <p align="left"> Description
The school will hold a contest to choose Miss School. Boris, as a man with a lot of experience in working with a computer, took on the task of processing the results of the competition. He learned from the chairman of the jury that N indicators will be selected to evaluate the candidates, N is an integer, at least 5 but not more than 50. The indicators are ranked in order of importance and numbered from 1 to N, as the indicator with number 1 is the most important. For each indicator, the jury will award each candidate a score of 1 to 100 points. The ranking will be based on the amount of points collected by the candidates - the higher the amount, the higher the candidate is ranked. If two girls collect the same amount, the one who has more points on the first indicator is ranked higher. If two girls collect the same amount and have an equal number of points on the first indicator, the one with more points on the second indicator is ranked higher. If the second indicator has an equal number of points, then the one with more points on the third indicator and so on to the last indicator is ranked higher. If the grades on all indicators are equal, then it does not matter how the candidates are ranked with an equal number of points.
Boris has to make a program that quickly calculates the final result from the jury's assessments. As there are 500 girls in the school and each of them can take part in the competition, the jury will not be able to calculate the results and arrange the candidates. In fact, Boris's experience was related to some of the most sensational computer games, and this task proved impossible.
Help him by writing a CONC.EXE program for processing the results of the competition.
The details of the jury will be set in a text file CONC.INP as follows:
in the first row, separated by a space, the integers N - number of indicators and M - number of girls who appeared in the competition (numbered with numbers from 1 to M). In each of the next M lines are set N numbers, separated by an interval - the grades of one of the candidates. The grades are arranged in the order of the numbers with which the girls appear in front of the jury.
For example, at N = 5 and M = 6, the input file will look like this
5 6
77 14 85 70 48
30 99 49 89 66
77 14 80 74 49
60 20 56 68 80
60 20 56 68 80
70 20 56 68 70
In the output file CONC.OUT the ranking found by the program should be displayed: first the number of the best ranked girl, then the second in the ranking and so on. The numbers must be separated by one space. For our example, the source file must contain:
2 1 3 6 4 5 or 2 1 3 6 5 4.? <p>
