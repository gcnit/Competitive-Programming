#include <stdio.h>

#include <math.h>

main()

{

int t,i;

scanf("%d",&t);

while (t > 0) {

int edges[6];

for(i =0; i<6; ++i) {
scanf("%d", (edges+i));

}

double u = edges[0];

double U = edges[5];

double v = edges[3];

double V = edges[2];

double w = edges[4];

double W = edges[1];


double uu = (v*v) + (w*w) - (U*U);

double vv = (w*w) + (u*u) - (V*V);

double ww = (u*u) + (v*v) - (W*W);

double vol = (4*u*u*v*v*w*w)-(u*u*uu*uu)-(v*v*vv*vv)-(w*w*ww*ww)+(uu*vv*ww);

double volume = (sqrt(vol)) / 12;



printf("%.4lf\n", volume);

t--;

}

return 0;
}
