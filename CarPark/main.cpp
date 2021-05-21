#include <iostream>
#include <cmath>
using namespace std;
 
   int parking(int hour, int minutes) {
      int time = (hour*60) + minutes;
      double is_twenty = floor(time/(21)); //1 if 21 minutes or more, 0 if less than 21 minutes.
      is_twenty = ceil(is_twenty/(is_twenty+1));
      double moreThanThree = floor(time/180); //1 if 3 hours or more, 0 if less than 3 hours.
      moreThanThree = ceil(moreThanThree/(moreThanThree+1));
      int cost3 = ceil(moreThanThree*(time-180)/60)*40;
      int cost2 = moreThanThree*(((-(floor((time-180)/60)*60)-minutes+time)/60)-1)*20;
      int cost1 = is_twenty*10;
      int Allcost = cost1 + cost2 + cost3;
      return Allcost;
   }

   int main()
   {
    int ans = parking(8,25);
    cout << ans << endl;
    return 0;
    }
