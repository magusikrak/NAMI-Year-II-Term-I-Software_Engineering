#include <iostream>
#include <string.h>
using namespace std;

int wordCount(char *word){
    int count = 0;
    while (*word != 0){
        while (*word !=0 && isspace(*word)){
            *word++;
        }
        if(*word!=0){
            count++;
        }
        while (*word !=0 && !isspace(*word)){
            *word++;
        }
    }
    return count;
}
int wordCount(string str){
    int count,numspace,numchar=0;
    for(int i=0;i<str.length();i++){						//70
        if(str.at[i]==' ' || str.at[i]=='\t'){
            numspace++;
            numchar=0;
        }else{
            numspace=0;
            numchar++;
        }

        if(numspace==0 && numchar==1){
            count++;
        }

    }
    return count;
}
int main(){
    char word[50];
    cout << "Enter a secntence: ";
    cin.getline(word, 50);
    char *wordptr = word;
    int count = wordCount(word);
    cout << "Words:" << count;

}