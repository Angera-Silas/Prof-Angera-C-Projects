﻿//*Program to grade students score and store in a file*/
// Written by Prof Silas Angera
#include <stdio.h>
#include <math.h>
#include <time.h>
int A=12, A_=11,BP=10,B=9,B_=8,CP=7,C=6,C_=5,DP=4,D=3,D_=2 ,E=1;
FILE*ftpr;
typedef struct{
   char *sym;
   int val;
}numeral;
int maxNume(numeral *nu, int num){
   int i, index;
   for(i = 0; i<3; i++){//5 numerals in array
      if(nu[i].val <= num)
         index = i;
   }
   //greatest value numeral index, not greater than number
   return index;
}
void decToRoman(numeral *nu, int num){
   int max;
   if(num != 0){
      max = maxNume(nu, num);
      fprintf(ftpr,"%s", nu[max].sym);
      num -= nu[max].val;//decrease number
      decToRoman(nu, num);//recursively print numerals
   }
}
int main(){
	//storing students records in a file

	time_t t;
	time(&t);
	char form;
	char stream;
	long int term;
	numeral nume[3]={{"I",1},{"IV",4},{"V",5}};
	int r;
	float a,b,c,d,e,g,h,total,avg,max=0,min=100,lang,scie,art,p,cluster_points,avg1;
	ftpr=fopen("record.docx", "a+");
	printf("ENTER STUDENT INDEX NO; ");
	scanf("%d",&r);
	printf("NAME: ");
	scanf("%c",&form);
	printf("SCHOOL: ");
	scanf("%c",&stream);
	printf("TERM: ");
	scanf("%li",&term);
	printf("ENTER ENG MARKS; ");
	scanf("%f",&a);
	printf("ENTER KISW MARKS; ");
	scanf("%f",&b);
	printf("ENTER MATHS MARKS; ");
	scanf("%f",&c);
	printf("ENTER CHEM MARKS; ");
	scanf("%f",&d);
	printf("ENTER BIO/PHY MARKS; ");
	scanf("%f",&e);
	printf("ENTER HIST/GEO/CRE MARKS; ");
	scanf("%f",&g);
	printf("ENTER BUS/AGRI/COMP/MUSIC MARKS; ");
	scanf("%f",&h);
//Checking if the marks entered is valid, if it is above 100% the system won't calculate
	if(a<=100&&b<=100&&c<=100&&d<=100&&e<=100&&g<=100&&h<=100)
	{
		total=a+b+c+d+e+g+h;
		avg=total/7;
//Displaying the students performance
		fprintf(ftpr,"\t\t\n\n\tTRANS-NZOIA COUNTY MOCK EXAMINATIONS\t\t");
		fprintf(ftpr,"\t\t\n\n\tKENYA CERTIFICATE OF SECONDARY EDUCATION \t\n");
		fprintf(ftpr,"\t\n INDEX NO: %d\t\n",r);
		fprintf(ftpr,"\t\n NAME: %c\t\n",form);
		fprintf(ftpr, "\t\n SCHOOL: %c\t\n",stream);
		if(term >0 && term <= 3){//checking input number
     	 fprintf(ftpr,"\t\n TERM: ",term);
     	 decToRoman(nume, term);
   		}
   		else
   		{
      		fprintf(ftpr,"Invalid Input");
  		}
		fprintf(ftpr,"\t\t\n\n TOTAL MARKS: %.0f/700",total);
		fprintf(ftpr,"\t\t\n\n AVERAGE MARK: %.2f\n",avg);

//Grading the average mark
		if(avg>=81)
		{
			fprintf(ftpr,"\t\n MEAN GRADE: A");
		}
		else if(avg>=74)
		{
			fprintf(ftpr,"\t\n MEAN GRADE: A-");
		}
		else if(avg>=67)
		{
			fprintf(ftpr,"\t\n MEAN GRADE: B+");
		}
		else if(avg>=60)
		{
			fprintf(ftpr,"\t\n MEAN GRADE: B ");
		}
		else if(avg>=53)
		{
			fprintf(ftpr,"\t\n MEAN GRADE: B-");
		}
		else if(avg>=46)
		{
			fprintf(ftpr,"\t\n MEAN GRADE: C+");
		}
		else if(avg>=39)
		{
			fprintf(ftpr,"\t\n MEAN GRADE: C");
		}
		else if(avg>=32)
		{
			fprintf(ftpr,"\t\n MEAN GRADE: C-");
		}
		else if(avg>=25)
		{
			fprintf(ftpr,"\t\n MEAN GRADE: D+");
		}
		else if(avg>=18)
		{
			fprintf(ftpr,"\t\n MEAN GRADE: D");
		}
		else if(avg>=11)
		{
			fprintf(ftpr,"\t\n MEAN GRADE: D-");
		}
		else if(avg>=7)
		{
			fprintf(ftpr,"\t\n MEAN GRADE: E");
		}
		else
		{
			fprintf(ftpr,"\t\n MEAN GRADE: FAIL");
		}
//Cheking the highest score
		if (a>max)
		max=a;
		if(b>max)
		max=b;
		if(c>max)
		max=c;
		if(d>max)
		max=d;
		if(e>max)
		max=e;
		if(g>max)
		max=g;
		if(h>max)
		max=h;
		fprintf(ftpr,"\t\n\t\n HIGHEST SCORE IS: %.0f\t\n",max);
/*Checking the mimimum score*/
		if(a<min)
		min=a;
		if(b<min)
		min=b;
		if(c<min)
		min=c;
		if(d<min)
		min=d;
		if(e<min)
		min=e;
		if(g<min)
		min=g;
		if(h<min)
		min=h;
		fprintf(ftpr,"\t\n MINIMUM SCORE IS: %.0f\t\n",min);

//Grading students subjects
		if(a>=80){
		a=A;
			fprintf(ftpr,"\t\n\n ENG: A");
		}
		else if(a>=75){
		a=A_;
			fprintf(ftpr,"\t\n\n ENG: A-");
		}
		else if(a>=70){
		a=BP;
			fprintf(ftpr,"\t\n\n ENG: B+");
		}
		else if(a>=65){
		a=B;
			fprintf(ftpr,"\t\n\n ENG: B");
		}
		else if(a>=60){
		a=B_;
			fprintf(ftpr,"\t\n\n ENG: B-");
		}
		else if(a>=55){
		a=CP;
			fprintf(ftpr,"\t\n\n ENG: C+");
		}
		else if(a>=50){
		a=C;
			fprintf(ftpr,"\t\n\n ENG: C");
		}
		else if(a>=46){
		a=C_;
			fprintf(ftpr,"\t\n\n ENG: C-");
		}
		else if(a>=40){
		a=DP;
			fprintf(ftpr,"\t\n\n ENG: D+");
		}
		else if(a>=35){
		a=D;
			fprintf(ftpr,"\t\n\n ENG: D");
		}
		else if(a>=30){
		a=D_;
			fprintf(ftpr,"\t\n\n ENG: D-");
		}
		else{
		a=E;
			fprintf(ftpr,"\t\n\n ENG: E");
		}

		if(b>=78){
		b=A;
			fprintf(ftpr,"\tKISW: A" );
			}
		else if(b>=73){
		b=A_;
			fprintf(ftpr,"\tKISW: A-");
		}
		else if(b>=68){
		b=BP;
			fprintf(ftpr,"\tKISW: B+" );
		}
		else if(b>=63){
		b=B;
			fprintf(ftpr,"\tKISW: B" );
		}
		else if(b>=58){
		b=B_;
			fprintf(ftpr,"\tKISW: B-" );
		}
		else if(b>=53){
		b=CP;
			fprintf(ftpr,"\tKISW: C+" );
		}
		else if(b>=48){
		b=C;
			fprintf(ftpr,"\tKISW: C");
		}
		else if(b>=43){
		b=C_;
			fprintf(ftpr,"\tKISW: C-");
		}
		else if(b>=38){
		b=DP;
			fprintf(ftpr,"\tKISW: D+");
		}
		else if(b>=33){
		b=D;
			fprintf(ftpr,"\tKISW: D" );
		}
		else if(b>=28){
		b=D_;
			fprintf(ftpr,"\tKISW: D-");
		}
		else{
		b=E;
			fprintf(ftpr,"\tKISW: E");
		}

		if(c>=70){
		c=A;
			fprintf(ftpr,"\tMATHS: A");
		}
		else if(c>=65){
		c=A_;
			fprintf(ftpr,"\tMATHS: A-");
		}
		else if(c>=60){
		c=BP;
			fprintf(ftpr,"\tMATHS: B+");
		}
		else if(c>=55){
		c=B;
			fprintf(ftpr,"\tMATHS: B");
		}
		else if(c>=49){
		c=B_;
			fprintf(ftpr,"\tMATHS: B-");
		}
		else if(c>=43){
		c=CP;
			fprintf(ftpr,"\tMATHS: C+");
		}
		else if(c>=37){
		c=C;
			fprintf(ftpr,"\tMATHS: C");
		}
		else if(c>=31){
		c=C_;
			fprintf(ftpr,"\tMATHS: C-");
		}
		else if(c>=25){
		c=DP;
			fprintf(ftpr,"\tMATHS: D+");
		}
		else if(c>=19){
		c=D;
			fprintf(ftpr,"\tMATHS: D");
		}
		else if(c>=12){
		c=D_;
			fprintf(ftpr,"\tMATHS: D-");
		}
		else{
		c=E;
			fprintf(ftpr,"\tMATHS: E");
		}

		if(d>=65){
		d=A;
			fprintf(ftpr,"\tCHEM: A");
		}
		else if(d>=60){
		d=A_;
			fprintf(ftpr,"\tCHEM: A-");
		}
		else if(d>=55){
		d=BP;
			fprintf(ftpr,"\tCHEM: B+");
		}
		else if(d>=50){
		d=B;
			fprintf(ftpr,"\tCHEM: B");
		}
		else if(d>=45){
		d=B_;
			fprintf(ftpr,"\tCHEM: B-");
		}
		else if(d>=40){
		d=CP;
			fprintf(ftpr,"\tCHEM: C+");
		}
		else if(d>=35){
		d=C;
			fprintf(ftpr,"\tCHEM: C");
		}
		else if(d>=30){
		d=C_;
			fprintf(ftpr,"\tCHEM: C-");
		}
		else if(d>=25){
		d=DP;
			fprintf(ftpr,"\tCHEM: D+");
		}
		else if(d>=20){
		d=D;
			fprintf(ftpr,"\tCHEM: D");
		}
		else if(d>=15){
		d=D_;
			fprintf(ftpr,"\tCHEM: D-");
		}
		else{
		d=E;
			fprintf(ftpr,"\tCHEM: E");
		}

		if(e>=80){
		e=A;
			fprintf(ftpr,"\t\n BIO/PHY: A");
		}
		else if(e>=75){
		e=A_;
			fprintf(ftpr,"\t\n BIO/PHY: A-");
		}
		else if(e>=70){
		e=BP;
			fprintf(ftpr,"\t\n BIO/PHY: B+");
		}
		else if(e>=65){
		e=B;
			fprintf(ftpr,"\t\n BIO/PHY: B");
		}
		else if(e>=60){
		e=B_;
			fprintf(ftpr,"\t\n BIO/PHY: B-");
		}
		else if(e>=55){
		e=CP;
			fprintf(ftpr,"\t\n BIO/PHY: C+");
		}
		else if(e>=50){
		e=C;
			fprintf(ftpr,"\t\n BIO/PHY: C");
		}
		else if(e>=45){
		e=C_;
			fprintf(ftpr,"\t\n BIO/PHY: C-");
		}
		else if(e>=40){
		e=DP;
			fprintf(ftpr,"\t\n BIO/PHY: D+");
		}
		else if(e>=35){
		e=D;
			fprintf(ftpr,"\t\n BIO/PHY: D");
		}
		else if(e>=30){
		e=D_;
			fprintf(ftpr,"\t\n BIO/PHY: D-");
		}
		else{
		e=E;
			fprintf(ftpr,"\t\n BIO/PHY: E");
		}

		if(g>=80){
		g=A;
			fprintf(ftpr,"\tHIST/GEO/CRE: A");
		}
		else if(g>=75){
		g=A_;
			fprintf(ftpr,"\tHIST/GEO/CRE: A-");
		}
		else if(g>=70){
		g=BP;
			fprintf(ftpr,"\tHIST/GEO/CRE: B+");
		}
		else if(g>=65){
		g=B;
			fprintf(ftpr,"\tHIST/GEO/CRE: B");
		}
		else if(g>=60){
		g=B_;
			fprintf(ftpr,"\tHIST/GEO/CRE: B-");
		}
		else if(g>=55){
		g=CP;
			fprintf(ftpr,"\tHIST/GEO/CRE: C+");
		}
		else if(g>=50){
		g=C;
			fprintf(ftpr,"\tHIST/GEO/CRE: C");
		}
		else if(g>=45){
		g=C_;
			fprintf(ftpr,"\tHIST/GEO/CRE: C-");
		}
		else if(g>=40){
		g=DP;
			fprintf(ftpr,"\tHIST/GEO/CRE: D+");
		}
		else if(g>=35){
		g=D;
			fprintf(ftpr,"\tHIST/GEO/CRE: D");
		}
		else if(g>=30){
		g=D_;
			fprintf(ftpr,"\tHIST/GEO/CRE: D-");
		}
		else{
		g=E;
			fprintf(ftpr,"\tHIST/GEO/CRE: E");
		}

		if(h>=80){
		h=A;
			fprintf(ftpr,"\t\n BUS/AGRI/COMP/MUSIC: A");
		}
		else if(h>=75){
		h=A_;
		fprintf(ftpr,"\t\n BUS/AGRI/COMP/MUSIC: A-");
		}
		else if(h>=70){
		h=BP;
		fprintf(ftpr,"\t\n BUS/AGRI/COMP/MUSIC: B+");
		}
		else if(h>=65){
		h=B;
			fprintf(ftpr,"\t\n BUS/AGRI/COMP/MUSIC: B");
		}
		else if(h>=60){
		h=B_;
		fprintf(ftpr,"\t\n BUS/AGRI/COMP/MUSIC: B-");
		}
		else if(h>=55){
		h=CP;
		fprintf(ftpr,"\t\n BUS/AGRI/COMP/MUSIC: C+");
			}
		else if(h>=50){
		h=C;
			fprintf(ftpr,"\t\n BUS/AGRI/COMP/MUSIC: C");
			}
		else if(h>=45){
		h=C_;
		fprintf(ftpr,"\t\n BUS/AGRI/COMP/MUSIC: C-");
			}
		else if(h>=40){
		h=DP;
		fprintf(ftpr,"\t\n BUS/AGRI/COMP/MUSIC: D+");
			}
		else if(h>=35){
		h=D;
			fprintf(ftpr,"\t\n BUS/AGRI/COMP/MUSIC: D");
			}
		else if(h>=30){
		h=D_;
		fprintf(ftpr,"\t\n BUS/AGRI/COMP/MUSIC: D-");
			}
		else{
		h=E;
			fprintf(ftpr,"\t\n BUS/AGRI/COMP/MUSIC: E");
		}
	avg1=a+b+c+d+e+g+h;
	fprintf(ftpr,"\t\n\n PTS: %.0f\t\n",avg1);
		if(a>=b)
		{
			lang=a;
		}
		else
		{
			lang=b;
		}

		if(d>=e)
		{
			scie=d;
		}
		else
		{
			scie=e;
		}

		if(g>=h)
		{
			art=g;
		}
		else
		{
			art=h;
		}

		p=lang+scie+art+c;
		cluster_points=sqrt((avg1/84)*(p/48))*48;
		fprintf(ftpr,"\t\n CLUSTER POINTS: %.3f\t",cluster_points);
/*Giving the student status , if he doing well or not*/
		if(avg>=74.5)
		{
			fprintf(ftpr,"\t\n\t\n PRINCIPAL'S COMMENT:\n Good Work Keep it up! \t\n\t");
		}
		else if(avg>=49.5)
		{
			fprintf(ftpr,"\t\n\t\n PRINCIPAL'S COMMENT:\n Average, put in more effort on your weak areas\t\t\n");
		}
		else if(avg>=24.5)
		{
			fprintf(ftpr,"\t\n\t\n PRINCIPAL'S COMMENT:\n Weak but have potential, pull up your socks and concentrate on studies\t\t\n");
	    }
		else
		{
			fprintf(ftpr,"\t\n\t\n PRINCIPAL'S COMMENT:\n Poor, Put in more effort and concentrate in your studies \t\t\n");
		}
		fprintf(ftpr,"\nDATE: %s",ctime(&t));
	}
	else
	{
	printf("\t\n Enter a valid score\n i.e below 100\t\n");
	fprintf(ftpr,"\t\n YOU ENTERED AN INVALID VALUE\t\t\n");
	}
	fclose(ftpr);
	}
