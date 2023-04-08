/*Program to grade students score*/
// Written by Prof Silas Angera
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int A=12, A_=11,BP=10,B=9,B_=8,CP=7,C=6,C_=5,DP=4,D=3,D_=2 ,E=1;

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
   //gretest value numeral index, not greater than number
   return index;
}
void decToRoman(numeral *nu, int num){
   int max;
   if(num != 0){
      max = maxNume(nu, num);
      printf("%s", nu[max].sym);
      num -= nu[max].val;//decrease number
      decToRoman(nu, num);//recursively print numerals
   }
}

int main(){
	time_t t;
	time(&t);
	char form[40];
	char stream[40];
	long int r;
	int j;
	int term,G,H,J,K;

	numeral nume[3]={{"I",1},{"IV",4},{"V",5}};

	float a,b,c,d,e,g,h,total,avg,max=0,min=100,lang,scie,art,p,cluster_points,avg1,m,n,o,q,s,u,v,w,x;

	printf("ENTER STUDENT INDEX NO; ");
	scanf("%d",&r);
	printf("NAME: ");
	scanf("%s",&form);
	printf("SCHOOL: ");
	scanf("%s",&stream);
	printf("TERM: ");
	scanf("%d",&term);
	printf("ENTER ENG MARKS; ");
	scanf("%f",&a);
	printf("ENTER KISW MARKS; ");
	scanf("%f",&b);
	printf("ENTER MATHS MARKS; ");
	scanf("%f",&c);
	printf("ENTER CHEM MARKS; ");
	scanf("%f",&d);
//selecting subjects of the student
	printf("\n★CHOOSEN SUBJECT(s) OF THE STUDENT\n\t1.BIO\n\t2.PHY\n\t3.BOTH\n\t : ");
	scanf("%d",&G);
	switch(G)
	{
	case 1 :
		printf("ENTER BIO MARK:\n");
		scanf("%f",&e);
		break;
	case 2 :
		printf("ENTER PHY MARK:\n");
		scanf("%f",&m);
		break;
	case 3 :
		printf("ENTER BIO MARK:\n");
		scanf("%f",&e);
		printf("ENTER PHY MARK:\n");
		scanf("%f",&m);
		break;
	default:
		printf("INVALID CHOICE");
		break;
	}
	printf("★CHOOSEN SUBJECT(s) OF THE STUDENT\n\t1.HIST\n\t2.GEO\n\t3.CRE\n\t4.GEO&HIST\n\t5.HIST&CRE\n\t6.GEO&CRE:\n");
	scanf("%d",&J);
	switch(J)
	{
		case 1 :
		printf("ENTER HIST MARK:\n");
		scanf("%f",&g);
		break;
		case 2 :
		printf("ENTER GEO MARK:\n");
		scanf("%f",&n);
		break;
		case 3 :
		printf("ENTER CRE MARK:\n");
		scanf("%f",&o);
		break;
		case 4 :
		printf("ENTER HIST MARK:\n");
		scanf("%f",&g);
		printf("ENTER GEO MARK:\n");
		scanf("%f",&n);
		break;
		case 5 :
		printf("ENTER HIST MARK:\n");
		scanf("%f",&g);
		printf("ENTER CRE MARK:\n");
		scanf("%f",&o);
		break;
		case 6 :
		printf("ENTER GEO MARK:\n");
		scanf("%f",&n);
		printf("ENTER CRE MARK:\n");
		scanf("%f",&o);
		break;
		default:
		printf("INVALID CHOICE!!");
	}
//This will help the user to choose subjects
	printf("★CHOOSEN SUBJECT(s) OF THE STUDENT\t\n\t1.BUST\n\t2.AGRI\n\t3.COMP\n\t4.MUSIC\n\t5.HOME_SCIE\n\t6.ELECTRICITY\n\t7.MECHANICS; ");
	scanf("%d",&H);
	switch(H)
	{
		case 1 :
		printf("ENTER BUST MARK:\n");
		scanf("%f",&h);
		break;
		case 2 :
		printf("ENTER AGRI MARK:\n");
		scanf("%f",&q);
		break;
		case 3 :
		printf("ENTER COMP MARK:\n");
		scanf("%f",&s);
		break;
		case 4 :
		printf("ENTER MUSIC MARK:\n");
		scanf("%f",&x);
		break;
		case 5 :
		printf("ENTER HOME_SCIE MARK:\n");
		scanf("%f",&u);
		break;
		case 6 :
		printf("ENTER ELECTRICITY MARK:\n");
		scanf("%f",&v);
		break;
		case 7 :
		printf("ENTER MECHANICS MARK:\n");
		scanf("%f",&w);
		break;
		default:
		printf("INVALID CHOICE!!");
	}

//Checking if the marks entered is valid, if it is above 100% the system won't calculate
	if(a<=100&&b<=100&&c<=100&&d<=100&&e<=100&&g<=100&&h<=100&&m<=100&&n<=100&&o<=100&&q<=100&&s<=100&&u<=100&&v<=100&&w<=100&&x<=100)
	{

//Displaying the students performance
		printf("\t\t\n\n\t TRANS-NZOIA COUNTY MOCK EXAMINATIONS\n\t\t\t KENYA CERTIFICATE OF SECONDARY EDUCATION \t\t\n\n");
		printf("\t\n NAME: %s \t\n",form);
		printf("\t\n INDEX NO: %d \t\n",r);
		printf("\t\n SCHOOL: %s \t\n",stream);
		if(term >0 && term <= 3){//checking input number
     	 printf("\t\n TERM: \t", term);
     	 decToRoman(nume, term);
   		}
   		else
   		{
      		printf("Invalid Input");
  		}

		total=a+b+c+d+(e||m||(e+m))+(g||n||o||(g+n)||(g+o)||(n+o))+(h||q||s||u||v||w||x);
  		avg=total/8;

		printf("\t\t\n\n TOTAL MARKS: %.0f/800",total);
		printf("\t\t\n\n AGP: %.2f \t\n",avg);

//Grading the average mark

		if(avg>=81)
		{
		printf("\t\n MEAN GRADE: A");
		}
		else if(avg>=74)
		{
			printf("\t\n MEAN GRADE: A-");
		}
		else if(avg>=67)
		{
		printf("\t\n MEAN GRADE: B+");
		}
		else if(avg>=60)
		{
		printf("\t\n MEAN GRADE: B ");
		}
		else if(avg>=53)
		{
		printf("\t\n MEAN GRADE: B-");
		}
		else if(avg>=46)
		{
			printf("\t\n MEAN GRADE: C+");
		}
		else if(avg>=39)
		{
			printf("\t\n MEAN GRADE: C");
		}
		else if(avg>=32)
		{
			printf("\t\n MEAN GRADE: C-");
		}
		else if(avg>=25)
		{
			printf("\t\n MEAN GRADE: D+");
		}
		else if(avg>=18)
		{
			printf("\t\n MEAN GRADE: D");
		}
		else if(avg>=11)
		{
			printf("\t\n MEAN GRADE: D-");
		}
		else if(avg>=7)
		{
			printf("\t\n MEAN GRADE: E");
		}
		else
		{
			printf("\t\n MEAN GRADE: FAIL");
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
		printf("\t\n\n HIGHEST SCORE IS: %.0f\t\n",max);
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
		printf("\t\n MINIMUM SCORE IS: %.0f\t\n",min);
//Grading students subjects
		if(a>=80){
		a=A;
			printf("\t\n\n ENG: A");
		}
		else if(a>=75){
		a=A_;
			printf("\t\n\n ENG: A-");
		}
		else if(a>=70){
		a=BP;
			printf("\t\n\n ENG: B+");
		}
		else if(a>=65){
		a=B;
			printf("\t\n\n ENG: B");
		}
		else if(a>=60){
		a=B_;
			printf("\t\n\n ENG: B-");
		}
		else if(a>=55){
		a=CP;
			printf("\t\n\n ENG: C+");
		}
		else if(a>=50){
		a=C;
			printf("\t\n\n ENG: C");
		}
		else if(a>=46){
		a=C_;
			printf("\t\n\n ENG: C-");
		}
		else if(a>=40){
		a=DP;
			printf("\t\n\n ENG: D+");
		}
		else if(a>=35){
		a=D;
			printf("\t\n\n ENG: D");
		}
		else if(a>=30){
		a=D_;
			printf("\t\n\n ENG: D-");
		}
		else{
		a=E;
			printf("\t\n\n ENG: E");
		}

		if(b>=78){
		b=A;
			printf("\tKISW: A" );
			}
		else if(b>=73){
		b=A_;
			printf("\tKISW: A-");
		}
		else if(b>=68){
		b=BP;
			printf("\tKISW: B+" );
		}
		else if(b>=63){
		b=B;
			printf("\tKISW: B" );
		}
		else if(b>=58){
		b=B_;
			printf("\tKISW: B-" );
		}
		else if(b>=53){
		b=CP;
			printf("\tKISW: C+" );
		}
		else if(b>=48){
		b=C;
			printf("\tKISW: C");
		}
		else if(b>=43){
		b=C_;
			printf("\tKISW: C-");
		}
		else if(b>=38){
		b=DP;
			printf("\tKISW: D+");
		}
		else if(b>=33){
		b=D;
			printf("\tKISW: D" );
		}
		else if(b>=28){
		b=D_;
			printf("\tKISW: D-");
		}
		else{
		b=E;
			printf("\tKISW: E");
		}

		if(c>=70){
		c=A;
			printf("\tMATHS: A");
		}
		else if(c>=65){
		c=A_;
			printf("\tMATHS: A-");
		}
		else if(c>=60){
		c=BP;
			printf("\tMATHS: B+");
		}
		else if(c>=55){
		c=B;
			printf("\tMATHS: B");
		}
		else if(c>=49){
		c=B_;
			printf("\tMATHS: B-");
		}
		else if(c>=43){
		c=CP;
			printf("\tMATHS: C+");
		}
		else if(c>=37){
		c=C;
			printf("\tMATHS: C");
		}
		else if(c>=31){
		c=C_;
			printf("\tMATHS: C-");
		}
		else if(c>=25){
		c=DP;
			printf("\tMATHS: D+");
		}
		else if(c>=19){
		c=D;
			printf("\tMATHS: D");
		}
		else if(c>=12){
		c=D_;
			printf("\tMATHS: D-");
		}
		else{
		c=E;
			printf("\tMATHS: E");
		}

		if(d>=65){
		d=A;
			printf("\tCHEM: A");
		}
		else if(d>=60){
		d=A_;
			printf("\tCHEM: A-");
		}
		else if(d>=55){
		d=BP;
			printf("\tCHEM: B+");
		}
		else if(d>=50){
		d=B;
			printf("\tCHEM: B");
		}
		else if(d>=45){
		d=B_;
			printf("\tCHEM: B-");
		}
		else if(d>=40){
		d=CP;
			printf("\tCHEM: C+");
		}
		else if(d>=35){
		d=C;
			printf("\tCHEM: C");
		}
		else if(d>=30){
		d=C_;
			printf("\tCHEM: C-");
		}
		else if(d>=25){
		d=DP;
			printf("\tCHEM: D+");
		}
		else if(d>=20){
		d=D;
			printf("\tCHEM: D");
		}
		else if(d>=15){
		d=D_;
			printf("\tCHEM: D-");
		}
		else{
		d=E;
			printf("\tCHEM: E");
		}

//Grading biology
	if(e>=m)
	{
		if(e>=80){
		e=A;
			printf("\t\n BIO: A");
		}
		else if(e>=75){
		e=A_;
			printf("\t\n BIO: A-");
		}
		else if(e>=70){
		e=BP;
			printf("\t\n BIO: B+");
		}
		else if(e>=65){
		e=B;
			printf("\t\n BIO: B");
		}
		else if(e>=60){
		e=B_;
			printf("\t\n BIO: B-");
		}
		else if(e>=55){
		e=CP;
			printf("\t\n BIO: C+");
		}
		else if(e>=50){
		e=C;
			printf("\t\n BIO: C");
		}
		else if(e>=45){
		e=C_;
			printf("\t\n BIO: C-");
		}
		else if(e>=40){
		e=DP;
			printf("\t\n BIO: D+");
		}
		else if(e>=35){
		e=D;
			printf("\t\n BIO: D");
		}
		else if(e>=30){
		e=D_;
			printf("\t\n BIO: D-");
		}
		else{
		e=E;
			printf("\t\n BIO: E");
		}
	}
//Grading physics
	else if(m>=e)
	{
		if(m>=60)
		{
			m=A;
			printf("\t\nPHY: A");
		}
	}

//Grading history
	if(g>=n&&g>=o)
	{
		if(g>=80){
		g=A;
			printf("\tHIST: A");
		}
		else if(g>=75){
		g=A_;
			printf("\tHIST: A-");
		}
		else if(g>=70){
		g=BP;
			printf("\tHIST: B+");
		}
		else if(g>=65){
		g=B;
			printf("\tHIST: B");
		}
		else if(g>=60){
		g=B_;
			printf("\tHIST: B-");
		}
		else if(g>=55){
		g=CP;
			printf("\tHIST: C+");
		}
		else if(g>=50){
		g=C;
			printf("\tHIST: C");
		}
		else if(g>=45){
		g=C_;
			printf("\tHIST: C-");
		}
		else if(g>=40){
		g=DP;
			printf("\tHIST: D+");
		}
		else if(g>=35){
		g=D;
			printf("\tHIST: D");
		}
		else if(g>=30){
		g=D_;
			printf("\tHIST: D-");
		}
		else{
		g=E;
			printf("\tHIST: E");
		}
	}
	else if(n>=o&&n>=g){
//Grading system for Geography
		if(n>=65)
		{
			n=A;
			printf("\tGEO: A");
		}
	}
// Grading CRE
	else
	{
		if(o>=90)
		{
			o=A;
			printf("\tCRE: A");
		}
	}
//Grading bussiness studies
	if(h>q&&h>s&&h>u&&h>v&&h>w&&h>x)
	{
		if(h>=80){
		h=A;
			printf("\tBUS: A");
		}
		else if(h>=75){
		h=A_;
		printf("\tBUS: A-");
		}
		else if(h>=70){
		h=BP;
		printf("\tBUS: B+");
		}
		else if(h>=65){
		h=B;
			printf("\tBUS: B");
		}
		else if(h>=60){
		h=B_;
		printf("\tBUS: B-");
		}
		else if(h>=55){
		h=CP;
		printf("\tBUS: C+");
			}
		else if(h>=50){
		h=C;
			printf("\tBUS: C");
			}
		else if(h>=45){
		h=C_;
		printf("\tBUS: C-");
			}
		else if(h>=40){
		h=DP;
		printf("\tBUS: D+");
			}
		else if(h>=35){
		h=D;
			printf("\tBUS: D");
			}
		else if(h>=30){
		h=D_;
		printf("\tBUS: D-");
			}
		else{
		h=E;
			printf("\tBUS: E");
		}
		}
//Agriculture given as q
	else if(q>s&&q>u&&q>v&&q>w&&q>x&&q>h){
		if(q>=80){
		q=A;
			printf("\tAGRI: A");
		}
		else if(q>=75){
		q=A_;
		printf("\tAGRI: A-");
		}
		else if(q>=70){
		q=BP;
		printf("\tAGRI: B+");
		}
		else if(q>=65){
		q=B;
			printf("\tAGRI: B");
		}
		else if(q>=60){
		q=B_;
		printf("\tAGRI: B-");
		}
		else if(q>=55){
		q=CP;
		printf("\tAGRI: C+");
			}
		else if(q>=50){
		q=C;
			printf("\tAGRI: C");
			}
		else if(q>=45){
		q=C_;
		printf("\tAGRI: C-");
			}
		else if(q>=40){
		q=DP;
		printf("\tAGRI: D+");
			}
		else if(q>=35){
		q=D;
			printf("\tAGRI: D");
			}
		else if(q>=30){
		q=D_;
		printf("\tAGRI: D-");
			}
		else{
		q=E;
			printf("\tAGRI: E");
		}
		}
// Computer assigned as s
	else if(s>u&&s>v&&s>w&&s>x&&s>w&&s>h){
		if(s>=80){
		s=A;
			printf("\tCOMP: A");
		}
		else if(s>=75){
		s=A_;
		printf("\tCOMP: A-");
		}
		else if(s>=70){
		s=BP;
		printf("\tCOMP: B+");
		}
		else if(s>=65){
		s=B;
			printf("\tCOMP: B");
		}
		else if(s>=60){
		s=B_;
		printf("\tCOMP: B-");
		}
		else if(s>=55){
		s=CP;
		printf("\tCOMP: C+");
			}
		else if(s>=50){
		s=C;
			printf("\tCOMP: C");
			}
		else if(s>=45){
		s=C_;
		printf("\tCOMP: C-");
			}
		else if(s>=40){
		s=DP;
		printf("\tCOMP: D+");
			}
		else if(s>=35){
		s=D;
			printf("\tCOMP: D");
			}
		else if(s>=30){
		s=D_;
		printf("\tCOMP: D-");
			}
		else{
		s=E;
			printf("\tCOMP: E");
		}
		}
// Home science assigned as variable u
	else if(u>v&&u>w&&u>x&&u>s&&u>q&&u>h){
		if(u>=80){
		u=A;
			printf("\tHOME_SCIE: A");
		}
		else if(u>=75){
		u=A_;
		printf("\tHOME_SCIE: A-");
		}
		else if(u>=70){
		u=BP;
		printf("\tHOME_SCIE: B+");
		}
		else if(u>=65){
		u=B;
			printf("\tHOME_SCIE: B");
		}
		else if(u>=60){
		u=B_;
		printf("\tHOME_SCIE: B-");
		}
		else if(u>=55){
		u=CP;
		printf("\tHOME_SCIE: C+");
			}
		else if(u>=50){
		u=C;
			printf("\tHOME_SCIE: C");
			}
		else if(u>=45){
		u=C_;
		printf("\tHOME_SCIE: C-");
			}
		else if(u>=40){
		u=DP;
		printf("\tHOME_SCIE: D+");
			}
		else if(u>=35){
		u=D;
			printf("\tHOME_SCIE: D");
			}
		else if(u>=30){
		u=D_;
		printf("\tHOME_SCIE: D-");
			}
		else{
		u=E;
			printf("\tHOME_SCIE: E");
		}
		}
/*Grading system for Electrical which have been assigned as variabble v*/
	else if(v>w&&v>x&&v>u&&v>s&&v>q&&v>h){
		if(v>=80){
		v=A;
			printf("\tELECTRICAL: A");
		}
		else if(v>=75){
		v=A_;
		printf("\tELECTRICAL: A-");
		}
		else if(v>=70){
		v=BP;
		printf("\tELECTRICAL: B+");
		}
		else if(v>=65){
		v=B;
			printf("\tELECTRICAL: B");
		}
		else if(v>=60){
		v=B_;
		printf("\tELECTRICAL: B-");
		}
		else if(v>=55){
		v=CP;
		printf("\tELECTRICAL: C+");
			}
		else if(v>=50){
		v=C;
			printf("\tELECTRICAL: C");
			}
		else if(v>=45){
		v=C_;
		printf("\tELECTRICAL: C-");
			}
		else if(v>=40){
		v=DP;
		printf("\tELECTRICAL: D+");
			}
		else if(v>=35){
		v=D;
			printf("\tELECTRICAL: D");
			}
		else if(v>=30){
		v=D_;
		printf("\tELECTRICAL: D-");
			}
		else{
		v=E;
			printf("\tELECTRICAL: E");
		}
		}
//Grading mechanics
	else if(w>x&&w>v&&w>u&&w>s&&w>q&&w>h)
		{
		if(w>=80){
		w=A;
			printf("\tMECHANICS: A");
		}
		else if(w>=75){
		w=A_;
		printf("\tMECHANICS: A-");
		}
		else if(w>=70){
		w=BP;
		printf("\tMECHANICS: B+");
		}
		else if(w>=65){
		w=B;
			printf("\tMECHANICS: B");
		}
		else if(w>=60){
		w=B_;
		printf("\tMECHANICS: B-");
		}
		else if(w>=55){
		w=CP;
		printf("\tMECHANICS: C+");
			}
		else if(w>=50){
		w=C;
			printf("\tMECHANICS: C");
			}
		else if(w>=45){
		w=C_;
		printf("\tMECHANICS: C-");
			}
		else if(w>=40){
		w=DP;
		printf("\tMECHANICS: D+");
			}
		else if(w>=35){
		w=D;
			printf("\tMECHANICS: D");
			}
		else if(w>=30){
		w=D_;
		printf("\tMECHANICS: D-");
			}
		else{
		w=E;
			printf("\tMECHANICS: E");
		}
	}
//Grading music subject
	else
	{
		if(x>=80){
		x=A;
			printf("\tMUSIC: A");
		}
		else if(x>=75){
		x=A_;
		printf("\tMUSIC: A-");
		}
		else if(x>=70){
		x=BP;
		printf("\tMUSIC: B+");
		}
		else if(x>=65){
		x=B;
			printf("\tMUSIC: B");
		}
		else if(h>=60){
		x=B_;
		printf("\tMUSIC: B-");
		}
		else if(x>=55){
		x=CP;
		printf("\tMUSIC: C+");
			}
		else if(x>=50){
		x=C;
			printf("\tMUSIC: C");
			}
		else if(x>=45){
		x=C_;
		printf("\tMUSIC: C-");
			}
		else if(x>=40){
		x=DP;
		printf("\tMUSIC: D+");
			}
		else if(h>=35){
		x=D;
			printf("\tMUSIC: D");
			}
		else if(x>=30){
		x=D_;
		printf("\tMUSIC: D-");
			}
		else{
		x=E;
			printf("\tMUSIC: E");
		}
	}
//Finding the total points of the student

	avg1=a+b+c+d+(e||m||(e+m))+(g||n||o||(g+n)||(g+o)||(n+o))+(h||q||s||u||v||w||x);
	printf("\t\n\t\n PTS: %.0f\t\n",avg1);
		if(a>=b)
		{
			lang=a;
		}
		else
		{
			lang=b;
		}

		if(d>=e&&d>=m)
		{
			scie=d;
		}
		else if(e>=d&&e>=m)
		{
			scie=e;
		}
		else{
			scie=m;
			}
		if(g>=(h||q||s||u||v||w||x))
		{
			if(g>=n)
			{
				if(g>=o)
				{
					art=g;
				}
				else
				{
					art=o;
				}
			}
			else
			{
				if(n>=o)
				{
					art=n;
				}
				else
				{
					art=o;
				}
			}
		}
		else
		{
			art=(h||q||s||u||v||w||x);
		}

		p=lang+scie+art+c;
		cluster_points = sqrt((avg1/84)*(p/48))*48;
		printf("\t\n CLUSTER POINTS: %.3f\t\n",cluster_points);
/*Giving the student status , if he doing well or not*/
		if(avg>=74.5)
		{
			printf("\t\n\t\n PRINCIPAL'S COMMENT: Good Work Keep it up! \t\n\t\n");
		}
		else if(avg>=49.5)
		{
			printf("\t\n\t\n PRINCIPAL'S COMMENT: Average, put in more effort on your weak areas\t\n\t\n");
		}
		else if(avg>=24.5)
		{
			printf("\t\n\t\n PRINCIPAL'S COMMENT: Weak but have potential, pull up your socks and concentrate on studies\t\n\t\n");
	    }
		else
		{
			printf("\t\n\t\n PRINCIPAL'S COMMENT: Poor, Put in more effort and concentrate in your studies \t\n\t\n");
		}
		printf("DATE: %s",ctime(&t));
	}
	else
	{
	printf("\t\n Enter a valid score\n i.e below 100\t\n");
	}
    return 0;
	}
