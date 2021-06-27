#include <bits/stdc++.h>
using namespace std;

char getRoman(int i){
        switch(i){
            case 1: return 'I';
            case 5: return 'V';
            case 10: return 'X';
            case 50: return 'L';
            case 100: return 'C';
            case 500: return 'D';
            case 1000: return 'M';
        }
        return 'I';
    }
    string intToRoman(int num) {
        int i = 1,r;
        string c = "";
        string temp;
        string s = "";
        while(num){
            r = num%10;
            
            if(1<=r && r<4){
                temp = "";
                c = getRoman(i);
                while(r--){
                    temp += c;
                }
                s = temp + s;
            }else if(r==4){
                c = getRoman(i);
                c = c + getRoman(i*5);
                s = c + s; 
            }else if(r==5){
                c = getRoman(i*5);
                s = c + s;
            }else if(5<r && r<9){
                temp ="";
                c = getRoman(i*5);
                temp += c;
                c = getRoman(i);
                while(r>5){
                    temp += c;
                    r--;
                }
                s = temp + s;
            }else if(r==9){
                c = getRoman(i); 
                c = c+ getRoman(i*10);
                s = c+s;
            }
            
            num = num/10;
            i = i*10;
            
        }
        
        return s;
    }