#ifndef LINE_H_INCLUDED
#define LINE_H_INCLUDED
void plotstraightline(int x_left,int x_right,int y_left, int y_right,int c)
{

     double m; //m equals slope and c equals intercept
     int i,xleft,xright,yleft,yright,deltax,deltay,deltax1,deltay1,steps,xk,yk,delta2,p;
     xleft=x_left;
     xright=x_right;
     yleft=y_left;
     yright=y_right;

    //calculating deltas
     deltax=xright-xleft;
     deltay=yright-yleft;
     if(deltax!=0){
     m=deltay/deltax;
     }
     if(deltax==0){m=2;}

     if(m>1){
     deltax1=2*deltax;
     delta2=2*(deltax-deltay);
     p=deltax1-deltay;
     }

     else if(0<m<1){
     deltay1=2*deltay;
     delta2=2*(deltay-deltax);
     p=deltay1-deltax;
     }

     //initialising xk,yk and plotting them
     xk=xleft;
     yk=yleft;
     putpixel(xk,yk,c);

     //plotting the line if m>1
     if(m>1){
     for(i=0;i<deltay;i++){

        if(p<0){
        yk=yk+1;
        putpixel(xk,yk,c);
        p=p+deltax1;
        }
        else{
        yk=yk+1;
        xk=xk+1;
        putpixel(xk,yk,c);
        p=p+delta2;
        }
     }}

     //plotting the line if 0<m<1
     if((m<1)){
     for(i=0;i<deltax;i++){

        if(p<0){
        xk=xk+1;
        putpixel(xk,yk,c);
        p=p+deltay1;
        }
        else{
        yk=yk+1;
        xk=xk+1;
        putpixel(xk,yk,c);
        p=p+delta2;
        }
     }}

}


#endif
