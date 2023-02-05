#include <iostream>
#include <cmath>
using namespace std;
/*Input : t(trial)
          (wx wy wz xy xz yz) t times(side of tetrahedron wxyz)
 Output : radius of incribed sphere
     */
//
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long int side[6];
        long double r;
        for (int i = 0; i < 6; i++)
            cin >> side[i];
        // if(side[0]==side[1] && side[1]==side[2] && side[2]==side[3] && side[3]==side[4] && side[4]==side[5]){
        //     r=(sqrt(6)/12)*side[0];
        // }
        // else{
        long double vol, sa, s[4], a[3];
        /*    0(u),1(v),2(w),3(W),4(V),5(U)
              u′ = v² + w² - U²
              v′ = w² + u² - V²
              w′ = u² + v² - W²
              volume = 1⁄12 × √(4u²v²w² - u²u′² - v²v′² - w²w′² + u′v′w′)          */
        a[0] = ((side[1] * side[1]) + (side[2] * side[2]) - (side[5] * side[5]));
        a[1] = ((side[2] * side[2]) + (side[0] * side[0]) - (side[4] * side[4]));
        a[2] = ((side[0] * side[0]) + (side[1] * side[1]) - (side[3] * side[3]));

        vol = sqrt((4 * side[0] * side[0] * side[1] * side[1] * side[2] * side[2]) - (side[0] * side[0] * a[0] * a[0]) - (side[1] * side[1] * a[1] * a[1]) - (side[2] * side[2] * a[2] * a[2]) + (a[0] * a[1] * a[2])) / 12.0;

        /* triangle abc,
           s(semiperimeter)=(a+b+c)/2
           area = sqrt(s(s-a)(s-b)(s-c))    */
        long double t;

        t = ((side[0] + side[1] + side[3]) / 2.0);
        s[0] = sqrt(t * (t - side[0]) * (t - side[1]) * (t - side[3]));

        t = ((side[1] + side[2] + side[5]) / 2.0);
        s[1] = sqrt(t * (t - side[1]) * (t - side[2]) * (t - side[5]));

        t = ((side[0] + side[2] + side[4]) / 2.0);
        s[2] = sqrt(t * (t - side[0]) * (t - side[2]) * (t - side[4]));

        t = ((side[3] + side[4] + side[5]) / 2.0);
        s[3] = sqrt(t * (t - side[3]) * (t - side[4]) * (t - side[5]));

        sa = s[0] + s[1] + s[2] + s[3];

        r = (3.0 * vol) / sa;
        // }
        // printf("%.4lf\n", r);
        cout<<r<<endl;
    }
    return 0;
}
