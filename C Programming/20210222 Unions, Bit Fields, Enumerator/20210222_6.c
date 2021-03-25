/* Describe the time in a structure: hours: minutes: seconds as a tagTMyTime structure. 
Using this structure, define the following functions: add seconds, add minutes. Add hours to a 
variable of type struct tagTMyTime. Write the following functions: return the number of seconds 
for a variable of the entered type and the inverse function of seconds to generate a variable 
tagTMyTime. Write two functions that subtract and add two variables of type struct tagMyTime 
and return a variable of the same type. Use these features to make sure they are working properly. */

#include <stdio.h>

struct time{
    int hour;
    int min;
    int sec;
};

struct time addSecond(struct time currentTime, int addsec){
    struct time realTime = {currentTime.hour,currentTime.min,currentTime.sec+addsec};
    if(realTime.sec >= 60){
        realTime.min++;
        realTime.sec = 60;
    }
    return realTime;
}
struct time addMinute(struct time currentTime,  int addmin){
    struct time realTime = {currentTime.hour, currentTime.min+addmin, currentTime.sec};
    if(realTime.min >= 60){
        realTime.hour++;
        realTime.min = 0;
    }
    return realTime;
}
struct time addHour(struct time currentTime, int addhour){
    struct time realTime = {currentTime.hour+addhour, currentTime.min, currentTime.sec};
    if(realTime.hour > 23){
        realTime.hour = 0;
    }
    return realTime;
}

int getSeconds(struct time currentTime){
    int seconds = currentTime.sec;
    return seconds;
}

struct time add(struct time time1, struct time time2){
    time1.hour += time2.hour;
    time1.min += time2.min;
    time1.sec += time2.sec;

    if(time1.hour > 23){
        time1.hour = 0;
    }
    if(time1.min>=60){
        time1.hour++;
        time1.min = 0;
    }
    if(time1.sec >=60){
        time1.min++;
        time1.sec = 0;
    }
    return time1;
}

struct time subtract(struct time time1, struct time time2){ 
    time1.hour -= time2.hour;
    time1.min -= time2.min;
    time1.sec -= time2.sec;
    if(time1.sec < 0){
        time1.min --;
        time1.sec += 60;
    }
    if(time1.min < 0){
        time1.hour--;
        time1.min += 60;
    }
    if(time1.hour < 0){
        time1.hour = 23;
        time1.min += 60;
        time1.sec += 60;
    }
    return time1;
}

int main(){
    struct time nowTime = {23,13,35};
    printf("Time now: %d:%d:%d", nowTime.hour, nowTime.min, nowTime.sec);

    struct time newTime = addHour(nowTime, 1);
    printf("\nNew time: %d:%d:%d",newTime.hour, newTime.min, newTime.sec);
    printf("\nGet newTime seconds: %d", getSeconds(newTime));

    struct time addTime = add(nowTime, newTime);
    printf("\nTime addition: %d:%d:%d",addTime.hour, addTime.min, addTime.sec);

    struct time subtractTime = subtract(addTime, newTime);
    printf("\nTime subtract: %d:%d:%d", subtractTime.hour, subtractTime.min, subtractTime.sec);
    
    return 0;
}

/* Prints Time now: 23:13:35
          New time: 0:13:35
          Get newTime seconds: 35
          Time addition: 23:27:0
          Time subtract: 23:13:25 */
