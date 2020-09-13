#include "igraphics.h"
#include <stdio.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int ball_x=0, ball_y=15,r=7;
int ball_x_2=0, ball_y_2=40+15;
int dx, dy;
int p,q=15,m=3,i, a[12],b[12],c[12],d[12],e[12],f1[2],f2[4],f3[6],h1[2],h3[6],h2[4];
int credit=0,page=0;
int counter=0,level=0,semi_level=0;

void iDraw()
{

	iClear();

if(level==0 && page==0)
{
  drawTexture(20,20,pic);


  iSetColor(240,128,128);
  iText(250,350,"START GAME",GLUT_BITMAP_TIMES_ROMAN_24);


  /*iSetColor(205,92,92);
  iText(223,250,"VIEW HIGH SCORE",GLUT_BITMAP_TIMES_ROMAN_24);*/

  iSetColor(165,42,42);
  iText(275,150,"CREDITS",GLUT_BITMAP_TIMES_ROMAN_24);


  //iFilledRectangle(376,148,50,18);


}

if(credit==1 && page==1)
  {
    iSetColor(255,255,255);
    iText(380,600,"DX-BALL",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(395,500,"Done by:",GLUT_BITMAP_HELVETICA_18);
    iText(350,450,"FIROS & SOUROV",GLUT_BITMAP_HELVETICA_18);
    iText(365,300,"Project Advisor:",GLUT_BITMAP_HELVETICA_18);
    iText(315,250,"DR. MD. MOSTOFA AKBAR",GLUT_BITMAP_HELVETICA_18);

    iSetColor(100,100,100);
    iText(20,20,"Press 'b' to go back");
  }


if (counter<=60 && level==1)
{

  iSetColor(255, 255, 00);
	iFilledCircle(ball_x, ball_y, 6);
	iSetColor(200, 00, 0);
	iCircle(ball_x, ball_y, r);

	iSetColor(128, 128, 128);
	iFilledRectangle(793, 0,12,650);

  char str[100];
  int i=0,j;
  int s=counter*5,score;
  score=s;
  if(s%10==0 && s%100!=0) s+=1;
  if(s%100==0) s+=11;
  if((s/10)%10==0) s+=10;
  while(s%10!=0)
  {
    i++;
    s=s/10;
  }

  for(j=0;j<i;j++)
  {
    str[i-j-1]=(score%10+48);
    score=score/10;
  }

  str[j]='\0';


  iSetColor(250, 0, 50);
	iText(808,615,"SCORE:",GLUT_BITMAP_TIMES_ROMAN_24); //score
	iSetColor(95,158,160);
	iText(900,615,str,GLUT_BITMAP_TIMES_ROMAN_24); //score

   iSetColor(250, 0, 50);
   iFilledRectangle(a[0]+1,635,65,15);
	 iFilledRectangle(a[1]+67,635,65,15);
	 iFilledRectangle(a[2]+133,635,65,15);
	 iFilledRectangle(a[3]+199,635,65,15);
	 iFilledRectangle(a[4]+265,635,65,15);
	 iFilledRectangle(a[5]+331,635,65,15);
	 iFilledRectangle(a[6]+397,635,65,15);
	 iFilledRectangle(a[7]+463,635,65,15);
	 iFilledRectangle(a[8]+529,635,65,15);
	 iFilledRectangle(a[9]+595,635,65,15);
	 iFilledRectangle(a[10]+661,635,65,15);
	 iFilledRectangle(a[11]+727,635,65,15);//1st row

  iSetColor(300, 0, 100);
  iFilledRectangle(b[0]+1,619,65,15);
	iFilledRectangle(b[1]+67,619,65,15);
	iFilledRectangle(b[2]+133,619,65,15);
	iFilledRectangle(b[3]+199,619,65,15);
	iFilledRectangle(b[4]+265,619,65,15);
	iFilledRectangle(b[5]+331,619,65,15);
	iFilledRectangle(b[6]+397,619,65,15);
	iFilledRectangle(b[7]+463,619,65,15);
	iFilledRectangle(b[8]+529,619,65,15);
	iFilledRectangle(b[9]+595,619,65,15);
	iFilledRectangle(b[10]+661,619,65,15);
	iFilledRectangle(b[11]+727,619,65,15);//2nd row

  iSetColor(350, 0, 150);
	iFilledRectangle(c[0]+1,603,65,15);
	iFilledRectangle(c[1]+67,603,65,15);
	iFilledRectangle(c[2]+133,603,65,15);
	iFilledRectangle(c[3]+199,603,65,15);
	iFilledRectangle(c[4]+265,603,65,15);
	iFilledRectangle(c[5]+331,603,65,15);
	iFilledRectangle(c[6]+397,603,65,15);
	iFilledRectangle(c[7]+463,603,65,15);
	iFilledRectangle(c[8]+529,603,65,15);
	iFilledRectangle(c[9]+595,603,65,15);
	iFilledRectangle(c[10]+661,603,65,15);
	iFilledRectangle(c[11]+727,603,65,15);//3rd row

  iSetColor(300, 0, 100);
	iFilledRectangle(d[0]+1,587,65,15);
	iFilledRectangle(d[1]+67,587,65,15);
	iFilledRectangle(d[2]+133,587,65,15);
	iFilledRectangle(d[3]+199,587,65,15);
	iFilledRectangle(d[4]+265,587,65,15);
	iFilledRectangle(d[5]+331,587,65,15);
	iFilledRectangle(d[6]+397,587,65,15);
	iFilledRectangle(d[7]+463,587,65,15);
	iFilledRectangle(d[8]+529,587,65,15);
	iFilledRectangle(d[9]+595,587,65,15);
  iFilledRectangle(d[10]+661,587,65,15);
	iFilledRectangle(d[11]+727,587,65,15);//4th row

  iSetColor(250, 0, 50);
	iFilledRectangle(e[0]+1,571,65,15);
	iFilledRectangle(e[1]+67,571,65,15);
	iFilledRectangle(e[2]+133,571,65,15);
	iFilledRectangle(e[3]+199,571,65,15);
	iFilledRectangle(e[4]+265,571,65,15);
	iFilledRectangle(e[5]+331,571,65,15);
	iFilledRectangle(e[6]+397,571,65,15);
	iFilledRectangle(e[7]+463,571,65,15);
	iFilledRectangle(e[8]+529,571,65,15);
	iFilledRectangle(e[9]+595,571,65,15);
	iFilledRectangle(e[10]+661,571,65,15);
	iFilledRectangle(e[11]+727,571,65,15);//5th row


  iSetColor(188,143,143);
	iFilledRectangle(p+7.5,0,95,q);
	iFilledCircle(p+7.5, 7.5, 7.5);
	iFilledCircle(p+102.5, 7.5, 7.5);


	iSetColor(106,90,205);
  iText(825,315,"DX BALL",GLUT_BITMAP_TIMES_ROMAN_24);

  iSetColor(0,139,139);
  iText(835,145,"CSE_15",GLUT_BITMAP_TIMES_ROMAN_24);
  iText(845,105,"BUET",GLUT_BITMAP_TIMES_ROMAN_24);

	if((ball_y<q+7.5 && (ball_x<p || ball_x>(p+110))) && (counter!=60 && counter!=0))
    {
      semi_level=1;
      iSetColor(220,20,60);
      iPauseTimer(0);
      iText(300,300,"GAME OVER",GLUT_BITMAP_TIMES_ROMAN_24);
      iText(268,270,"YOUR SCORE IS ",GLUT_BITMAP_TIMES_ROMAN_24);
      iText(458,270,str,GLUT_BITMAP_TIMES_ROMAN_24);

      iSetColor(440,40,120);
      iText(260,230,"PRESS 'End' TO EXIT",GLUT_BITMAP_TIMES_ROMAN_24);
    }


      if(counter==60)
    {
      ball_x_2=p+47; ball_y_2=40+15+7.5;
      semi_level=1;


      iPauseTimer(0);
      iSetColor(0,205,154);
      iText(278,300,"GAME FINISHED",GLUT_BITMAP_TIMES_ROMAN_24);
      iText(268,270,"YOUR SCORE IS ",GLUT_BITMAP_TIMES_ROMAN_24);
      iText(458,270,str,GLUT_BITMAP_TIMES_ROMAN_24);

      iSetColor(440,40,120);
      iText(180,230,"PRESS 'F1' & 'F2' TO GO TO NEXT LEVEL",GLUT_BITMAP_TIMES_ROMAN_24);

      iSetColor(0,191,255);
      iText(270,190,"PRESS 'End' TO EXIT",GLUT_BITMAP_TIMES_ROMAN_24);

    }

}



if(counter>=60 && level==2 && page==1)
{

  iSetColor(255, 255, 00);
	iFilledCircle(ball_x_2, ball_y_2, 6);
	iSetColor(200, 00, 0);
	iCircle(ball_x_2, ball_y_2, r);

	iSetColor(128, 128, 128);
	iFilledRectangle(793, 0,12,650);

  char str[100];
  int i=0,j;
  int s=(counter-30)*10,score;
  score=s;
  if(s%10==0 && s%100!=0) s+=1;
  if(s%100==0) s+=11;
  if((s/10)%10==0) s+=10;
  while(s%10!=0)
  {
    i++;
    s=s/10;
  }

  for(j=0;j<i;j++)
  {
    str[i-j-1]=(score%10+48);
    score=score/10;
  }

  str[j]='\0';


  iSetColor(250, 0, 50);
	iText(808,615,"SCORE:",GLUT_BITMAP_TIMES_ROMAN_24); //score
	iSetColor(95,158,160);
	iText(900,615,str,GLUT_BITMAP_TIMES_ROMAN_24); //score

   iSetColor(165,42,42);
   iFilledRectangle(a[0]+1,635,65,15);
	 iFilledRectangle(a[1]+67,635,65,15);
	 //iFilledRectangle(a[2]+133,635,65,15);
	 iFilledRectangle(a[3]+199,635,65,15);
	 iFilledRectangle(a[4]+265,635,65,15);
	 iFilledRectangle(a[5]+331,635,65,15);
	 iFilledRectangle(a[6]+397,635,65,15);
	 iFilledRectangle(a[7]+463,635,65,15);
	 iFilledRectangle(a[8]+529,635,65,15);
	 //iFilledRectangle(a[9]+595,635,65,15);
	 iFilledRectangle(a[10]+661,635,65,15);
	 iFilledRectangle(a[11]+727,635,65,15);//1st row

  iSetColor(300, 0, 100);
  iFilledRectangle(b[0]+1,619,65,15);
  iSetColor(105,105,105);
	iFilledRectangle(b[1]+67,619,65,15);
	iSetColor(300, 0, 100);
	iFilledRectangle(b[2]+133,619,65,15);
	iSetColor(105,105,105);
	iFilledRectangle(b[3]+199,619,65,15);
	iSetColor(300, 0, 100);
	iFilledRectangle(b[4]+265,619,65,15);
	iFilledRectangle(b[5]+331,619,65,15);
	iFilledRectangle(b[6]+397,619,65,15);
	iFilledRectangle(b[7]+463,619,65,15);
	iSetColor(105,105,105);
	iFilledRectangle(b[8]+529,619,65,15);
	iSetColor(300, 0, 100);
	iFilledRectangle(b[9]+595,619,65,15);
	iSetColor(105,105,105);
	iFilledRectangle(b[10]+661,619,65,15);
	iSetColor(300, 0, 100);
	iFilledRectangle(b[11]+727,619,65,15);//2nd row

  iSetColor(128,0,0);
	iFilledRectangle(c[0]+1,603,65,15);
	iSetColor(350, 0, 150);
	iFilledRectangle(c[1]+67,603,65,15);
	iFilledRectangle(c[2]+133,603,65,15);
	iFilledRectangle(c[3]+199,603,65,15);
	iSetColor(128,0,0);
	iFilledRectangle(c[4]+265,603,65,15);
	iSetColor(350, 0, 150);
	iFilledRectangle(c[5]+331,603,65,15);
	iFilledRectangle(c[6]+397,603,65,15);
	iSetColor(128,0,0);
	iFilledRectangle(c[7]+463,603,65,15);
	iSetColor(350, 0, 150);
	iFilledRectangle(c[8]+529,603,65,15);
	iFilledRectangle(c[9]+595,603,65,15);
	iFilledRectangle(c[10]+661,603,65,15);
	iSetColor(128,0,0);
	iFilledRectangle(c[11]+727,603,65,15);//3rd row

  iSetColor(300, 0, 100);
	iFilledRectangle(d[0]+1,587,65,15);
	iSetColor(105,105,105);
	iFilledRectangle(d[1]+67,587,65,15);
	iSetColor(300, 0, 100);
	iFilledRectangle(d[2]+133,587,65,15);
	iSetColor(105,105,105);
	iFilledRectangle(d[3]+199,587,65,15);
	iSetColor(300, 0, 100);
	iFilledRectangle(d[4]+265,587,65,15);
	iFilledRectangle(d[5]+331,587,65,15);
	iFilledRectangle(d[6]+397,587,65,15);
	iFilledRectangle(d[7]+463,587,65,15);
	iSetColor(105,105,105);
	iFilledRectangle(d[8]+529,587,65,15);
	iSetColor(300, 0, 100);
	iFilledRectangle(d[9]+595,587,65,15);
	iSetColor(105,105,105);
  iFilledRectangle(d[10]+661,587,65,15);
  iSetColor(300, 0, 100);
	iFilledRectangle(d[11]+727,587,65,15);//4th row

  iSetColor(165,42,42);
	iFilledRectangle(e[0]+1,571,65,15);
	iFilledRectangle(e[1]+67,571,65,15);
	iFilledRectangle(e[2]+133,571,65,15);
	iFilledRectangle(e[3]+199,571,65,15);
	iFilledRectangle(e[4]+265,571,65,15);
	iFilledRectangle(e[5]+331,571,65,15);
	iFilledRectangle(e[6]+397,571,65,15);
	iFilledRectangle(e[7]+463,571,65,15);
	iFilledRectangle(e[8]+529,571,65,15);
	iFilledRectangle(e[9]+595,571,65,15);
	iFilledRectangle(e[10]+661,571,65,15);
	iFilledRectangle(e[11]+727,571,65,15);//5th row


	iSetColor(188,143,143);
	iFilledRectangle(p+7.5,40,95,q);
	iFilledCircle(p+7.5, 40+7.5, 7.5);
	iFilledCircle(p+102.5, 40+7.5, 7.5);

  iSetColor(106,90,205);
  iText(825,315,"DX BALL",GLUT_BITMAP_TIMES_ROMAN_24);

  iSetColor(0,139,139);
  iText(835,145,"CSE_15",GLUT_BITMAP_TIMES_ROMAN_24);
  iText(845,105,"BUET",GLUT_BITMAP_TIMES_ROMAN_24);


		if((ball_y_2<q+40+7.5 && (ball_x_2<p || ball_x_2>(p+110))) && (counter<120 && counter!=60))
    {
      semi_level=1;
      iSetColor(220,20,60);
      iPauseTimer(0);
      iText(300,300,"GAME OVER",GLUT_BITMAP_TIMES_ROMAN_24);
      iText(268,270,"YOUR SCORE IS ",GLUT_BITMAP_TIMES_ROMAN_24);
      iText(458,270,str,GLUT_BITMAP_TIMES_ROMAN_24);

      iSetColor(440,40,120);
      iText(260,230,"PRESS 'End' TO EXIT",GLUT_BITMAP_TIMES_ROMAN_24);
    }

    if(counter==96)
    {
      semi_level=1;

      iPauseTimer(0);
      iSetColor(0,205,154);
      iText(278,300,"GAME FINISHED",GLUT_BITMAP_TIMES_ROMAN_24);
      iText(268,270,"YOUR SCORE IS ",GLUT_BITMAP_TIMES_ROMAN_24);
      iText(458,270,str,GLUT_BITMAP_TIMES_ROMAN_24);

      iSetColor(440,40,120);
      iText(270,190,"PRESS 'End' TO EXIT",GLUT_BITMAP_TIMES_ROMAN_24);
    }
}

}

void iMouseMove(int mx,int my)
{

}



void iMouseOver(int mx, int my)
{

if(mx>683)
   {
     mx=683;
   }
   if(mx<0)
   {
     mx=0;
   }
   if(semi_level==0)
  {
     p=mx;
  }

}

void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
	  if(mx>=250 && mx<=406 && my>=350 && my<=350+18 && page==0 ) level=1; //page=1;

	  if(mx>=275 && mx<=376 && my>=150 && my<=150+18 && page==0 ) credit++; page++;

	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{

	}
}

void iKeyboard(unsigned char key)
{
	if(key == 'p')
	{
		iPauseTimer(0);
	}

	if(key == 'P')
	{
		iPauseTimer(0);
	}

	if(key == 'r')
	{
		iResumeTimer(0);
	}

	if(key == 'R')
	{
		iResumeTimer(0);
	}



if(key == 'd' && p<=792-110 )
{
   p+=38;
}

if(key == 'a' && p>=7.5 )
{
   p-=38;
}

if(key == 'D' && p<=792-110 )
{
   p+=38;
}

if(key == 'A' && p>=7.5 )
{
   p-=38;
}

if(key == 'b')
	{
		page=0;
		credit--;
	}

}

void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_RIGHT && p<=792-110 )
	{
	  p+=38;
	}

	if(key == GLUT_KEY_LEFT && p>=7.5 )
	{
	  p-=38;
	}

		if(key == GLUT_KEY_F1 )
	{
	  dy = -dy;
	  level++;

  }

  	  if(key == GLUT_KEY_F2 )
    {

      iResumeTimer(0);
      m=1;
      semi_level=0;

    }

    if(key == GLUT_KEY_END )
    {
      exit(1);

    }
	//place your codes for other keys here
}

void ballChange(){


    if(level==1)
    {
    ball_x += dx;
  	ball_y += dy;

    if(ball_x > 793 || ball_x<0 )dx = -dx;
	  if(ball_y > 650 || ball_y<=q )dy = -dy;

	  }

    if(level==2)
    {
    ball_x_2 += dx;
  	ball_y_2 += dy;

    if(ball_x_2 > 793-7.5 || ball_x_2<0+7.5 )dx = -dx;
	  if(ball_y_2 > 650-7.5 || ball_y_2<q+40+7.5 )dy = -dy;

	  }



	if((ball_x>=1 && ball_x<=1+65 && ball_y>=635-2*r && ball_y<=635+15+2*r && a[0]==0) || (ball_x_2>=1 && ball_x_2<=1+65 && ball_y_2>=635-2*r && ball_y_2<=635+15+2*r && a[0]==0))
    {
        a[0]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=67 && ball_x<=67+65 && ball_y>=635-2*r && ball_y<=635+15+2*r && a[1]==0) || (ball_x_2>=67 && ball_x_2<=67+65 && ball_y_2>=635-2*r && ball_y_2<=635+15+2*r && a[1]==0))
    {
        a[1]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=133 && ball_x<=133+65 && ball_y>=635-2*r && ball_y<=635+15+2*r && a[2]==0) || (ball_x_2>=133 && ball_x_2<=133+65 && ball_y_2>=635-2*r && ball_y_2<=635+15+2*r && a[2]==0))
    {
        a[2]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=199 && ball_x<=199+65 && ball_y>=635-2*r && ball_y<=635+15+2*r && a[3]==0) || (ball_x_2>=199 && ball_x_2<=199+65 && ball_y_2>=635-2*r && ball_y_2<=635+15+2*r && a[3]==0))
    {
        a[3]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=265 && ball_x<=265+65 && ball_y>=635-2*r && ball_y<=635+15+2*r && a[4]==0) || (ball_x_2>=265 && ball_x_2<=265+65 && ball_y_2>=635-2*r && ball_y_2<=635+15+2*r && a[4]==0))
    {
        a[4]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=331 && ball_x<=331+65 && ball_y>=635-2*r && ball_y<=635+15+2*r && a[5]==0) || (ball_x_2>=331 && ball_x_2<=331+65 && ball_y_2>=635-2*r && ball_y_2<=635+15+2*r && a[5]==0))
    {
        a[5]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=397 && ball_x<=397+65 && ball_y>=635-2*r && ball_y<=635+15+2*r && a[6]==0) || (ball_x_2>=397 && ball_x_2<=397+65 && ball_y_2>=635-2*r && ball_y_2<=635+15+2*r && a[6]==0))
    {
        a[6]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=463 && ball_x<=463+65 && ball_y>=635-2*r && ball_y<=635+15+2*r && a[7]==0) || (ball_x_2>=463 && ball_x_2<=463+65 && ball_y_2>=635-2*r && ball_y_2<=635+15+2*r && a[7]==0))
    {
        a[7]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=529 && ball_x<=529+65 && ball_y>=635-2*r && ball_y<=635+15+2*r && a[8]==0) ||(ball_x_2>=529 && ball_x_2<=529+65 && ball_y_2>=635-2*r && ball_y_2<=635+15+2*r && a[8]==0))
    {
        a[8]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=595 && ball_x<=595+65 && ball_y>=635-2*r && ball_y<=635+15+2*r && a[9]==0) || (ball_x_2>=595 && ball_x_2<=595+65 && ball_y_2>=635-2*r && ball_y_2<=635+15+2*r && a[9]==0))
    {
        a[9]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=661 && ball_x<=661+65 && ball_y>=635-2*r && ball_y<=635+15+2*r && a[10]==0) || (ball_x_2>=661 && ball_x_2<=661+65 && ball_y_2>=635-2*r && ball_y_2<=635+15+2*r && a[10]==0))
    {
        a[10]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=727 && ball_x<=727+65 && ball_y>=635-2*r && ball_y<=635+15+2*r && a[11]==0) || (ball_x_2>=727 && ball_x_2<=727+65 && ball_y_2>=635-2*r && ball_y_2<=635+15+2*r && a[11]==0))
    {
        a[11]=1000;
        dy=-dy;
        counter++;
    } //row 1



  if((ball_x>=1 && ball_x<=1+65 && ball_y>=619-2*r && ball_y<=619+15+2*r && b[0]==0) || (ball_x_2>=1 && ball_x_2<=1+65 && ball_y_2>=619-2*r && ball_y_2<=619+15+2*r && b[0]==0))
    {
        b[0]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=67 && ball_x<=67+65 && ball_y>=619-2*r && ball_y<=619+15+2*r && b[1]==0) || (ball_x_2>=67 && ball_x_2<=67+65 && ball_y_2>=619-2*r && ball_y_2<=619+15+2*r && b[1]==0))
    {
        b[1]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=133 && ball_x<=133+65 && ball_y>=619-2*r && ball_y<=619+15+2*r && b[2]==0) || (ball_x_2>=133 && ball_x_2<=133+65 && ball_y_2>=619-2*r && ball_y_2<=619+15+2*r && b[2]==0))
    {
        b[2]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=199 && ball_x<=199+65 && ball_y>=619-2*r && ball_y<=619+15+2*r && b[3]==0) || (ball_x_2>=199 && ball_x_2<=199+65 && ball_y_2>=619-2*r && ball_y_2<=619+15+2*r && b[3]==0))
    {
        b[3]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=265 && ball_x<=265+65 && ball_y>=619-2*r && ball_y<=619+15+2*r && b[4]==0) || (ball_x_2>=265 && ball_x_2<=265+65 && ball_y_2>=619-2*r && ball_y_2<=619+15+2*r && b[4]==0))
    {
        b[4]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=331 && ball_x<=331+65 && ball_y>=619-2*r && ball_y<=619+15+2*r && b[5]==0) || (ball_x_2>=331 && ball_x_2<=331+65 && ball_y_2>=619-2*r && ball_y_2<=619+15+2*r && b[5]==0))
    {
        b[5]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=397 && ball_x<=397+65 && ball_y>=619-2*r && ball_y<=619+15+2*r && b[6]==0) || (ball_x_2>=397 && ball_x_2<=397+65 && ball_y_2>=619-2*r && ball_y_2<=619+15+2*r && b[6]==0))
    {
        b[6]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=463 && ball_x<=463+65 && ball_y>=619-2*r && ball_y<=619+15+2*r && b[7]==0) || (ball_x_2>=463 && ball_x_2<=463+65 && ball_y_2>=619-2*r && ball_y_2<=619+15+2*r && b[7]==0))
    {
        b[7]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=529 && ball_x<=529+65 && ball_y>=619-2*r && ball_y<=619+15+2*r && b[8]==0) || (ball_x_2>=529 && ball_x_2<=529+65 && ball_y_2>=619-2*r && ball_y_2<=619+15+2*r && b[8]==0))
    {
        b[8]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=595 && ball_x<=595+65 && ball_y>=619-2*r && ball_y<=619+15+2*r && b[9]==0) || (ball_x_2>=595 && ball_x_2<=595+65 && ball_y_2>=619-2*r && ball_y_2<=619+15+2*r && b[9]==0))
    {
        b[9]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=661 && ball_x<=661+65 && ball_y>=619-2*r && ball_y<=619+5+2*r && b[10]==0) || (ball_x_2>=661 && ball_x_2<=661+65 && ball_y_2>=619-2*r && ball_y_2<=619+15+2*r && b[10]==0))
    {
        b[10]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=727 && ball_x<=727+65 && ball_y>=619-2*r && ball_y<=619+15+2*r && b[11]==0) || (ball_x_2>=727 && ball_x_2<=727+65 && ball_y_2>=619-2*r && ball_y_2<=619+15+2*r && b[11]==0))
    {
        b[11]=1000;
        dy=-dy;
        counter++;
    } //row 2

  if((ball_x>=1 && ball_x<=1+65 && ball_y>=603-2*r && ball_y<=603+15+2*r && c[0]==0) || (ball_x_2>=1 && ball_x_2<=1+65 && ball_y_2>=603-2*r && ball_y_2<=603+15+2*r && c[0]==0))
    {
        c[0]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=67 && ball_x<=67+65 && ball_y>=603-2*r && ball_y<=603+15+2*r && c[1]==0) || (ball_x_2>=67 && ball_x_2<=67+65 && ball_y_2>=603-2*r && ball_y_2<=603+15+2*r && c[1]==0))
    {
        c[1]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=133 && ball_x<=133+65 && ball_y>=603-2*r && ball_y<=603+15+2*r && c[2]==0) || (ball_x_2>=133 && ball_x_2<=133+65 && ball_y_2>=603-2*r && ball_y_2<=603+15+2*r && c[2]==0))
    {
        c[2]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=199 && ball_x<=199+65 && ball_y>=603-2*r && ball_y<=603+15+2*r && c[3]==0) || (ball_x_2>=199 && ball_x_2<=199+65 && ball_y_2>=603-2*r && ball_y_2<=603+15+2*r && c[3]==0))
    {
        c[3]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=265 && ball_x<=265+65 && ball_y>=603-2*r && ball_y<=603+15+2*r && c[4]==0) || (ball_x_2>=265 && ball_x_2<=265+65 && ball_y_2>=603-2*r && ball_y_2<=603+15+2*r && c[4]==0))
    {
        c[4]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=331 && ball_x<=331+65 && ball_y>=603-2*r && ball_y<=603+15+2*r && c[5]==0) || (ball_x_2>=331 && ball_x_2<=331+65 && ball_y_2>=603-2*r && ball_y_2<=603+15+2*r && c[5]==0))
    {
        c[5]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=397 && ball_x<=397+65 && ball_y>=603-2*r && ball_y<=603+15+2*r && c[6]==0) || (ball_x_2>=397 && ball_x_2<=397+65 && ball_y_2>=603-2*r && ball_y_2<=603+15+2*r && c[6]==0))
    {
        c[6]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=463 && ball_x<=463+65 && ball_y>=603-2*r && ball_y<=603+15+2*r && c[7]==0) || (ball_x_2>=463 && ball_x_2<=463+65 && ball_y_2>=603-2*r && ball_y_2<=603+15+2*r && c[7]==0))
    {
        c[7]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=529 && ball_x<=529+65 && ball_y>=603-2*r && ball_y<=603+15+2*r && c[8]==0) || (ball_x_2>=529 && ball_x_2<=529+65 && ball_y_2>=603-2*r && ball_y_2<=603+15+2*r && c[8]==0))
    {
        c[8]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=595 && ball_x<=595+65 && ball_y>=603-2*r && ball_y<=603+15+2*r && c[9]==0) || (ball_x_2>=595 && ball_x_2<=595+65 && ball_y_2>=603-2*r && ball_y_2<=603+15+2*r && c[9]==0))
    {
        c[9]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=661 && ball_x<=661+65 && ball_y>=603-2*r && ball_y<=603+15+2*r && c[10]==0) || (ball_x_2>=661 && ball_x_2<=661+65 && ball_y_2>=603-2*r && ball_y_2<=603+15+2*r && c[10]==0))
    {
        c[10]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=727 && ball_x<=727+65 && ball_y>=603-2*r && ball_y<=603+15+2*r && c[11]==0) || (ball_x_2>=727 && ball_x_2<=727+65 && ball_y_2>=603-2*r && ball_y_2<=603+15+2*r && c[11]==0))
    {
        c[11]=1000;
        dy=-dy;
        counter++;
    } //row 3

  if((ball_x>=1 && ball_x<=1+65 && ball_y>=587-2*r && ball_y<=587+15+2*r && d[0]==0) || (ball_x_2>=1 && ball_x_2<=1+65 && ball_y_2>=587-2*r && ball_y_2<=587+15+2*r && d[0]==0))
    {
        d[0]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=67 && ball_x<=67+65 && ball_y>=587-2*r && ball_y<=587+15+2*r && d[1]==0) || (ball_x_2>=67 && ball_x_2<=67+65 && ball_y_2>=587-2*r && ball_y_2<=587+15+2*r && d[1]==0))
    {
        d[1]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=133 && ball_x<=133+65 && ball_y>=587-2*r && ball_y<=587+15+2*r && d[2]==0) || (ball_x_2>=133 && ball_x_2<=133+65 && ball_y_2>=587-2*r && ball_y_2<=587+15+2*r && d[2]==0))
    {
        d[2]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=199 && ball_x<=199+65 && ball_y>=587-2*r && ball_y<=587+15+2*r && d[3]==0) || (ball_x_2>=199 && ball_x_2<=199+65 && ball_y_2>=587-2*r && ball_y_2<=587+15+2*r && d[3]==0))
    {
        d[3]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=265 && ball_x<=265+65 && ball_y>=587-2*r && ball_y<=587+15+2*r && d[4]==0) || (ball_x_2>=265 && ball_x_2<=265+65 && ball_y_2>=587-2*r && ball_y_2<=587+15+2*r && d[4]==0))
    {
        d[4]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=331 && ball_x<=331+65 && ball_y>=587-2*r && ball_y<=587+15+2*r && d[5]==0) || (ball_x_2>=331 && ball_x_2<=331+65 && ball_y_2>=587-2*r && ball_y_2<=587+15+2*r && d[5]==0))
    {
        d[5]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=397 && ball_x<=397+65 && ball_y>=587-2*r && ball_y<=587+15+2*r && d[6]==0) || (ball_x_2>=397 && ball_x_2<=397+65 && ball_y_2>=587-2*r && ball_y_2<=587+15+2*r && d[6]==0))
    {
        d[6]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=463 && ball_x<=463+65 && ball_y>=587-2*r && ball_y<=587+15+2*r && d[7]==0) || (ball_x_2>=463 && ball_x_2<=463+65 && ball_y_2>=587-2*r && ball_y_2<=587+15+2*r && d[7]==0))
    {
        d[7]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=529 && ball_x<=529+65 && ball_y>=587-2*r && ball_y<=587+15+2*r && d[8]==0) || (ball_x_2>=529 && ball_x_2<=529+65 && ball_y_2>=587-2*r && ball_y_2<=587+15+2*r && d[8]==0))
    {
        d[8]=1000;
        counter++;
        dy=-dy;
    }
  if((ball_x>=595 && ball_x<=595+65 && ball_y>=587-2*r && ball_y<=587+15+2*r && d[9]==0) || (ball_x_2>=595 && ball_x_2<=595+65 && ball_y_2>=587-2*r && ball_y_2<=587+15+2*r && d[9]==0))
    {
        d[9]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=661 && ball_x<=661+65 && ball_y>=587-2*r && ball_y<=587+15+2*r && d[10]==0) || (ball_x_2>=661 && ball_x_2<=661+65 && ball_y_2>=587-2*r && ball_y_2<=587+15+2*r && d[10]==0))
    {
        d[10]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=727 && ball_x<=727+65 && ball_y>=587-2*r && ball_y<=587+15+2*r && d[11]==0) || (ball_x_2>=727 && ball_x_2<=727+65 && ball_y_2>=587-2*r && ball_y_2<=587+15+2*r && d[11]==0))
    {
        d[11]=1000;
        dy=-dy;
        counter++;
    } //row 4

  if((ball_x>=1 && ball_x<=1+65 && ball_y>=571-2*r && ball_y<=571+15+2*r && e[0]==0) || (ball_x_2>=1 && ball_x_2<=1+65 && ball_y_2>=571-2*r && ball_y_2<=571+15+2*r && e[0]==0))
    {
        e[0]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=67 && ball_x<=67+65 && ball_y>=571-2*r && ball_y<=571+15+2*r && e[1]==0) || (ball_x_2>=67 && ball_x_2<=67+65 && ball_y_2>=571-2*r && ball_y_2<=571+15+2*r && e[1]==0))
    {
        e[1]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=133 && ball_x<=133+65 && ball_y>=571-2*r && ball_y<=571+15+2*r && e[2]==0) || (ball_x_2>=133 && ball_x_2<=133+65 && ball_y_2>=571-2*r && ball_y_2<=571+15+2*r && e[2]==0))
    {
        e[2]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=199 && ball_x<=199+65 && ball_y>=571-2*r && ball_y<=571+15+2*r && e[3]==0) || (ball_x_2>=199 && ball_x_2<=199+65 && ball_y_2>=571-2*r && ball_y_2<=571+15+2*r && e[3]==0))
    {
        e[3]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=265 && ball_x<=265+65 && ball_y>=571-2*r && ball_y<=571+15+2*r && e[4]==0) || (ball_x_2>=265 && ball_x_2<=265+65 && ball_y_2>=571-2*r && ball_y_2<=571+15+2*r && e[4]==0))
    {
        e[4]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=331 && ball_x<=331+65 && ball_y>=571-2*r && ball_y<=571+15+2*r && e[5]==0) || (ball_x_2>=331 && ball_x_2<=331+65 && ball_y_2>=571-2*r && ball_y_2<=571+15+2*r && e[5]==0))
    {
        e[5]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=397 && ball_x<=397+65 && ball_y>=571-2*r && ball_y<=571+15+2*r && e[6]==0) || (ball_x_2>=397 && ball_x_2<=397+65 && ball_y_2>=571-2*r && ball_y_2<=571+15+2*r && e[6]==0))
    {
        e[6]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=463 && ball_x<=463+65 && ball_y>=571-2*r && ball_y<=571+15+2*r && e[7]==0) || (ball_x_2>=463 && ball_x_2<=463+65 && ball_y_2>=571-2*r && ball_y_2<=571+15+2*r && e[7]==0))
    {
        e[7]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=529 && ball_x<=529+65 && ball_y>=571-2*r && ball_y<=571+15+2*r && e[8]==0) || (ball_x_2>=529 && ball_x_2<=529+65 && ball_y_2>=571-2*r && ball_y_2<=571+15+2*r && e[8]==0))
    {
        e[8]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=595 && ball_x<=595+65 && ball_y>=571-2*r && ball_y<=571+15+2*r && e[9]==0) || (ball_x_2>=595 && ball_x_2<=595+65 && ball_y_2>=571-2*r && ball_y_2<=571+15+2*r && e[9]==0))
    {
        e[9]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=661 && ball_x<=661+65 && ball_y>=571-2*r && ball_y<=571+15+2*r && e[10]==0) || (ball_x_2>=661 && ball_x_2<=661+65 && ball_y_2>=571-2*r && ball_y_2<=571+15+2*r && e[10]==0))
    {
        e[10]=1000;
        dy=-dy;
        counter++;
    }
  if((ball_x>=727 && ball_x<=727+65 && ball_y>=571-2*r && ball_y<=571+15+2*r && e[11]==0) || (ball_x_2>=727 && ball_x_2<=727+65 && ball_y_2>=571-2*r && ball_y_2<=571+15+2*r && e[11]==0))
    {
        e[11]=1000;
        dy=-dy;
        counter++;
    } //row 5



    int i;

    if(m==1)
    {
      for(i=0;i<1;i++)
      {
        a[i]=0;
      }
      for(i=4;i<5;i++)
      {
        a[i]=0;
      }
      for(i=7;i<8;i++)
      {
        a[i]=0;
      }
      for(i=11;i<12;i++)
      {
        a[i]=0;
      }

      for(i=0;i<2;i++)
      {
        b[i]=0;
      }
      for(i=3;i<5;i++)
      {
        b[i]=0;
      }
      for(i=7;i<9;i++)
      {
        b[i]=0;
      }
      for(i=10;i<12;i++)
      {
        b[i]=0;
      }

      for(i=0;i<2;i++)
      {
        c[i]=0;
      }
      for(i=3;i<5;i++)
      {
        c[i]=0;
      }
      for(i=7;i<9;i++)
      {
        c[i]=0;
      }
      for(i=10;i<12;i++)
      {
        c[i]=0;
      }

      for(i=0;i<5;i++)
      {
        d[i]=0;
      }
      for(i=7;i<12;i++)
      {
        d[i]=0;
      }

      for(i=0;i<1;i++)
      {
        e[i]=0;
      }
      for(i=2;i<3;i++)
      {
        e[i]=0;
      }
      for(i=4;i<5;i++)
      {
        e[i]=0;
      }
      for(i=7;i<8;i++)
      {
        e[i]=0;
      }
      for(i=9;i<10;i++)
      {
        e[i]=0;
      }
      for(i=11;i<12;i++)
      {
        e[i]=0;
      }



      m++;
    }

}


int main()
{

   iSetTimer(1, ballChange);
    dx = 2;
	  dy = 6;


for(i=0;i<12;i++)
{
  a[i]=0;
}

for(i=0;i<12;i++)
{
  b[i]=0;
}

for(i=0;i<12;i++)
{
  c[i]=0;
}

for(i=0;i<12;i++)
{
  d[i]=0;
}

for(i=0;i<12;i++)
{
  e[i]=0;
}


	iInitialize(950, 650, "DX BALL!!!");


	return 0;
}

