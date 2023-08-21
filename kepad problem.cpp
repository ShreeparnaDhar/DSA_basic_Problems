/*You are given a string S of alphabet characters and the
task is to find its matching decimal representation as on the shown keypad.
 Output the decimal representation corresponding to the string. For ex:
     if you are given �amazon� then its corresponding decimal representation will be 262966.*/

        #include<stdio.h>
        #include<iostream>
        #include<conio.h>
        using namespace std;
       string stringNamebits(string s,int len);
     int main()
     {
         string s;
         cin>>s;
         int len = s.length();
         cout<<stringNamebits(s,len)<<endl;

    };
    string stringNamebits(string s, int N)
{
    string temp="";
    int i;

    for(i=0;i<N;i++)
    {
        if(s[i]=='a' || s[i]=='b' || s[i]=='c')
		    temp.insert(i,"2");
		else if(s[i]=='d' || s[i]=='e' || s[i]=='f')
		    temp.insert(i,"3");
		else if(s[i]=='i' || s[i]=='g' || s[i]=='h')
		    temp.insert(i,"4");
		else if(s[i]=='j' || s[i]=='k' || s[i]=='l')
		    temp.insert(i,"5");
		else if(s[i]=='m' || s[i]=='n' || s[i]=='o')
		    temp.insert(i,"6");
		else if(s[i]=='p' || s[i]=='q' || s[i]=='r' || s[i]=='s')
		    temp.insert(i,"7");
		else if(s[i]=='t' || s[i]=='u' || s[i]=='v')
		    temp.insert(i,"8");
		else temp.insert(i,"9");
           /* if(s[i]=='a'|| s[i]=='b'||s[i]=='c')
             temp.insert(i,"2");
        else if (s[i]=='d'|| s[i]=='e' s[i]=='f')
            temp.insert(i,"3");
        else if (s[i]=='g'|| s[i]=='h' ||s[i]=='i')
            temp.insert(i,"4");
        else if(s[i]=='j'|| s[i]=='k' ||s[i]=='l')
            temp.insert(i,"5");
            else if(s[i]=='m'|| s[i]=='n' ||s[i]=='o')
            temp.insert(i,"6");
            else if(s[i]=='p' || s[i]=='q' ||s[i]=='r' ||s[i]=='s')
            temp.insert(i,"7");
            else if (s[i]=='t' || s[i]=='u' || s[i]=='v')
            temp.insert(i,"8");
            else
            temp.insert(i,"9");*/


	}
	return temp;
    };


