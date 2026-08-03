class Solution {
public:
    double angleClock(int hour, int minutes) {

        double min = minutes * 6;
        double hr = hour * 30 + minutes * 0.5;

        double angle = abs(hr - min);

        if (angle > 180) {
            angle = 360 - angle;
        }

        return angle;
    }
};